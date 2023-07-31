// Generated from /bdata2/yyh/ASTCC/AllGrammar/rubyGrammar/Corundum.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CorundumParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		LITERAL=1, COMMA=2, SEMICOLON=3, CRLF=4, REQUIRE=5, END=6, DEF=7, RETURN=8, 
		PIR=9, IF=10, ELSE=11, ELSIF=12, UNLESS=13, WHILE=14, RETRY=15, BREAK=16, 
		FOR=17, TRUE=18, FALSE=19, PLUS=20, MINUS=21, MUL=22, DIV=23, MOD=24, 
		EXP=25, EQUAL=26, NOT_EQUAL=27, GREATER=28, LESS=29, LESS_EQUAL=30, GREATER_EQUAL=31, 
		ASSIGN=32, PLUS_ASSIGN=33, MINUS_ASSIGN=34, MUL_ASSIGN=35, DIV_ASSIGN=36, 
		MOD_ASSIGN=37, EXP_ASSIGN=38, BIT_AND=39, BIT_OR=40, BIT_XOR=41, BIT_NOT=42, 
		BIT_SHL=43, BIT_SHR=44, AND=45, OR=46, NOT=47, LEFT_RBRACKET=48, RIGHT_RBRACKET=49, 
		LEFT_SBRACKET=50, RIGHT_SBRACKET=51, NIL=52, SL_COMMENT=53, ML_COMMENT=54, 
		WS=55, INT=56, FLOAT=57, ID=58, ID_GLOBAL=59, ID_FUNCTION=60;
	public static final int
		RULE_prog = 0, RULE_expression_list = 1, RULE_expression = 2, RULE_global_get = 3, 
		RULE_global_set = 4, RULE_global_result = 5, RULE_function_inline_call = 6, 
		RULE_require_block = 7, RULE_pir_inline = 8, RULE_pir_expression_list = 9, 
		RULE_function_definition = 10, RULE_function_definition_body = 11, RULE_function_definition_header = 12, 
		RULE_function_name = 13, RULE_function_definition_params = 14, RULE_function_definition_params_list = 15, 
		RULE_function_definition_param_id = 16, RULE_return_statement = 17, RULE_function_call = 18, 
		RULE_function_call_param_list = 19, RULE_function_call_params = 20, RULE_function_param = 21, 
		RULE_function_unnamed_param = 22, RULE_function_named_param = 23, RULE_function_call_assignment = 24, 
		RULE_all_result = 25, RULE_elsif_statement = 26, RULE_if_elsif_statement = 27, 
		RULE_if_statement = 28, RULE_unless_statement = 29, RULE_while_statement = 30, 
		RULE_for_statement = 31, RULE_init_expression = 32, RULE_all_assignment = 33, 
		RULE_for_init_list = 34, RULE_cond_expression = 35, RULE_loop_expression = 36, 
		RULE_for_loop_list = 37, RULE_statement_body = 38, RULE_statement_expression_list = 39, 
		RULE_assignment = 40, RULE_dynamic_assignment = 41, RULE_int_assignment = 42, 
		RULE_float_assignment = 43, RULE_string_assignment = 44, RULE_initial_array_assignment = 45, 
		RULE_array_assignment = 46, RULE_array_definition = 47, RULE_array_definition_elements = 48, 
		RULE_array_selector = 49, RULE_dynamic_result = 50, RULE_dynamic_ = 51, 
		RULE_int_result = 52, RULE_float_result = 53, RULE_string_result = 54, 
		RULE_comparison_list = 55, RULE_comparison = 56, RULE_comp_var = 57, RULE_lvalue = 58, 
		RULE_rvalue = 59, RULE_break_expression = 60, RULE_literal_t = 61, RULE_float_t = 62, 
		RULE_int_t = 63, RULE_bool_t = 64, RULE_nil_t = 65, RULE_id_ = 66, RULE_id_global = 67, 
		RULE_id_function = 68, RULE_terminator = 69, RULE_else_token = 70, RULE_crlf = 71;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "expression_list", "expression", "global_get", "global_set", 
			"global_result", "function_inline_call", "require_block", "pir_inline", 
			"pir_expression_list", "function_definition", "function_definition_body", 
			"function_definition_header", "function_name", "function_definition_params", 
			"function_definition_params_list", "function_definition_param_id", "return_statement", 
			"function_call", "function_call_param_list", "function_call_params", 
			"function_param", "function_unnamed_param", "function_named_param", "function_call_assignment", 
			"all_result", "elsif_statement", "if_elsif_statement", "if_statement", 
			"unless_statement", "while_statement", "for_statement", "init_expression", 
			"all_assignment", "for_init_list", "cond_expression", "loop_expression", 
			"for_loop_list", "statement_body", "statement_expression_list", "assignment", 
			"dynamic_assignment", "int_assignment", "float_assignment", "string_assignment", 
			"initial_array_assignment", "array_assignment", "array_definition", "array_definition_elements", 
			"array_selector", "dynamic_result", "dynamic_", "int_result", "float_result", 
			"string_result", "comparison_list", "comparison", "comp_var", "lvalue", 
			"rvalue", "break_expression", "literal_t", "float_t", "int_t", "bool_t", 
			"nil_t", "id_", "id_global", "id_function", "terminator", "else_token", 
			"crlf"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, "','", "';'", null, "'require'", "'end'", "'def'", "'return'", 
			"'pir'", "'if'", "'else'", "'elsif'", "'unless'", "'while'", "'retry'", 
			"'break'", "'for'", "'true'", "'false'", "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'**'", "'=='", "'!='", "'>'", "'<'", "'<='", "'>='", "'='", "'+='", 
			"'-='", "'*='", "'/='", "'%='", "'**='", "'&'", "'|'", "'^'", "'~'", 
			"'<<'", "'>>'", null, null, null, "'('", "')'", "'['", "']'", "'nil'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "LITERAL", "COMMA", "SEMICOLON", "CRLF", "REQUIRE", "END", "DEF", 
			"RETURN", "PIR", "IF", "ELSE", "ELSIF", "UNLESS", "WHILE", "RETRY", "BREAK", 
			"FOR", "TRUE", "FALSE", "PLUS", "MINUS", "MUL", "DIV", "MOD", "EXP", 
			"EQUAL", "NOT_EQUAL", "GREATER", "LESS", "LESS_EQUAL", "GREATER_EQUAL", 
			"ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
			"MOD_ASSIGN", "EXP_ASSIGN", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", 
			"BIT_SHL", "BIT_SHR", "AND", "OR", "NOT", "LEFT_RBRACKET", "RIGHT_RBRACKET", 
			"LEFT_SBRACKET", "RIGHT_SBRACKET", "NIL", "SL_COMMENT", "ML_COMMENT", 
			"WS", "INT", "FLOAT", "ID", "ID_GLOBAL", "ID_FUNCTION"
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
	public String getGrammarFileName() { return "Corundum.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CorundumParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgContext extends ParserRuleContext {
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public TerminalNode EOF() { return getToken(CorundumParser.EOF, 0); }
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			expression_list(0);
			setState(145);
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

	public static class Expression_listContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminatorContext terminator() {
			return getRuleContext(TerminatorContext.class,0);
		}
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public Expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_list; }
	}

	public final Expression_listContext expression_list() throws RecognitionException {
		return expression_list(0);
	}

	private Expression_listContext expression_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Expression_listContext _localctx = new Expression_listContext(_ctx, _parentState);
		Expression_listContext _prevctx = _localctx;
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_expression_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LITERAL:
			case REQUIRE:
			case DEF:
			case RETURN:
			case PIR:
			case IF:
			case UNLESS:
			case WHILE:
			case FOR:
			case TRUE:
			case FALSE:
			case BIT_NOT:
			case NOT:
			case LEFT_RBRACKET:
			case NIL:
			case INT:
			case FLOAT:
			case ID:
			case ID_GLOBAL:
			case ID_FUNCTION:
				{
				setState(148);
				expression();
				setState(149);
				terminator(0);
				}
				break;
			case SEMICOLON:
			case CRLF:
				{
				setState(151);
				terminator(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(160);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Expression_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression_list);
					setState(154);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(155);
					expression();
					setState(156);
					terminator(0);
					}
					} 
				}
				setState(162);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
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

	public static class ExpressionContext extends ParserRuleContext {
		public Function_definitionContext function_definition() {
			return getRuleContext(Function_definitionContext.class,0);
		}
		public Function_inline_callContext function_inline_call() {
			return getRuleContext(Function_inline_callContext.class,0);
		}
		public Require_blockContext require_block() {
			return getRuleContext(Require_blockContext.class,0);
		}
		public If_statementContext if_statement() {
			return getRuleContext(If_statementContext.class,0);
		}
		public Unless_statementContext unless_statement() {
			return getRuleContext(Unless_statementContext.class,0);
		}
		public RvalueContext rvalue() {
			return getRuleContext(RvalueContext.class,0);
		}
		public Return_statementContext return_statement() {
			return getRuleContext(Return_statementContext.class,0);
		}
		public While_statementContext while_statement() {
			return getRuleContext(While_statementContext.class,0);
		}
		public For_statementContext for_statement() {
			return getRuleContext(For_statementContext.class,0);
		}
		public Pir_inlineContext pir_inline() {
			return getRuleContext(Pir_inlineContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_expression);
		try {
			setState(173);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(163);
				function_definition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(164);
				function_inline_call();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(165);
				require_block();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(166);
				if_statement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(167);
				unless_statement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(168);
				rvalue(0);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(169);
				return_statement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(170);
				while_statement();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(171);
				for_statement();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(172);
				pir_inline();
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

	public static class Global_getContext extends ParserRuleContext {
		public LvalueContext var_name;
		public Token op;
		public Id_globalContext global_name;
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public Id_globalContext id_global() {
			return getRuleContext(Id_globalContext.class,0);
		}
		public Global_getContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_global_get; }
	}

	public final Global_getContext global_get() throws RecognitionException {
		Global_getContext _localctx = new Global_getContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_global_get);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			((Global_getContext)_localctx).var_name = lvalue();
			setState(176);
			((Global_getContext)_localctx).op = match(ASSIGN);
			setState(177);
			((Global_getContext)_localctx).global_name = id_global();
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

	public static class Global_setContext extends ParserRuleContext {
		public Id_globalContext global_name;
		public Token op;
		public All_resultContext result;
		public Id_globalContext id_global() {
			return getRuleContext(Id_globalContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public All_resultContext all_result() {
			return getRuleContext(All_resultContext.class,0);
		}
		public Global_setContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_global_set; }
	}

	public final Global_setContext global_set() throws RecognitionException {
		Global_setContext _localctx = new Global_setContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_global_set);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(179);
			((Global_setContext)_localctx).global_name = id_global();
			setState(180);
			((Global_setContext)_localctx).op = match(ASSIGN);
			setState(181);
			((Global_setContext)_localctx).result = all_result();
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

	public static class Global_resultContext extends ParserRuleContext {
		public Id_globalContext id_global() {
			return getRuleContext(Id_globalContext.class,0);
		}
		public Global_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_global_result; }
	}

	public final Global_resultContext global_result() throws RecognitionException {
		Global_resultContext _localctx = new Global_resultContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_global_result);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			id_global();
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

	public static class Function_inline_callContext extends ParserRuleContext {
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public Function_inline_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_inline_call; }
	}

	public final Function_inline_callContext function_inline_call() throws RecognitionException {
		Function_inline_callContext _localctx = new Function_inline_callContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_function_inline_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			function_call();
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

	public static class Require_blockContext extends ParserRuleContext {
		public TerminalNode REQUIRE() { return getToken(CorundumParser.REQUIRE, 0); }
		public Literal_tContext literal_t() {
			return getRuleContext(Literal_tContext.class,0);
		}
		public Require_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_require_block; }
	}

	public final Require_blockContext require_block() throws RecognitionException {
		Require_blockContext _localctx = new Require_blockContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_require_block);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(187);
			match(REQUIRE);
			setState(188);
			literal_t();
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

	public static class Pir_inlineContext extends ParserRuleContext {
		public TerminalNode PIR() { return getToken(CorundumParser.PIR, 0); }
		public CrlfContext crlf() {
			return getRuleContext(CrlfContext.class,0);
		}
		public Pir_expression_listContext pir_expression_list() {
			return getRuleContext(Pir_expression_listContext.class,0);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public Pir_inlineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pir_inline; }
	}

	public final Pir_inlineContext pir_inline() throws RecognitionException {
		Pir_inlineContext _localctx = new Pir_inlineContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_pir_inline);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(PIR);
			setState(191);
			crlf();
			setState(192);
			pir_expression_list();
			setState(193);
			match(END);
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

	public static class Pir_expression_listContext extends ParserRuleContext {
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public Pir_expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pir_expression_list; }
	}

	public final Pir_expression_listContext pir_expression_list() throws RecognitionException {
		Pir_expression_listContext _localctx = new Pir_expression_listContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_pir_expression_list);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			expression_list(0);
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

	public static class Function_definitionContext extends ParserRuleContext {
		public Function_definition_headerContext function_definition_header() {
			return getRuleContext(Function_definition_headerContext.class,0);
		}
		public Function_definition_bodyContext function_definition_body() {
			return getRuleContext(Function_definition_bodyContext.class,0);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public Function_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition; }
	}

	public final Function_definitionContext function_definition() throws RecognitionException {
		Function_definitionContext _localctx = new Function_definitionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_function_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			function_definition_header();
			setState(198);
			function_definition_body();
			setState(199);
			match(END);
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

	public static class Function_definition_bodyContext extends ParserRuleContext {
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public Function_definition_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition_body; }
	}

	public final Function_definition_bodyContext function_definition_body() throws RecognitionException {
		Function_definition_bodyContext _localctx = new Function_definition_bodyContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_function_definition_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			expression_list(0);
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

	public static class Function_definition_headerContext extends ParserRuleContext {
		public TerminalNode DEF() { return getToken(CorundumParser.DEF, 0); }
		public Function_nameContext function_name() {
			return getRuleContext(Function_nameContext.class,0);
		}
		public CrlfContext crlf() {
			return getRuleContext(CrlfContext.class,0);
		}
		public Function_definition_paramsContext function_definition_params() {
			return getRuleContext(Function_definition_paramsContext.class,0);
		}
		public Function_definition_headerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition_header; }
	}

	public final Function_definition_headerContext function_definition_header() throws RecognitionException {
		Function_definition_headerContext _localctx = new Function_definition_headerContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_function_definition_header);
		try {
			setState(212);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(203);
				match(DEF);
				setState(204);
				function_name();
				setState(205);
				crlf();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(207);
				match(DEF);
				setState(208);
				function_name();
				setState(209);
				function_definition_params();
				setState(210);
				crlf();
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

	public static class Function_nameContext extends ParserRuleContext {
		public Id_functionContext id_function() {
			return getRuleContext(Id_functionContext.class,0);
		}
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public Function_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_name; }
	}

	public final Function_nameContext function_name() throws RecognitionException {
		Function_nameContext _localctx = new Function_nameContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_function_name);
		try {
			setState(216);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID_FUNCTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(214);
				id_function();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(215);
				id_();
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

	public static class Function_definition_paramsContext extends ParserRuleContext {
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Function_definition_params_listContext function_definition_params_list() {
			return getRuleContext(Function_definition_params_listContext.class,0);
		}
		public Function_definition_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition_params; }
	}

	public final Function_definition_paramsContext function_definition_params() throws RecognitionException {
		Function_definition_paramsContext _localctx = new Function_definition_paramsContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_function_definition_params);
		try {
			setState(225);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(218);
				match(LEFT_RBRACKET);
				setState(219);
				match(RIGHT_RBRACKET);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(220);
				match(LEFT_RBRACKET);
				setState(221);
				function_definition_params_list(0);
				setState(222);
				match(RIGHT_RBRACKET);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(224);
				function_definition_params_list(0);
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

	public static class Function_definition_params_listContext extends ParserRuleContext {
		public Function_definition_param_idContext function_definition_param_id() {
			return getRuleContext(Function_definition_param_idContext.class,0);
		}
		public Function_definition_params_listContext function_definition_params_list() {
			return getRuleContext(Function_definition_params_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CorundumParser.COMMA, 0); }
		public Function_definition_params_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition_params_list; }
	}

	public final Function_definition_params_listContext function_definition_params_list() throws RecognitionException {
		return function_definition_params_list(0);
	}

	private Function_definition_params_listContext function_definition_params_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Function_definition_params_listContext _localctx = new Function_definition_params_listContext(_ctx, _parentState);
		Function_definition_params_listContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_function_definition_params_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(228);
			function_definition_param_id();
			}
			_ctx.stop = _input.LT(-1);
			setState(235);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Function_definition_params_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_function_definition_params_list);
					setState(230);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(231);
					match(COMMA);
					setState(232);
					function_definition_param_id();
					}
					} 
				}
				setState(237);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
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

	public static class Function_definition_param_idContext extends ParserRuleContext {
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public Function_definition_param_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_definition_param_id; }
	}

	public final Function_definition_param_idContext function_definition_param_id() throws RecognitionException {
		Function_definition_param_idContext _localctx = new Function_definition_param_idContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_function_definition_param_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			id_();
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

	public static class Return_statementContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(CorundumParser.RETURN, 0); }
		public All_resultContext all_result() {
			return getRuleContext(All_resultContext.class,0);
		}
		public Return_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_statement; }
	}

	public final Return_statementContext return_statement() throws RecognitionException {
		Return_statementContext _localctx = new Return_statementContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_return_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(240);
			match(RETURN);
			setState(241);
			all_result();
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

	public static class Function_callContext extends ParserRuleContext {
		public Function_nameContext name;
		public Function_call_param_listContext params;
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Function_nameContext function_name() {
			return getRuleContext(Function_nameContext.class,0);
		}
		public Function_call_param_listContext function_call_param_list() {
			return getRuleContext(Function_call_param_listContext.class,0);
		}
		public Function_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call; }
	}

	public final Function_callContext function_call() throws RecognitionException {
		Function_callContext _localctx = new Function_callContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_function_call);
		try {
			setState(255);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(243);
				((Function_callContext)_localctx).name = function_name();
				setState(244);
				match(LEFT_RBRACKET);
				setState(245);
				((Function_callContext)_localctx).params = function_call_param_list();
				setState(246);
				match(RIGHT_RBRACKET);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(248);
				((Function_callContext)_localctx).name = function_name();
				setState(249);
				((Function_callContext)_localctx).params = function_call_param_list();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(251);
				((Function_callContext)_localctx).name = function_name();
				setState(252);
				match(LEFT_RBRACKET);
				setState(253);
				match(RIGHT_RBRACKET);
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

	public static class Function_call_param_listContext extends ParserRuleContext {
		public Function_call_paramsContext function_call_params() {
			return getRuleContext(Function_call_paramsContext.class,0);
		}
		public Function_call_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_param_list; }
	}

	public final Function_call_param_listContext function_call_param_list() throws RecognitionException {
		Function_call_param_listContext _localctx = new Function_call_param_listContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_function_call_param_list);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			function_call_params(0);
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

	public static class Function_call_paramsContext extends ParserRuleContext {
		public Function_paramContext function_param() {
			return getRuleContext(Function_paramContext.class,0);
		}
		public Function_call_paramsContext function_call_params() {
			return getRuleContext(Function_call_paramsContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CorundumParser.COMMA, 0); }
		public Function_call_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_params; }
	}

	public final Function_call_paramsContext function_call_params() throws RecognitionException {
		return function_call_params(0);
	}

	private Function_call_paramsContext function_call_params(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Function_call_paramsContext _localctx = new Function_call_paramsContext(_ctx, _parentState);
		Function_call_paramsContext _prevctx = _localctx;
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_function_call_params, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(260);
			function_param();
			}
			_ctx.stop = _input.LT(-1);
			setState(267);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Function_call_paramsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_function_call_params);
					setState(262);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(263);
					match(COMMA);
					setState(264);
					function_param();
					}
					} 
				}
				setState(269);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
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

	public static class Function_paramContext extends ParserRuleContext {
		public Function_unnamed_paramContext function_unnamed_param() {
			return getRuleContext(Function_unnamed_paramContext.class,0);
		}
		public Function_named_paramContext function_named_param() {
			return getRuleContext(Function_named_paramContext.class,0);
		}
		public Function_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_param; }
	}

	public final Function_paramContext function_param() throws RecognitionException {
		Function_paramContext _localctx = new Function_paramContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_function_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(272);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(270);
				function_unnamed_param();
				}
				break;
			case 2:
				{
				setState(271);
				function_named_param();
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

	public static class Function_unnamed_paramContext extends ParserRuleContext {
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public Function_unnamed_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_unnamed_param; }
	}

	public final Function_unnamed_paramContext function_unnamed_param() throws RecognitionException {
		Function_unnamed_paramContext _localctx = new Function_unnamed_paramContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_function_unnamed_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(278);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				setState(274);
				int_result(0);
				}
				break;
			case 2:
				{
				setState(275);
				float_result(0);
				}
				break;
			case 3:
				{
				setState(276);
				string_result(0);
				}
				break;
			case 4:
				{
				setState(277);
				dynamic_result(0);
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

	public static class Function_named_paramContext extends ParserRuleContext {
		public Token op;
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public Function_named_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_named_param; }
	}

	public final Function_named_paramContext function_named_param() throws RecognitionException {
		Function_named_paramContext _localctx = new Function_named_paramContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_function_named_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			id_();
			setState(281);
			((Function_named_paramContext)_localctx).op = match(ASSIGN);
			setState(286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(282);
				int_result(0);
				}
				break;
			case 2:
				{
				setState(283);
				float_result(0);
				}
				break;
			case 3:
				{
				setState(284);
				string_result(0);
				}
				break;
			case 4:
				{
				setState(285);
				dynamic_result(0);
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

	public static class Function_call_assignmentContext extends ParserRuleContext {
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public Function_call_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_assignment; }
	}

	public final Function_call_assignmentContext function_call_assignment() throws RecognitionException {
		Function_call_assignmentContext _localctx = new Function_call_assignmentContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_function_call_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			function_call();
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

	public static class All_resultContext extends ParserRuleContext {
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public Global_resultContext global_result() {
			return getRuleContext(Global_resultContext.class,0);
		}
		public All_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_all_result; }
	}

	public final All_resultContext all_result() throws RecognitionException {
		All_resultContext _localctx = new All_resultContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_all_result);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(290);
				int_result(0);
				}
				break;
			case 2:
				{
				setState(291);
				float_result(0);
				}
				break;
			case 3:
				{
				setState(292);
				string_result(0);
				}
				break;
			case 4:
				{
				setState(293);
				dynamic_result(0);
				}
				break;
			case 5:
				{
				setState(294);
				global_result();
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

	public static class Elsif_statementContext extends ParserRuleContext {
		public If_elsif_statementContext if_elsif_statement() {
			return getRuleContext(If_elsif_statementContext.class,0);
		}
		public Elsif_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elsif_statement; }
	}

	public final Elsif_statementContext elsif_statement() throws RecognitionException {
		Elsif_statementContext _localctx = new Elsif_statementContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_elsif_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(297);
			if_elsif_statement();
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

	public static class If_elsif_statementContext extends ParserRuleContext {
		public TerminalNode ELSIF() { return getToken(CorundumParser.ELSIF, 0); }
		public Cond_expressionContext cond_expression() {
			return getRuleContext(Cond_expressionContext.class,0);
		}
		public List<CrlfContext> crlf() {
			return getRuleContexts(CrlfContext.class);
		}
		public CrlfContext crlf(int i) {
			return getRuleContext(CrlfContext.class,i);
		}
		public List<Statement_bodyContext> statement_body() {
			return getRuleContexts(Statement_bodyContext.class);
		}
		public Statement_bodyContext statement_body(int i) {
			return getRuleContext(Statement_bodyContext.class,i);
		}
		public Else_tokenContext else_token() {
			return getRuleContext(Else_tokenContext.class,0);
		}
		public If_elsif_statementContext if_elsif_statement() {
			return getRuleContext(If_elsif_statementContext.class,0);
		}
		public If_elsif_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_elsif_statement; }
	}

	public final If_elsif_statementContext if_elsif_statement() throws RecognitionException {
		If_elsif_statementContext _localctx = new If_elsif_statementContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_if_elsif_statement);
		try {
			setState(318);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(299);
				match(ELSIF);
				setState(300);
				cond_expression();
				setState(301);
				crlf();
				setState(302);
				statement_body();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(304);
				match(ELSIF);
				setState(305);
				cond_expression();
				setState(306);
				crlf();
				setState(307);
				statement_body();
				setState(308);
				else_token();
				setState(309);
				crlf();
				setState(310);
				statement_body();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(312);
				match(ELSIF);
				setState(313);
				cond_expression();
				setState(314);
				crlf();
				setState(315);
				statement_body();
				setState(316);
				if_elsif_statement();
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

	public static class If_statementContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(CorundumParser.IF, 0); }
		public Cond_expressionContext cond_expression() {
			return getRuleContext(Cond_expressionContext.class,0);
		}
		public List<CrlfContext> crlf() {
			return getRuleContexts(CrlfContext.class);
		}
		public CrlfContext crlf(int i) {
			return getRuleContext(CrlfContext.class,i);
		}
		public List<Statement_bodyContext> statement_body() {
			return getRuleContexts(Statement_bodyContext.class);
		}
		public Statement_bodyContext statement_body(int i) {
			return getRuleContext(Statement_bodyContext.class,i);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public Else_tokenContext else_token() {
			return getRuleContext(Else_tokenContext.class,0);
		}
		public Elsif_statementContext elsif_statement() {
			return getRuleContext(Elsif_statementContext.class,0);
		}
		public If_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_statement; }
	}

	public final If_statementContext if_statement() throws RecognitionException {
		If_statementContext _localctx = new If_statementContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_if_statement);
		try {
			setState(342);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(320);
				match(IF);
				setState(321);
				cond_expression();
				setState(322);
				crlf();
				setState(323);
				statement_body();
				setState(324);
				match(END);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(326);
				match(IF);
				setState(327);
				cond_expression();
				setState(328);
				crlf();
				setState(329);
				statement_body();
				setState(330);
				else_token();
				setState(331);
				crlf();
				setState(332);
				statement_body();
				setState(333);
				match(END);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(335);
				match(IF);
				setState(336);
				cond_expression();
				setState(337);
				crlf();
				setState(338);
				statement_body();
				setState(339);
				elsif_statement();
				setState(340);
				match(END);
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

	public static class Unless_statementContext extends ParserRuleContext {
		public TerminalNode UNLESS() { return getToken(CorundumParser.UNLESS, 0); }
		public Cond_expressionContext cond_expression() {
			return getRuleContext(Cond_expressionContext.class,0);
		}
		public List<CrlfContext> crlf() {
			return getRuleContexts(CrlfContext.class);
		}
		public CrlfContext crlf(int i) {
			return getRuleContext(CrlfContext.class,i);
		}
		public List<Statement_bodyContext> statement_body() {
			return getRuleContexts(Statement_bodyContext.class);
		}
		public Statement_bodyContext statement_body(int i) {
			return getRuleContext(Statement_bodyContext.class,i);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public Else_tokenContext else_token() {
			return getRuleContext(Else_tokenContext.class,0);
		}
		public Elsif_statementContext elsif_statement() {
			return getRuleContext(Elsif_statementContext.class,0);
		}
		public Unless_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unless_statement; }
	}

	public final Unless_statementContext unless_statement() throws RecognitionException {
		Unless_statementContext _localctx = new Unless_statementContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_unless_statement);
		try {
			setState(366);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(344);
				match(UNLESS);
				setState(345);
				cond_expression();
				setState(346);
				crlf();
				setState(347);
				statement_body();
				setState(348);
				match(END);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(350);
				match(UNLESS);
				setState(351);
				cond_expression();
				setState(352);
				crlf();
				setState(353);
				statement_body();
				setState(354);
				else_token();
				setState(355);
				crlf();
				setState(356);
				statement_body();
				setState(357);
				match(END);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(359);
				match(UNLESS);
				setState(360);
				cond_expression();
				setState(361);
				crlf();
				setState(362);
				statement_body();
				setState(363);
				elsif_statement();
				setState(364);
				match(END);
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

	public static class While_statementContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(CorundumParser.WHILE, 0); }
		public Cond_expressionContext cond_expression() {
			return getRuleContext(Cond_expressionContext.class,0);
		}
		public CrlfContext crlf() {
			return getRuleContext(CrlfContext.class,0);
		}
		public Statement_bodyContext statement_body() {
			return getRuleContext(Statement_bodyContext.class,0);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public While_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_statement; }
	}

	public final While_statementContext while_statement() throws RecognitionException {
		While_statementContext _localctx = new While_statementContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_while_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
			match(WHILE);
			setState(369);
			cond_expression();
			setState(370);
			crlf();
			setState(371);
			statement_body();
			setState(372);
			match(END);
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

	public static class For_statementContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(CorundumParser.FOR, 0); }
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public Init_expressionContext init_expression() {
			return getRuleContext(Init_expressionContext.class,0);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(CorundumParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(CorundumParser.SEMICOLON, i);
		}
		public Cond_expressionContext cond_expression() {
			return getRuleContext(Cond_expressionContext.class,0);
		}
		public Loop_expressionContext loop_expression() {
			return getRuleContext(Loop_expressionContext.class,0);
		}
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public CrlfContext crlf() {
			return getRuleContext(CrlfContext.class,0);
		}
		public Statement_bodyContext statement_body() {
			return getRuleContext(Statement_bodyContext.class,0);
		}
		public TerminalNode END() { return getToken(CorundumParser.END, 0); }
		public For_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_statement; }
	}

	public final For_statementContext for_statement() throws RecognitionException {
		For_statementContext _localctx = new For_statementContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_for_statement);
		try {
			setState(396);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(374);
				match(FOR);
				setState(375);
				match(LEFT_RBRACKET);
				setState(376);
				init_expression();
				setState(377);
				match(SEMICOLON);
				setState(378);
				cond_expression();
				setState(379);
				match(SEMICOLON);
				setState(380);
				loop_expression();
				setState(381);
				match(RIGHT_RBRACKET);
				setState(382);
				crlf();
				setState(383);
				statement_body();
				setState(384);
				match(END);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(386);
				match(FOR);
				setState(387);
				init_expression();
				setState(388);
				match(SEMICOLON);
				setState(389);
				cond_expression();
				setState(390);
				match(SEMICOLON);
				setState(391);
				loop_expression();
				setState(392);
				crlf();
				setState(393);
				statement_body();
				setState(394);
				match(END);
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

	public static class Init_expressionContext extends ParserRuleContext {
		public For_init_listContext for_init_list() {
			return getRuleContext(For_init_listContext.class,0);
		}
		public Init_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_init_expression; }
	}

	public final Init_expressionContext init_expression() throws RecognitionException {
		Init_expressionContext _localctx = new Init_expressionContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_init_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(398);
			for_init_list(0);
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

	public static class All_assignmentContext extends ParserRuleContext {
		public Int_assignmentContext int_assignment() {
			return getRuleContext(Int_assignmentContext.class,0);
		}
		public Float_assignmentContext float_assignment() {
			return getRuleContext(Float_assignmentContext.class,0);
		}
		public String_assignmentContext string_assignment() {
			return getRuleContext(String_assignmentContext.class,0);
		}
		public Dynamic_assignmentContext dynamic_assignment() {
			return getRuleContext(Dynamic_assignmentContext.class,0);
		}
		public All_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_all_assignment; }
	}

	public final All_assignmentContext all_assignment() throws RecognitionException {
		All_assignmentContext _localctx = new All_assignmentContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_all_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(404);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				{
				setState(400);
				int_assignment();
				}
				break;
			case 2:
				{
				setState(401);
				float_assignment();
				}
				break;
			case 3:
				{
				setState(402);
				string_assignment();
				}
				break;
			case 4:
				{
				setState(403);
				dynamic_assignment();
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

	public static class For_init_listContext extends ParserRuleContext {
		public All_assignmentContext all_assignment() {
			return getRuleContext(All_assignmentContext.class,0);
		}
		public For_init_listContext for_init_list() {
			return getRuleContext(For_init_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CorundumParser.COMMA, 0); }
		public For_init_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_init_list; }
	}

	public final For_init_listContext for_init_list() throws RecognitionException {
		return for_init_list(0);
	}

	private For_init_listContext for_init_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		For_init_listContext _localctx = new For_init_listContext(_ctx, _parentState);
		For_init_listContext _prevctx = _localctx;
		int _startState = 68;
		enterRecursionRule(_localctx, 68, RULE_for_init_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(407);
			all_assignment();
			}
			_ctx.stop = _input.LT(-1);
			setState(414);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new For_init_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_for_init_list);
					setState(409);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(410);
					match(COMMA);
					setState(411);
					all_assignment();
					}
					} 
				}
				setState(416);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
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

	public static class Cond_expressionContext extends ParserRuleContext {
		public Comparison_listContext comparison_list() {
			return getRuleContext(Comparison_listContext.class,0);
		}
		public Cond_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cond_expression; }
	}

	public final Cond_expressionContext cond_expression() throws RecognitionException {
		Cond_expressionContext _localctx = new Cond_expressionContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_cond_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(417);
			comparison_list();
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

	public static class Loop_expressionContext extends ParserRuleContext {
		public For_loop_listContext for_loop_list() {
			return getRuleContext(For_loop_listContext.class,0);
		}
		public Loop_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop_expression; }
	}

	public final Loop_expressionContext loop_expression() throws RecognitionException {
		Loop_expressionContext _localctx = new Loop_expressionContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_loop_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(419);
			for_loop_list(0);
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

	public static class For_loop_listContext extends ParserRuleContext {
		public All_assignmentContext all_assignment() {
			return getRuleContext(All_assignmentContext.class,0);
		}
		public For_loop_listContext for_loop_list() {
			return getRuleContext(For_loop_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CorundumParser.COMMA, 0); }
		public For_loop_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_loop_list; }
	}

	public final For_loop_listContext for_loop_list() throws RecognitionException {
		return for_loop_list(0);
	}

	private For_loop_listContext for_loop_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		For_loop_listContext _localctx = new For_loop_listContext(_ctx, _parentState);
		For_loop_listContext _prevctx = _localctx;
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_for_loop_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(422);
			all_assignment();
			}
			_ctx.stop = _input.LT(-1);
			setState(429);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new For_loop_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_for_loop_list);
					setState(424);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(425);
					match(COMMA);
					setState(426);
					all_assignment();
					}
					} 
				}
				setState(431);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
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

	public static class Statement_bodyContext extends ParserRuleContext {
		public Statement_expression_listContext statement_expression_list() {
			return getRuleContext(Statement_expression_listContext.class,0);
		}
		public Statement_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement_body; }
	}

	public final Statement_bodyContext statement_body() throws RecognitionException {
		Statement_bodyContext _localctx = new Statement_bodyContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_statement_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(432);
			statement_expression_list(0);
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

	public static class Statement_expression_listContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminatorContext terminator() {
			return getRuleContext(TerminatorContext.class,0);
		}
		public TerminalNode RETRY() { return getToken(CorundumParser.RETRY, 0); }
		public Break_expressionContext break_expression() {
			return getRuleContext(Break_expressionContext.class,0);
		}
		public Statement_expression_listContext statement_expression_list() {
			return getRuleContext(Statement_expression_listContext.class,0);
		}
		public Statement_expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement_expression_list; }
	}

	public final Statement_expression_listContext statement_expression_list() throws RecognitionException {
		return statement_expression_list(0);
	}

	private Statement_expression_listContext statement_expression_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Statement_expression_listContext _localctx = new Statement_expression_listContext(_ctx, _parentState);
		Statement_expression_listContext _prevctx = _localctx;
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_statement_expression_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(443);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LITERAL:
			case REQUIRE:
			case DEF:
			case RETURN:
			case PIR:
			case IF:
			case UNLESS:
			case WHILE:
			case FOR:
			case TRUE:
			case FALSE:
			case BIT_NOT:
			case NOT:
			case LEFT_RBRACKET:
			case NIL:
			case INT:
			case FLOAT:
			case ID:
			case ID_GLOBAL:
			case ID_FUNCTION:
				{
				setState(435);
				expression();
				setState(436);
				terminator(0);
				}
				break;
			case RETRY:
				{
				setState(438);
				match(RETRY);
				setState(439);
				terminator(0);
				}
				break;
			case BREAK:
				{
				setState(440);
				break_expression();
				setState(441);
				terminator(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(458);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(456);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
					case 1:
						{
						_localctx = new Statement_expression_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_statement_expression_list);
						setState(445);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(446);
						expression();
						setState(447);
						terminator(0);
						}
						break;
					case 2:
						{
						_localctx = new Statement_expression_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_statement_expression_list);
						setState(449);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(450);
						match(RETRY);
						setState(451);
						terminator(0);
						}
						break;
					case 3:
						{
						_localctx = new Statement_expression_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_statement_expression_list);
						setState(452);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(453);
						break_expression();
						setState(454);
						terminator(0);
						}
						break;
					}
					} 
				}
				setState(460);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
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

	public static class AssignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public RvalueContext rvalue() {
			return getRuleContext(RvalueContext.class,0);
		}
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(CorundumParser.PLUS_ASSIGN, 0); }
		public TerminalNode MINUS_ASSIGN() { return getToken(CorundumParser.MINUS_ASSIGN, 0); }
		public TerminalNode MUL_ASSIGN() { return getToken(CorundumParser.MUL_ASSIGN, 0); }
		public TerminalNode DIV_ASSIGN() { return getToken(CorundumParser.DIV_ASSIGN, 0); }
		public TerminalNode MOD_ASSIGN() { return getToken(CorundumParser.MOD_ASSIGN, 0); }
		public TerminalNode EXP_ASSIGN() { return getToken(CorundumParser.EXP_ASSIGN, 0); }
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_assignment);
		int _la;
		try {
			setState(469);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(461);
				((AssignmentContext)_localctx).var_id = lvalue();
				setState(462);
				((AssignmentContext)_localctx).op = match(ASSIGN);
				setState(463);
				rvalue(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(465);
				((AssignmentContext)_localctx).var_id = lvalue();
				setState(466);
				((AssignmentContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS_ASSIGN) | (1L << MINUS_ASSIGN) | (1L << MUL_ASSIGN) | (1L << DIV_ASSIGN) | (1L << MOD_ASSIGN) | (1L << EXP_ASSIGN))) != 0)) ) {
					((AssignmentContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(467);
				rvalue(0);
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

	public static class Dynamic_assignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(CorundumParser.PLUS_ASSIGN, 0); }
		public TerminalNode MINUS_ASSIGN() { return getToken(CorundumParser.MINUS_ASSIGN, 0); }
		public TerminalNode MUL_ASSIGN() { return getToken(CorundumParser.MUL_ASSIGN, 0); }
		public TerminalNode DIV_ASSIGN() { return getToken(CorundumParser.DIV_ASSIGN, 0); }
		public TerminalNode MOD_ASSIGN() { return getToken(CorundumParser.MOD_ASSIGN, 0); }
		public TerminalNode EXP_ASSIGN() { return getToken(CorundumParser.EXP_ASSIGN, 0); }
		public Dynamic_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dynamic_assignment; }
	}

	public final Dynamic_assignmentContext dynamic_assignment() throws RecognitionException {
		Dynamic_assignmentContext _localctx = new Dynamic_assignmentContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_dynamic_assignment);
		int _la;
		try {
			setState(479);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(471);
				((Dynamic_assignmentContext)_localctx).var_id = lvalue();
				setState(472);
				((Dynamic_assignmentContext)_localctx).op = match(ASSIGN);
				setState(473);
				dynamic_result(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(475);
				((Dynamic_assignmentContext)_localctx).var_id = lvalue();
				setState(476);
				((Dynamic_assignmentContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS_ASSIGN) | (1L << MINUS_ASSIGN) | (1L << MUL_ASSIGN) | (1L << DIV_ASSIGN) | (1L << MOD_ASSIGN) | (1L << EXP_ASSIGN))) != 0)) ) {
					((Dynamic_assignmentContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(477);
				dynamic_result(0);
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

	public static class Int_assignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(CorundumParser.PLUS_ASSIGN, 0); }
		public TerminalNode MINUS_ASSIGN() { return getToken(CorundumParser.MINUS_ASSIGN, 0); }
		public TerminalNode MUL_ASSIGN() { return getToken(CorundumParser.MUL_ASSIGN, 0); }
		public TerminalNode DIV_ASSIGN() { return getToken(CorundumParser.DIV_ASSIGN, 0); }
		public TerminalNode MOD_ASSIGN() { return getToken(CorundumParser.MOD_ASSIGN, 0); }
		public TerminalNode EXP_ASSIGN() { return getToken(CorundumParser.EXP_ASSIGN, 0); }
		public Int_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_int_assignment; }
	}

	public final Int_assignmentContext int_assignment() throws RecognitionException {
		Int_assignmentContext _localctx = new Int_assignmentContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_int_assignment);
		int _la;
		try {
			setState(489);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(481);
				((Int_assignmentContext)_localctx).var_id = lvalue();
				setState(482);
				((Int_assignmentContext)_localctx).op = match(ASSIGN);
				setState(483);
				int_result(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(485);
				((Int_assignmentContext)_localctx).var_id = lvalue();
				setState(486);
				((Int_assignmentContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS_ASSIGN) | (1L << MINUS_ASSIGN) | (1L << MUL_ASSIGN) | (1L << DIV_ASSIGN) | (1L << MOD_ASSIGN) | (1L << EXP_ASSIGN))) != 0)) ) {
					((Int_assignmentContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(487);
				int_result(0);
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

	public static class Float_assignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(CorundumParser.PLUS_ASSIGN, 0); }
		public TerminalNode MINUS_ASSIGN() { return getToken(CorundumParser.MINUS_ASSIGN, 0); }
		public TerminalNode MUL_ASSIGN() { return getToken(CorundumParser.MUL_ASSIGN, 0); }
		public TerminalNode DIV_ASSIGN() { return getToken(CorundumParser.DIV_ASSIGN, 0); }
		public TerminalNode MOD_ASSIGN() { return getToken(CorundumParser.MOD_ASSIGN, 0); }
		public TerminalNode EXP_ASSIGN() { return getToken(CorundumParser.EXP_ASSIGN, 0); }
		public Float_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_float_assignment; }
	}

	public final Float_assignmentContext float_assignment() throws RecognitionException {
		Float_assignmentContext _localctx = new Float_assignmentContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_float_assignment);
		int _la;
		try {
			setState(499);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(491);
				((Float_assignmentContext)_localctx).var_id = lvalue();
				setState(492);
				((Float_assignmentContext)_localctx).op = match(ASSIGN);
				setState(493);
				float_result(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(495);
				((Float_assignmentContext)_localctx).var_id = lvalue();
				setState(496);
				((Float_assignmentContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS_ASSIGN) | (1L << MINUS_ASSIGN) | (1L << MUL_ASSIGN) | (1L << DIV_ASSIGN) | (1L << MOD_ASSIGN) | (1L << EXP_ASSIGN))) != 0)) ) {
					((Float_assignmentContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(497);
				float_result(0);
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

	public static class String_assignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public TerminalNode PLUS_ASSIGN() { return getToken(CorundumParser.PLUS_ASSIGN, 0); }
		public String_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_assignment; }
	}

	public final String_assignmentContext string_assignment() throws RecognitionException {
		String_assignmentContext _localctx = new String_assignmentContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_string_assignment);
		try {
			setState(509);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(501);
				((String_assignmentContext)_localctx).var_id = lvalue();
				setState(502);
				((String_assignmentContext)_localctx).op = match(ASSIGN);
				setState(503);
				string_result(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(505);
				((String_assignmentContext)_localctx).var_id = lvalue();
				setState(506);
				((String_assignmentContext)_localctx).op = match(PLUS_ASSIGN);
				setState(507);
				string_result(0);
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

	public static class Initial_array_assignmentContext extends ParserRuleContext {
		public LvalueContext var_id;
		public Token op;
		public TerminalNode LEFT_SBRACKET() { return getToken(CorundumParser.LEFT_SBRACKET, 0); }
		public TerminalNode RIGHT_SBRACKET() { return getToken(CorundumParser.RIGHT_SBRACKET, 0); }
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public Initial_array_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initial_array_assignment; }
	}

	public final Initial_array_assignmentContext initial_array_assignment() throws RecognitionException {
		Initial_array_assignmentContext _localctx = new Initial_array_assignmentContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_initial_array_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(511);
			((Initial_array_assignmentContext)_localctx).var_id = lvalue();
			setState(512);
			((Initial_array_assignmentContext)_localctx).op = match(ASSIGN);
			setState(513);
			match(LEFT_SBRACKET);
			setState(514);
			match(RIGHT_SBRACKET);
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

	public static class Array_assignmentContext extends ParserRuleContext {
		public Array_selectorContext arr_def;
		public Token op;
		public All_resultContext arr_val;
		public Array_selectorContext array_selector() {
			return getRuleContext(Array_selectorContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CorundumParser.ASSIGN, 0); }
		public All_resultContext all_result() {
			return getRuleContext(All_resultContext.class,0);
		}
		public Array_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_assignment; }
	}

	public final Array_assignmentContext array_assignment() throws RecognitionException {
		Array_assignmentContext _localctx = new Array_assignmentContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_array_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(516);
			((Array_assignmentContext)_localctx).arr_def = array_selector();
			setState(517);
			((Array_assignmentContext)_localctx).op = match(ASSIGN);
			setState(518);
			((Array_assignmentContext)_localctx).arr_val = all_result();
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

	public static class Array_definitionContext extends ParserRuleContext {
		public TerminalNode LEFT_SBRACKET() { return getToken(CorundumParser.LEFT_SBRACKET, 0); }
		public Array_definition_elementsContext array_definition_elements() {
			return getRuleContext(Array_definition_elementsContext.class,0);
		}
		public TerminalNode RIGHT_SBRACKET() { return getToken(CorundumParser.RIGHT_SBRACKET, 0); }
		public Array_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_definition; }
	}

	public final Array_definitionContext array_definition() throws RecognitionException {
		Array_definitionContext _localctx = new Array_definitionContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_array_definition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(520);
			match(LEFT_SBRACKET);
			setState(521);
			array_definition_elements(0);
			setState(522);
			match(RIGHT_SBRACKET);
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

	public static class Array_definition_elementsContext extends ParserRuleContext {
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public Array_definition_elementsContext array_definition_elements() {
			return getRuleContext(Array_definition_elementsContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CorundumParser.COMMA, 0); }
		public Array_definition_elementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_definition_elements; }
	}

	public final Array_definition_elementsContext array_definition_elements() throws RecognitionException {
		return array_definition_elements(0);
	}

	private Array_definition_elementsContext array_definition_elements(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Array_definition_elementsContext _localctx = new Array_definition_elementsContext(_ctx, _parentState);
		Array_definition_elementsContext _prevctx = _localctx;
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_array_definition_elements, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(527);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(525);
				int_result(0);
				}
				break;
			case 2:
				{
				setState(526);
				dynamic_result(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(537);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Array_definition_elementsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_array_definition_elements);
					setState(529);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(530);
					match(COMMA);
					setState(533);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
					case 1:
						{
						setState(531);
						int_result(0);
						}
						break;
					case 2:
						{
						setState(532);
						dynamic_result(0);
						}
						break;
					}
					}
					} 
				}
				setState(539);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
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

	public static class Array_selectorContext extends ParserRuleContext {
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public TerminalNode LEFT_SBRACKET() { return getToken(CorundumParser.LEFT_SBRACKET, 0); }
		public TerminalNode RIGHT_SBRACKET() { return getToken(CorundumParser.RIGHT_SBRACKET, 0); }
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Dynamic_resultContext dynamic_result() {
			return getRuleContext(Dynamic_resultContext.class,0);
		}
		public Id_globalContext id_global() {
			return getRuleContext(Id_globalContext.class,0);
		}
		public Array_selectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_selector; }
	}

	public final Array_selectorContext array_selector() throws RecognitionException {
		Array_selectorContext _localctx = new Array_selectorContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_array_selector);
		try {
			setState(556);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(540);
				id_();
				setState(541);
				match(LEFT_SBRACKET);
				setState(544);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
				case 1:
					{
					setState(542);
					int_result(0);
					}
					break;
				case 2:
					{
					setState(543);
					dynamic_result(0);
					}
					break;
				}
				setState(546);
				match(RIGHT_SBRACKET);
				}
				break;
			case ID_GLOBAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(548);
				id_global();
				setState(549);
				match(LEFT_SBRACKET);
				setState(552);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
				case 1:
					{
					setState(550);
					int_result(0);
					}
					break;
				case 2:
					{
					setState(551);
					dynamic_result(0);
					}
					break;
				}
				setState(554);
				match(RIGHT_SBRACKET);
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

	public static class Dynamic_resultContext extends ParserRuleContext {
		public Token op;
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public List<Dynamic_resultContext> dynamic_result() {
			return getRuleContexts(Dynamic_resultContext.class);
		}
		public Dynamic_resultContext dynamic_result(int i) {
			return getRuleContext(Dynamic_resultContext.class,i);
		}
		public TerminalNode MUL() { return getToken(CorundumParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CorundumParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(CorundumParser.MOD, 0); }
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(CorundumParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(CorundumParser.MINUS, 0); }
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Dynamic_Context dynamic_() {
			return getRuleContext(Dynamic_Context.class,0);
		}
		public Dynamic_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dynamic_result; }
	}

	public final Dynamic_resultContext dynamic_result() throws RecognitionException {
		return dynamic_result(0);
	}

	private Dynamic_resultContext dynamic_result(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Dynamic_resultContext _localctx = new Dynamic_resultContext(_ctx, _parentState);
		Dynamic_resultContext _prevctx = _localctx;
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_dynamic_result, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(584);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(559);
				int_result(0);
				setState(560);
				((Dynamic_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
					((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(561);
				dynamic_result(13);
				}
				break;
			case 2:
				{
				setState(563);
				float_result(0);
				setState(564);
				((Dynamic_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
					((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(565);
				dynamic_result(11);
				}
				break;
			case 3:
				{
				setState(567);
				string_result(0);
				setState(568);
				((Dynamic_resultContext)_localctx).op = match(MUL);
				setState(569);
				dynamic_result(8);
				}
				break;
			case 4:
				{
				setState(571);
				int_result(0);
				setState(572);
				((Dynamic_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(573);
				dynamic_result(6);
				}
				break;
			case 5:
				{
				setState(575);
				float_result(0);
				setState(576);
				((Dynamic_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(577);
				dynamic_result(4);
				}
				break;
			case 6:
				{
				setState(579);
				match(LEFT_RBRACKET);
				setState(580);
				dynamic_result(0);
				setState(581);
				match(RIGHT_RBRACKET);
				}
				break;
			case 7:
				{
				setState(583);
				dynamic_();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(609);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(607);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
					case 1:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(586);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(587);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(588);
						dynamic_result(11);
						}
						break;
					case 2:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(589);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(590);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(591);
						dynamic_result(4);
						}
						break;
					case 3:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(592);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(593);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(594);
						int_result(0);
						}
						break;
					case 4:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(595);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(596);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(597);
						float_result(0);
						}
						break;
					case 5:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(598);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(599);
						((Dynamic_resultContext)_localctx).op = match(MUL);
						setState(600);
						string_result(0);
						}
						break;
					case 6:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(601);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(602);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(603);
						int_result(0);
						}
						break;
					case 7:
						{
						_localctx = new Dynamic_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_dynamic_result);
						setState(604);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(605);
						((Dynamic_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Dynamic_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(606);
						float_result(0);
						}
						break;
					}
					} 
				}
				setState(611);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
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

	public static class Dynamic_Context extends ParserRuleContext {
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public Function_call_assignmentContext function_call_assignment() {
			return getRuleContext(Function_call_assignmentContext.class,0);
		}
		public Array_selectorContext array_selector() {
			return getRuleContext(Array_selectorContext.class,0);
		}
		public Dynamic_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dynamic_; }
	}

	public final Dynamic_Context dynamic_() throws RecognitionException {
		Dynamic_Context _localctx = new Dynamic_Context(_ctx, getState());
		enterRule(_localctx, 102, RULE_dynamic_);
		try {
			setState(615);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(612);
				id_();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(613);
				function_call_assignment();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(614);
				array_selector();
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

	public static class Int_resultContext extends ParserRuleContext {
		public Token op;
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public List<Int_resultContext> int_result() {
			return getRuleContexts(Int_resultContext.class);
		}
		public Int_resultContext int_result(int i) {
			return getRuleContext(Int_resultContext.class,i);
		}
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Int_tContext int_t() {
			return getRuleContext(Int_tContext.class,0);
		}
		public TerminalNode MUL() { return getToken(CorundumParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CorundumParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(CorundumParser.MOD, 0); }
		public TerminalNode PLUS() { return getToken(CorundumParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(CorundumParser.MINUS, 0); }
		public Int_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_int_result; }
	}

	public final Int_resultContext int_result() throws RecognitionException {
		return int_result(0);
	}

	private Int_resultContext int_result(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Int_resultContext _localctx = new Int_resultContext(_ctx, _parentState);
		Int_resultContext _prevctx = _localctx;
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_int_result, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(623);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LEFT_RBRACKET:
				{
				setState(618);
				match(LEFT_RBRACKET);
				setState(619);
				int_result(0);
				setState(620);
				match(RIGHT_RBRACKET);
				}
				break;
			case INT:
				{
				setState(622);
				int_t();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(633);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(631);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
					case 1:
						{
						_localctx = new Int_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_int_result);
						setState(625);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(626);
						((Int_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Int_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(627);
						int_result(5);
						}
						break;
					case 2:
						{
						_localctx = new Int_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_int_result);
						setState(628);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(629);
						((Int_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Int_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(630);
						int_result(4);
						}
						break;
					}
					} 
				}
				setState(635);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
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

	public static class Float_resultContext extends ParserRuleContext {
		public Token op;
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public List<Float_resultContext> float_result() {
			return getRuleContexts(Float_resultContext.class);
		}
		public Float_resultContext float_result(int i) {
			return getRuleContext(Float_resultContext.class,i);
		}
		public TerminalNode MUL() { return getToken(CorundumParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CorundumParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(CorundumParser.MOD, 0); }
		public TerminalNode PLUS() { return getToken(CorundumParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(CorundumParser.MINUS, 0); }
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Float_tContext float_t() {
			return getRuleContext(Float_tContext.class,0);
		}
		public Float_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_float_result; }
	}

	public final Float_resultContext float_result() throws RecognitionException {
		return float_result(0);
	}

	private Float_resultContext float_result(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Float_resultContext _localctx = new Float_resultContext(_ctx, _parentState);
		Float_resultContext _prevctx = _localctx;
		int _startState = 106;
		enterRecursionRule(_localctx, 106, RULE_float_result, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(650);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(637);
				int_result(0);
				setState(638);
				((Float_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
					((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(639);
				float_result(7);
				}
				break;
			case 2:
				{
				setState(641);
				int_result(0);
				setState(642);
				((Float_resultContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(643);
				float_result(4);
				}
				break;
			case 3:
				{
				setState(645);
				match(LEFT_RBRACKET);
				setState(646);
				float_result(0);
				setState(647);
				match(RIGHT_RBRACKET);
				}
				break;
			case 4:
				{
				setState(649);
				float_t();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(666);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(664);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
					case 1:
						{
						_localctx = new Float_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_float_result);
						setState(652);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(653);
						((Float_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(654);
						float_result(9);
						}
						break;
					case 2:
						{
						_localctx = new Float_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_float_result);
						setState(655);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(656);
						((Float_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(657);
						float_result(6);
						}
						break;
					case 3:
						{
						_localctx = new Float_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_float_result);
						setState(658);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(659);
						((Float_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(660);
						int_result(0);
						}
						break;
					case 4:
						{
						_localctx = new Float_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_float_result);
						setState(661);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(662);
						((Float_resultContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((Float_resultContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(663);
						int_result(0);
						}
						break;
					}
					} 
				}
				setState(668);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
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

	public static class String_resultContext extends ParserRuleContext {
		public Token op;
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public List<String_resultContext> string_result() {
			return getRuleContexts(String_resultContext.class);
		}
		public String_resultContext string_result(int i) {
			return getRuleContext(String_resultContext.class,i);
		}
		public TerminalNode MUL() { return getToken(CorundumParser.MUL, 0); }
		public Literal_tContext literal_t() {
			return getRuleContext(Literal_tContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(CorundumParser.PLUS, 0); }
		public String_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_result; }
	}

	public final String_resultContext string_result() throws RecognitionException {
		return string_result(0);
	}

	private String_resultContext string_result(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		String_resultContext _localctx = new String_resultContext(_ctx, _parentState);
		String_resultContext _prevctx = _localctx;
		int _startState = 108;
		enterRecursionRule(_localctx, 108, RULE_string_result, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(675);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LEFT_RBRACKET:
			case INT:
				{
				setState(670);
				int_result(0);
				setState(671);
				((String_resultContext)_localctx).op = match(MUL);
				setState(672);
				string_result(3);
				}
				break;
			case LITERAL:
				{
				setState(674);
				literal_t();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(685);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(683);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
					case 1:
						{
						_localctx = new String_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_string_result);
						setState(677);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(678);
						((String_resultContext)_localctx).op = match(PLUS);
						setState(679);
						string_result(3);
						}
						break;
					case 2:
						{
						_localctx = new String_resultContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_string_result);
						setState(680);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(681);
						((String_resultContext)_localctx).op = match(MUL);
						setState(682);
						int_result(0);
						}
						break;
					}
					} 
				}
				setState(687);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
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

	public static class Comparison_listContext extends ParserRuleContext {
		public ComparisonContext left;
		public Token op;
		public Comparison_listContext right;
		public ComparisonContext comparison() {
			return getRuleContext(ComparisonContext.class,0);
		}
		public TerminalNode BIT_AND() { return getToken(CorundumParser.BIT_AND, 0); }
		public Comparison_listContext comparison_list() {
			return getRuleContext(Comparison_listContext.class,0);
		}
		public TerminalNode AND() { return getToken(CorundumParser.AND, 0); }
		public TerminalNode BIT_OR() { return getToken(CorundumParser.BIT_OR, 0); }
		public TerminalNode OR() { return getToken(CorundumParser.OR, 0); }
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public Comparison_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparison_list; }
	}

	public final Comparison_listContext comparison_list() throws RecognitionException {
		Comparison_listContext _localctx = new Comparison_listContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_comparison_list);
		try {
			setState(709);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(688);
				((Comparison_listContext)_localctx).left = comparison();
				setState(689);
				((Comparison_listContext)_localctx).op = match(BIT_AND);
				setState(690);
				((Comparison_listContext)_localctx).right = comparison_list();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(692);
				((Comparison_listContext)_localctx).left = comparison();
				setState(693);
				((Comparison_listContext)_localctx).op = match(AND);
				setState(694);
				((Comparison_listContext)_localctx).right = comparison_list();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(696);
				((Comparison_listContext)_localctx).left = comparison();
				setState(697);
				((Comparison_listContext)_localctx).op = match(BIT_OR);
				setState(698);
				((Comparison_listContext)_localctx).right = comparison_list();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(700);
				((Comparison_listContext)_localctx).left = comparison();
				setState(701);
				((Comparison_listContext)_localctx).op = match(OR);
				setState(702);
				((Comparison_listContext)_localctx).right = comparison_list();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(704);
				match(LEFT_RBRACKET);
				setState(705);
				comparison_list();
				setState(706);
				match(RIGHT_RBRACKET);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(708);
				comparison();
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

	public static class ComparisonContext extends ParserRuleContext {
		public Comp_varContext left;
		public Token op;
		public Comp_varContext right;
		public List<Comp_varContext> comp_var() {
			return getRuleContexts(Comp_varContext.class);
		}
		public Comp_varContext comp_var(int i) {
			return getRuleContext(Comp_varContext.class,i);
		}
		public TerminalNode LESS() { return getToken(CorundumParser.LESS, 0); }
		public TerminalNode GREATER() { return getToken(CorundumParser.GREATER, 0); }
		public TerminalNode LESS_EQUAL() { return getToken(CorundumParser.LESS_EQUAL, 0); }
		public TerminalNode GREATER_EQUAL() { return getToken(CorundumParser.GREATER_EQUAL, 0); }
		public TerminalNode EQUAL() { return getToken(CorundumParser.EQUAL, 0); }
		public TerminalNode NOT_EQUAL() { return getToken(CorundumParser.NOT_EQUAL, 0); }
		public ComparisonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparison; }
	}

	public final ComparisonContext comparison() throws RecognitionException {
		ComparisonContext _localctx = new ComparisonContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_comparison);
		int _la;
		try {
			setState(719);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(711);
				((ComparisonContext)_localctx).left = comp_var();
				setState(712);
				((ComparisonContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << GREATER) | (1L << LESS) | (1L << LESS_EQUAL) | (1L << GREATER_EQUAL))) != 0)) ) {
					((ComparisonContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(713);
				((ComparisonContext)_localctx).right = comp_var();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(715);
				((ComparisonContext)_localctx).left = comp_var();
				setState(716);
				((ComparisonContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==EQUAL || _la==NOT_EQUAL) ) {
					((ComparisonContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(717);
				((ComparisonContext)_localctx).right = comp_var();
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

	public static class Comp_varContext extends ParserRuleContext {
		public All_resultContext all_result() {
			return getRuleContext(All_resultContext.class,0);
		}
		public Array_selectorContext array_selector() {
			return getRuleContext(Array_selectorContext.class,0);
		}
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public Comp_varContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comp_var; }
	}

	public final Comp_varContext comp_var() throws RecognitionException {
		Comp_varContext _localctx = new Comp_varContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_comp_var);
		try {
			setState(724);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(721);
				all_result();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(722);
				array_selector();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(723);
				id_();
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

	public static class LvalueContext extends ParserRuleContext {
		public Id_Context id_() {
			return getRuleContext(Id_Context.class,0);
		}
		public LvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lvalue; }
	}

	public final LvalueContext lvalue() throws RecognitionException {
		LvalueContext _localctx = new LvalueContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_lvalue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(726);
			id_();
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

	public static class RvalueContext extends ParserRuleContext {
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public Initial_array_assignmentContext initial_array_assignment() {
			return getRuleContext(Initial_array_assignmentContext.class,0);
		}
		public Array_assignmentContext array_assignment() {
			return getRuleContext(Array_assignmentContext.class,0);
		}
		public Int_resultContext int_result() {
			return getRuleContext(Int_resultContext.class,0);
		}
		public Float_resultContext float_result() {
			return getRuleContext(Float_resultContext.class,0);
		}
		public String_resultContext string_result() {
			return getRuleContext(String_resultContext.class,0);
		}
		public Global_setContext global_set() {
			return getRuleContext(Global_setContext.class,0);
		}
		public Global_getContext global_get() {
			return getRuleContext(Global_getContext.class,0);
		}
		public Dynamic_assignmentContext dynamic_assignment() {
			return getRuleContext(Dynamic_assignmentContext.class,0);
		}
		public String_assignmentContext string_assignment() {
			return getRuleContext(String_assignmentContext.class,0);
		}
		public Float_assignmentContext float_assignment() {
			return getRuleContext(Float_assignmentContext.class,0);
		}
		public Int_assignmentContext int_assignment() {
			return getRuleContext(Int_assignmentContext.class,0);
		}
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public Literal_tContext literal_t() {
			return getRuleContext(Literal_tContext.class,0);
		}
		public Bool_tContext bool_t() {
			return getRuleContext(Bool_tContext.class,0);
		}
		public Float_tContext float_t() {
			return getRuleContext(Float_tContext.class,0);
		}
		public Int_tContext int_t() {
			return getRuleContext(Int_tContext.class,0);
		}
		public Nil_tContext nil_t() {
			return getRuleContext(Nil_tContext.class,0);
		}
		public List<RvalueContext> rvalue() {
			return getRuleContexts(RvalueContext.class);
		}
		public RvalueContext rvalue(int i) {
			return getRuleContext(RvalueContext.class,i);
		}
		public TerminalNode NOT() { return getToken(CorundumParser.NOT, 0); }
		public TerminalNode BIT_NOT() { return getToken(CorundumParser.BIT_NOT, 0); }
		public TerminalNode LEFT_RBRACKET() { return getToken(CorundumParser.LEFT_RBRACKET, 0); }
		public TerminalNode RIGHT_RBRACKET() { return getToken(CorundumParser.RIGHT_RBRACKET, 0); }
		public TerminalNode EXP() { return getToken(CorundumParser.EXP, 0); }
		public TerminalNode MUL() { return getToken(CorundumParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CorundumParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(CorundumParser.MOD, 0); }
		public TerminalNode PLUS() { return getToken(CorundumParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(CorundumParser.MINUS, 0); }
		public TerminalNode BIT_SHL() { return getToken(CorundumParser.BIT_SHL, 0); }
		public TerminalNode BIT_SHR() { return getToken(CorundumParser.BIT_SHR, 0); }
		public TerminalNode BIT_AND() { return getToken(CorundumParser.BIT_AND, 0); }
		public TerminalNode BIT_OR() { return getToken(CorundumParser.BIT_OR, 0); }
		public TerminalNode BIT_XOR() { return getToken(CorundumParser.BIT_XOR, 0); }
		public TerminalNode LESS() { return getToken(CorundumParser.LESS, 0); }
		public TerminalNode GREATER() { return getToken(CorundumParser.GREATER, 0); }
		public TerminalNode LESS_EQUAL() { return getToken(CorundumParser.LESS_EQUAL, 0); }
		public TerminalNode GREATER_EQUAL() { return getToken(CorundumParser.GREATER_EQUAL, 0); }
		public TerminalNode EQUAL() { return getToken(CorundumParser.EQUAL, 0); }
		public TerminalNode NOT_EQUAL() { return getToken(CorundumParser.NOT_EQUAL, 0); }
		public TerminalNode OR() { return getToken(CorundumParser.OR, 0); }
		public TerminalNode AND() { return getToken(CorundumParser.AND, 0); }
		public RvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rvalue; }
	}

	public final RvalueContext rvalue() throws RecognitionException {
		return rvalue(0);
	}

	private RvalueContext rvalue(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		RvalueContext _localctx = new RvalueContext(_ctx, _parentState);
		RvalueContext _prevctx = _localctx;
		int _startState = 118;
		enterRecursionRule(_localctx, 118, RULE_rvalue, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(754);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				{
				setState(729);
				lvalue();
				}
				break;
			case 2:
				{
				setState(730);
				initial_array_assignment();
				}
				break;
			case 3:
				{
				setState(731);
				array_assignment();
				}
				break;
			case 4:
				{
				setState(732);
				int_result(0);
				}
				break;
			case 5:
				{
				setState(733);
				float_result(0);
				}
				break;
			case 6:
				{
				setState(734);
				string_result(0);
				}
				break;
			case 7:
				{
				setState(735);
				global_set();
				}
				break;
			case 8:
				{
				setState(736);
				global_get();
				}
				break;
			case 9:
				{
				setState(737);
				dynamic_assignment();
				}
				break;
			case 10:
				{
				setState(738);
				string_assignment();
				}
				break;
			case 11:
				{
				setState(739);
				float_assignment();
				}
				break;
			case 12:
				{
				setState(740);
				int_assignment();
				}
				break;
			case 13:
				{
				setState(741);
				assignment();
				}
				break;
			case 14:
				{
				setState(742);
				function_call();
				}
				break;
			case 15:
				{
				setState(743);
				literal_t();
				}
				break;
			case 16:
				{
				setState(744);
				bool_t();
				}
				break;
			case 17:
				{
				setState(745);
				float_t();
				}
				break;
			case 18:
				{
				setState(746);
				int_t();
				}
				break;
			case 19:
				{
				setState(747);
				nil_t();
				}
				break;
			case 20:
				{
				setState(748);
				_la = _input.LA(1);
				if ( !(_la==BIT_NOT || _la==NOT) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(749);
				rvalue(10);
				}
				break;
			case 21:
				{
				setState(750);
				match(LEFT_RBRACKET);
				setState(751);
				rvalue(0);
				setState(752);
				match(RIGHT_RBRACKET);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(785);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(783);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
					case 1:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(756);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(757);
						match(EXP);
						setState(758);
						rvalue(12);
						}
						break;
					case 2:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(759);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(760);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(761);
						rvalue(10);
						}
						break;
					case 3:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(762);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(763);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(764);
						rvalue(9);
						}
						break;
					case 4:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(765);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(766);
						_la = _input.LA(1);
						if ( !(_la==BIT_SHL || _la==BIT_SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(767);
						rvalue(8);
						}
						break;
					case 5:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(768);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(769);
						match(BIT_AND);
						setState(770);
						rvalue(7);
						}
						break;
					case 6:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(771);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(772);
						_la = _input.LA(1);
						if ( !(_la==BIT_OR || _la==BIT_XOR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(773);
						rvalue(6);
						}
						break;
					case 7:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(774);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(775);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << GREATER) | (1L << LESS) | (1L << LESS_EQUAL) | (1L << GREATER_EQUAL))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(776);
						rvalue(5);
						}
						break;
					case 8:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(777);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(778);
						_la = _input.LA(1);
						if ( !(_la==EQUAL || _la==NOT_EQUAL) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(779);
						rvalue(4);
						}
						break;
					case 9:
						{
						_localctx = new RvalueContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_rvalue);
						setState(780);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(781);
						_la = _input.LA(1);
						if ( !(_la==AND || _la==OR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(782);
						rvalue(3);
						}
						break;
					}
					} 
				}
				setState(787);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
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

	public static class Break_expressionContext extends ParserRuleContext {
		public TerminalNode BREAK() { return getToken(CorundumParser.BREAK, 0); }
		public Break_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_break_expression; }
	}

	public final Break_expressionContext break_expression() throws RecognitionException {
		Break_expressionContext _localctx = new Break_expressionContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_break_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(788);
			match(BREAK);
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

	public static class Literal_tContext extends ParserRuleContext {
		public TerminalNode LITERAL() { return getToken(CorundumParser.LITERAL, 0); }
		public Literal_tContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal_t; }
	}

	public final Literal_tContext literal_t() throws RecognitionException {
		Literal_tContext _localctx = new Literal_tContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_literal_t);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(790);
			match(LITERAL);
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

	public static class Float_tContext extends ParserRuleContext {
		public TerminalNode FLOAT() { return getToken(CorundumParser.FLOAT, 0); }
		public Float_tContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_float_t; }
	}

	public final Float_tContext float_t() throws RecognitionException {
		Float_tContext _localctx = new Float_tContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_float_t);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(792);
			match(FLOAT);
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

	public static class Int_tContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(CorundumParser.INT, 0); }
		public Int_tContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_int_t; }
	}

	public final Int_tContext int_t() throws RecognitionException {
		Int_tContext _localctx = new Int_tContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_int_t);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(794);
			match(INT);
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

	public static class Bool_tContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(CorundumParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(CorundumParser.FALSE, 0); }
		public Bool_tContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bool_t; }
	}

	public final Bool_tContext bool_t() throws RecognitionException {
		Bool_tContext _localctx = new Bool_tContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_bool_t);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(796);
			_la = _input.LA(1);
			if ( !(_la==TRUE || _la==FALSE) ) {
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

	public static class Nil_tContext extends ParserRuleContext {
		public TerminalNode NIL() { return getToken(CorundumParser.NIL, 0); }
		public Nil_tContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nil_t; }
	}

	public final Nil_tContext nil_t() throws RecognitionException {
		Nil_tContext _localctx = new Nil_tContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_nil_t);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(798);
			match(NIL);
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

	public static class Id_Context extends ParserRuleContext {
		public TerminalNode ID() { return getToken(CorundumParser.ID, 0); }
		public Id_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_; }
	}

	public final Id_Context id_() throws RecognitionException {
		Id_Context _localctx = new Id_Context(_ctx, getState());
		enterRule(_localctx, 132, RULE_id_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(800);
			match(ID);
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

	public static class Id_globalContext extends ParserRuleContext {
		public TerminalNode ID_GLOBAL() { return getToken(CorundumParser.ID_GLOBAL, 0); }
		public Id_globalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_global; }
	}

	public final Id_globalContext id_global() throws RecognitionException {
		Id_globalContext _localctx = new Id_globalContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_id_global);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(802);
			match(ID_GLOBAL);
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

	public static class Id_functionContext extends ParserRuleContext {
		public TerminalNode ID_FUNCTION() { return getToken(CorundumParser.ID_FUNCTION, 0); }
		public Id_functionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_function; }
	}

	public final Id_functionContext id_function() throws RecognitionException {
		Id_functionContext _localctx = new Id_functionContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_id_function);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(804);
			match(ID_FUNCTION);
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

	public static class TerminatorContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(CorundumParser.SEMICOLON, 0); }
		public CrlfContext crlf() {
			return getRuleContext(CrlfContext.class,0);
		}
		public TerminatorContext terminator() {
			return getRuleContext(TerminatorContext.class,0);
		}
		public TerminatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_terminator; }
	}

	public final TerminatorContext terminator() throws RecognitionException {
		return terminator(0);
	}

	private TerminatorContext terminator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TerminatorContext _localctx = new TerminatorContext(_ctx, _parentState);
		TerminatorContext _prevctx = _localctx;
		int _startState = 138;
		enterRecursionRule(_localctx, 138, RULE_terminator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(809);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SEMICOLON:
				{
				setState(807);
				match(SEMICOLON);
				}
				break;
			case CRLF:
				{
				setState(808);
				crlf();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(817);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(815);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
					case 1:
						{
						_localctx = new TerminatorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_terminator);
						setState(811);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(812);
						match(SEMICOLON);
						}
						break;
					case 2:
						{
						_localctx = new TerminatorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_terminator);
						setState(813);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(814);
						crlf();
						}
						break;
					}
					} 
				}
				setState(819);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
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

	public static class Else_tokenContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(CorundumParser.ELSE, 0); }
		public Else_tokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_token; }
	}

	public final Else_tokenContext else_token() throws RecognitionException {
		Else_tokenContext _localctx = new Else_tokenContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_else_token);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(820);
			match(ELSE);
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

	public static class CrlfContext extends ParserRuleContext {
		public TerminalNode CRLF() { return getToken(CorundumParser.CRLF, 0); }
		public CrlfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_crlf; }
	}

	public final CrlfContext crlf() throws RecognitionException {
		CrlfContext _localctx = new CrlfContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_crlf);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(822);
			match(CRLF);
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
		case 1:
			return expression_list_sempred((Expression_listContext)_localctx, predIndex);
		case 15:
			return function_definition_params_list_sempred((Function_definition_params_listContext)_localctx, predIndex);
		case 20:
			return function_call_params_sempred((Function_call_paramsContext)_localctx, predIndex);
		case 34:
			return for_init_list_sempred((For_init_listContext)_localctx, predIndex);
		case 37:
			return for_loop_list_sempred((For_loop_listContext)_localctx, predIndex);
		case 39:
			return statement_expression_list_sempred((Statement_expression_listContext)_localctx, predIndex);
		case 48:
			return array_definition_elements_sempred((Array_definition_elementsContext)_localctx, predIndex);
		case 50:
			return dynamic_result_sempred((Dynamic_resultContext)_localctx, predIndex);
		case 52:
			return int_result_sempred((Int_resultContext)_localctx, predIndex);
		case 53:
			return float_result_sempred((Float_resultContext)_localctx, predIndex);
		case 54:
			return string_result_sempred((String_resultContext)_localctx, predIndex);
		case 59:
			return rvalue_sempred((RvalueContext)_localctx, predIndex);
		case 69:
			return terminator_sempred((TerminatorContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_list_sempred(Expression_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean function_definition_params_list_sempred(Function_definition_params_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean function_call_params_sempred(Function_call_paramsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean for_init_list_sempred(For_init_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean for_loop_list_sempred(For_loop_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean statement_expression_list_sempred(Statement_expression_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 2);
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean array_definition_elements_sempred(Array_definition_elementsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean dynamic_result_sempred(Dynamic_resultContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 10);
		case 10:
			return precpred(_ctx, 3);
		case 11:
			return precpred(_ctx, 14);
		case 12:
			return precpred(_ctx, 12);
		case 13:
			return precpred(_ctx, 9);
		case 14:
			return precpred(_ctx, 7);
		case 15:
			return precpred(_ctx, 5);
		}
		return true;
	}
	private boolean int_result_sempred(Int_resultContext _localctx, int predIndex) {
		switch (predIndex) {
		case 16:
			return precpred(_ctx, 4);
		case 17:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean float_result_sempred(Float_resultContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return precpred(_ctx, 8);
		case 19:
			return precpred(_ctx, 5);
		case 20:
			return precpred(_ctx, 6);
		case 21:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean string_result_sempred(String_resultContext _localctx, int predIndex) {
		switch (predIndex) {
		case 22:
			return precpred(_ctx, 2);
		case 23:
			return precpred(_ctx, 4);
		}
		return true;
	}
	private boolean rvalue_sempred(RvalueContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return precpred(_ctx, 11);
		case 25:
			return precpred(_ctx, 9);
		case 26:
			return precpred(_ctx, 8);
		case 27:
			return precpred(_ctx, 7);
		case 28:
			return precpred(_ctx, 6);
		case 29:
			return precpred(_ctx, 5);
		case 30:
			return precpred(_ctx, 4);
		case 31:
			return precpred(_ctx, 3);
		case 32:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean terminator_sempred(TerminatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 4);
		case 34:
			return precpred(_ctx, 3);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3>\u033b\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3\u009b\n\3\3\3\3\3\3\3\3\3\7\3"+
		"\u00a1\n\3\f\3\16\3\u00a4\13\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\5\4\u00b0\n\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3\f\3\f\3\r\3\r\3\16\3\16\3"+
		"\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u00d7\n\16\3\17\3\17\5\17\u00db"+
		"\n\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u00e4\n\20\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\7\21\u00ec\n\21\f\21\16\21\u00ef\13\21\3\22\3\22\3\23"+
		"\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\5\24\u0102\n\24\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\7\26\u010c\n"+
		"\26\f\26\16\26\u010f\13\26\3\27\3\27\5\27\u0113\n\27\3\30\3\30\3\30\3"+
		"\30\5\30\u0119\n\30\3\31\3\31\3\31\3\31\3\31\3\31\5\31\u0121\n\31\3\32"+
		"\3\32\3\33\3\33\3\33\3\33\3\33\5\33\u012a\n\33\3\34\3\34\3\35\3\35\3\35"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35"+
		"\3\35\3\35\5\35\u0141\n\35\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36"+
		"\u0159\n\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u0171\n\37\3 "+
		"\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!"+
		"\3!\3!\3!\3!\5!\u018f\n!\3\"\3\"\3#\3#\3#\3#\5#\u0197\n#\3$\3$\3$\3$\3"+
		"$\3$\7$\u019f\n$\f$\16$\u01a2\13$\3%\3%\3&\3&\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\7\'\u01ae\n\'\f\'\16\'\u01b1\13\'\3(\3(\3)\3)\3)\3)\3)\3)\3)\3)\3)\5"+
		")\u01be\n)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\7)\u01cb\n)\f)\16)\u01ce\13"+
		")\3*\3*\3*\3*\3*\3*\3*\3*\5*\u01d8\n*\3+\3+\3+\3+\3+\3+\3+\3+\5+\u01e2"+
		"\n+\3,\3,\3,\3,\3,\3,\3,\3,\5,\u01ec\n,\3-\3-\3-\3-\3-\3-\3-\3-\5-\u01f6"+
		"\n-\3.\3.\3.\3.\3.\3.\3.\3.\5.\u0200\n.\3/\3/\3/\3/\3/\3\60\3\60\3\60"+
		"\3\60\3\61\3\61\3\61\3\61\3\62\3\62\3\62\5\62\u0212\n\62\3\62\3\62\3\62"+
		"\3\62\5\62\u0218\n\62\7\62\u021a\n\62\f\62\16\62\u021d\13\62\3\63\3\63"+
		"\3\63\3\63\5\63\u0223\n\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u022b\n"+
		"\63\3\63\3\63\5\63\u022f\n\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\5\64\u024b\n\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64"+
		"\7\64\u0262\n\64\f\64\16\64\u0265\13\64\3\65\3\65\3\65\5\65\u026a\n\65"+
		"\3\66\3\66\3\66\3\66\3\66\3\66\5\66\u0272\n\66\3\66\3\66\3\66\3\66\3\66"+
		"\3\66\7\66\u027a\n\66\f\66\16\66\u027d\13\66\3\67\3\67\3\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u028d\n\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\7\67\u029b\n\67\f\67"+
		"\16\67\u029e\13\67\38\38\38\38\38\38\58\u02a6\n8\38\38\38\38\38\38\78"+
		"\u02ae\n8\f8\168\u02b1\138\39\39\39\39\39\39\39\39\39\39\39\39\39\39\3"+
		"9\39\39\39\39\39\39\59\u02c8\n9\3:\3:\3:\3:\3:\3:\3:\3:\5:\u02d2\n:\3"+
		";\3;\3;\5;\u02d7\n;\3<\3<\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3"+
		"=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\5=\u02f5\n=\3=\3=\3=\3=\3=\3=\3=\3"+
		"=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\7=\u0312\n"+
		"=\f=\16=\u0315\13=\3>\3>\3?\3?\3@\3@\3A\3A\3B\3B\3C\3C\3D\3D\3E\3E\3F"+
		"\3F\3G\3G\3G\5G\u032c\nG\3G\3G\3G\3G\7G\u0332\nG\fG\16G\u0335\13G\3H\3"+
		"H\3I\3I\3I\2\17\4 *FLPbfjlnx\u008cJ\2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082"+
		"\u0084\u0086\u0088\u008a\u008c\u008e\u0090\2\f\3\2#(\3\2\30\32\3\2\26"+
		"\27\3\2\36!\3\2\34\35\4\2,,\61\61\3\2-.\3\2*+\3\2/\60\3\2\24\25\2\u0370"+
		"\2\u0092\3\2\2\2\4\u009a\3\2\2\2\6\u00af\3\2\2\2\b\u00b1\3\2\2\2\n\u00b5"+
		"\3\2\2\2\f\u00b9\3\2\2\2\16\u00bb\3\2\2\2\20\u00bd\3\2\2\2\22\u00c0\3"+
		"\2\2\2\24\u00c5\3\2\2\2\26\u00c7\3\2\2\2\30\u00cb\3\2\2\2\32\u00d6\3\2"+
		"\2\2\34\u00da\3\2\2\2\36\u00e3\3\2\2\2 \u00e5\3\2\2\2\"\u00f0\3\2\2\2"+
		"$\u00f2\3\2\2\2&\u0101\3\2\2\2(\u0103\3\2\2\2*\u0105\3\2\2\2,\u0112\3"+
		"\2\2\2.\u0118\3\2\2\2\60\u011a\3\2\2\2\62\u0122\3\2\2\2\64\u0129\3\2\2"+
		"\2\66\u012b\3\2\2\28\u0140\3\2\2\2:\u0158\3\2\2\2<\u0170\3\2\2\2>\u0172"+
		"\3\2\2\2@\u018e\3\2\2\2B\u0190\3\2\2\2D\u0196\3\2\2\2F\u0198\3\2\2\2H"+
		"\u01a3\3\2\2\2J\u01a5\3\2\2\2L\u01a7\3\2\2\2N\u01b2\3\2\2\2P\u01bd\3\2"+
		"\2\2R\u01d7\3\2\2\2T\u01e1\3\2\2\2V\u01eb\3\2\2\2X\u01f5\3\2\2\2Z\u01ff"+
		"\3\2\2\2\\\u0201\3\2\2\2^\u0206\3\2\2\2`\u020a\3\2\2\2b\u020e\3\2\2\2"+
		"d\u022e\3\2\2\2f\u024a\3\2\2\2h\u0269\3\2\2\2j\u0271\3\2\2\2l\u028c\3"+
		"\2\2\2n\u02a5\3\2\2\2p\u02c7\3\2\2\2r\u02d1\3\2\2\2t\u02d6\3\2\2\2v\u02d8"+
		"\3\2\2\2x\u02f4\3\2\2\2z\u0316\3\2\2\2|\u0318\3\2\2\2~\u031a\3\2\2\2\u0080"+
		"\u031c\3\2\2\2\u0082\u031e\3\2\2\2\u0084\u0320\3\2\2\2\u0086\u0322\3\2"+
		"\2\2\u0088\u0324\3\2\2\2\u008a\u0326\3\2\2\2\u008c\u032b\3\2\2\2\u008e"+
		"\u0336\3\2\2\2\u0090\u0338\3\2\2\2\u0092\u0093\5\4\3\2\u0093\u0094\7\2"+
		"\2\3\u0094\3\3\2\2\2\u0095\u0096\b\3\1\2\u0096\u0097\5\6\4\2\u0097\u0098"+
		"\5\u008cG\2\u0098\u009b\3\2\2\2\u0099\u009b\5\u008cG\2\u009a\u0095\3\2"+
		"\2\2\u009a\u0099\3\2\2\2\u009b\u00a2\3\2\2\2\u009c\u009d\f\4\2\2\u009d"+
		"\u009e\5\6\4\2\u009e\u009f\5\u008cG\2\u009f\u00a1\3\2\2\2\u00a0\u009c"+
		"\3\2\2\2\u00a1\u00a4\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3"+
		"\5\3\2\2\2\u00a4\u00a2\3\2\2\2\u00a5\u00b0\5\26\f\2\u00a6\u00b0\5\16\b"+
		"\2\u00a7\u00b0\5\20\t\2\u00a8\u00b0\5:\36\2\u00a9\u00b0\5<\37\2\u00aa"+
		"\u00b0\5x=\2\u00ab\u00b0\5$\23\2\u00ac\u00b0\5> \2\u00ad\u00b0\5@!\2\u00ae"+
		"\u00b0\5\22\n\2\u00af\u00a5\3\2\2\2\u00af\u00a6\3\2\2\2\u00af\u00a7\3"+
		"\2\2\2\u00af\u00a8\3\2\2\2\u00af\u00a9\3\2\2\2\u00af\u00aa\3\2\2\2\u00af"+
		"\u00ab\3\2\2\2\u00af\u00ac\3\2\2\2\u00af\u00ad\3\2\2\2\u00af\u00ae\3\2"+
		"\2\2\u00b0\7\3\2\2\2\u00b1\u00b2\5v<\2\u00b2\u00b3\7\"\2\2\u00b3\u00b4"+
		"\5\u0088E\2\u00b4\t\3\2\2\2\u00b5\u00b6\5\u0088E\2\u00b6\u00b7\7\"\2\2"+
		"\u00b7\u00b8\5\64\33\2\u00b8\13\3\2\2\2\u00b9\u00ba\5\u0088E\2\u00ba\r"+
		"\3\2\2\2\u00bb\u00bc\5&\24\2\u00bc\17\3\2\2\2\u00bd\u00be\7\7\2\2\u00be"+
		"\u00bf\5|?\2\u00bf\21\3\2\2\2\u00c0\u00c1\7\13\2\2\u00c1\u00c2\5\u0090"+
		"I\2\u00c2\u00c3\5\24\13\2\u00c3\u00c4\7\b\2\2\u00c4\23\3\2\2\2\u00c5\u00c6"+
		"\5\4\3\2\u00c6\25\3\2\2\2\u00c7\u00c8\5\32\16\2\u00c8\u00c9\5\30\r\2\u00c9"+
		"\u00ca\7\b\2\2\u00ca\27\3\2\2\2\u00cb\u00cc\5\4\3\2\u00cc\31\3\2\2\2\u00cd"+
		"\u00ce\7\t\2\2\u00ce\u00cf\5\34\17\2\u00cf\u00d0\5\u0090I\2\u00d0\u00d7"+
		"\3\2\2\2\u00d1\u00d2\7\t\2\2\u00d2\u00d3\5\34\17\2\u00d3\u00d4\5\36\20"+
		"\2\u00d4\u00d5\5\u0090I\2\u00d5\u00d7\3\2\2\2\u00d6\u00cd\3\2\2\2\u00d6"+
		"\u00d1\3\2\2\2\u00d7\33\3\2\2\2\u00d8\u00db\5\u008aF\2\u00d9\u00db\5\u0086"+
		"D\2\u00da\u00d8\3\2\2\2\u00da\u00d9\3\2\2\2\u00db\35\3\2\2\2\u00dc\u00dd"+
		"\7\62\2\2\u00dd\u00e4\7\63\2\2\u00de\u00df\7\62\2\2\u00df\u00e0\5 \21"+
		"\2\u00e0\u00e1\7\63\2\2\u00e1\u00e4\3\2\2\2\u00e2\u00e4\5 \21\2\u00e3"+
		"\u00dc\3\2\2\2\u00e3\u00de\3\2\2\2\u00e3\u00e2\3\2\2\2\u00e4\37\3\2\2"+
		"\2\u00e5\u00e6\b\21\1\2\u00e6\u00e7\5\"\22\2\u00e7\u00ed\3\2\2\2\u00e8"+
		"\u00e9\f\3\2\2\u00e9\u00ea\7\4\2\2\u00ea\u00ec\5\"\22\2\u00eb\u00e8\3"+
		"\2\2\2\u00ec\u00ef\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee"+
		"!\3\2\2\2\u00ef\u00ed\3\2\2\2\u00f0\u00f1\5\u0086D\2\u00f1#\3\2\2\2\u00f2"+
		"\u00f3\7\n\2\2\u00f3\u00f4\5\64\33\2\u00f4%\3\2\2\2\u00f5\u00f6\5\34\17"+
		"\2\u00f6\u00f7\7\62\2\2\u00f7\u00f8\5(\25\2\u00f8\u00f9\7\63\2\2\u00f9"+
		"\u0102\3\2\2\2\u00fa\u00fb\5\34\17\2\u00fb\u00fc\5(\25\2\u00fc\u0102\3"+
		"\2\2\2\u00fd\u00fe\5\34\17\2\u00fe\u00ff\7\62\2\2\u00ff\u0100\7\63\2\2"+
		"\u0100\u0102\3\2\2\2\u0101\u00f5\3\2\2\2\u0101\u00fa\3\2\2\2\u0101\u00fd"+
		"\3\2\2\2\u0102\'\3\2\2\2\u0103\u0104\5*\26\2\u0104)\3\2\2\2\u0105\u0106"+
		"\b\26\1\2\u0106\u0107\5,\27\2\u0107\u010d\3\2\2\2\u0108\u0109\f\3\2\2"+
		"\u0109\u010a\7\4\2\2\u010a\u010c\5,\27\2\u010b\u0108\3\2\2\2\u010c\u010f"+
		"\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e\3\2\2\2\u010e+\3\2\2\2\u010f"+
		"\u010d\3\2\2\2\u0110\u0113\5.\30\2\u0111\u0113\5\60\31\2\u0112\u0110\3"+
		"\2\2\2\u0112\u0111\3\2\2\2\u0113-\3\2\2\2\u0114\u0119\5j\66\2\u0115\u0119"+
		"\5l\67\2\u0116\u0119\5n8\2\u0117\u0119\5f\64\2\u0118\u0114\3\2\2\2\u0118"+
		"\u0115\3\2\2\2\u0118\u0116\3\2\2\2\u0118\u0117\3\2\2\2\u0119/\3\2\2\2"+
		"\u011a\u011b\5\u0086D\2\u011b\u0120\7\"\2\2\u011c\u0121\5j\66\2\u011d"+
		"\u0121\5l\67\2\u011e\u0121\5n8\2\u011f\u0121\5f\64\2\u0120\u011c\3\2\2"+
		"\2\u0120\u011d\3\2\2\2\u0120\u011e\3\2\2\2\u0120\u011f\3\2\2\2\u0121\61"+
		"\3\2\2\2\u0122\u0123\5&\24\2\u0123\63\3\2\2\2\u0124\u012a\5j\66\2\u0125"+
		"\u012a\5l\67\2\u0126\u012a\5n8\2\u0127\u012a\5f\64\2\u0128\u012a\5\f\7"+
		"\2\u0129\u0124\3\2\2\2\u0129\u0125\3\2\2\2\u0129\u0126\3\2\2\2\u0129\u0127"+
		"\3\2\2\2\u0129\u0128\3\2\2\2\u012a\65\3\2\2\2\u012b\u012c\58\35\2\u012c"+
		"\67\3\2\2\2\u012d\u012e\7\16\2\2\u012e\u012f\5H%\2\u012f\u0130\5\u0090"+
		"I\2\u0130\u0131\5N(\2\u0131\u0141\3\2\2\2\u0132\u0133\7\16\2\2\u0133\u0134"+
		"\5H%\2\u0134\u0135\5\u0090I\2\u0135\u0136\5N(\2\u0136\u0137\5\u008eH\2"+
		"\u0137\u0138\5\u0090I\2\u0138\u0139\5N(\2\u0139\u0141\3\2\2\2\u013a\u013b"+
		"\7\16\2\2\u013b\u013c\5H%\2\u013c\u013d\5\u0090I\2\u013d\u013e\5N(\2\u013e"+
		"\u013f\58\35\2\u013f\u0141\3\2\2\2\u0140\u012d\3\2\2\2\u0140\u0132\3\2"+
		"\2\2\u0140\u013a\3\2\2\2\u01419\3\2\2\2\u0142\u0143\7\f\2\2\u0143\u0144"+
		"\5H%\2\u0144\u0145\5\u0090I\2\u0145\u0146\5N(\2\u0146\u0147\7\b\2\2\u0147"+
		"\u0159\3\2\2\2\u0148\u0149\7\f\2\2\u0149\u014a\5H%\2\u014a\u014b\5\u0090"+
		"I\2\u014b\u014c\5N(\2\u014c\u014d\5\u008eH\2\u014d\u014e\5\u0090I\2\u014e"+
		"\u014f\5N(\2\u014f\u0150\7\b\2\2\u0150\u0159\3\2\2\2\u0151\u0152\7\f\2"+
		"\2\u0152\u0153\5H%\2\u0153\u0154\5\u0090I\2\u0154\u0155\5N(\2\u0155\u0156"+
		"\5\66\34\2\u0156\u0157\7\b\2\2\u0157\u0159\3\2\2\2\u0158\u0142\3\2\2\2"+
		"\u0158\u0148\3\2\2\2\u0158\u0151\3\2\2\2\u0159;\3\2\2\2\u015a\u015b\7"+
		"\17\2\2\u015b\u015c\5H%\2\u015c\u015d\5\u0090I\2\u015d\u015e\5N(\2\u015e"+
		"\u015f\7\b\2\2\u015f\u0171\3\2\2\2\u0160\u0161\7\17\2\2\u0161\u0162\5"+
		"H%\2\u0162\u0163\5\u0090I\2\u0163\u0164\5N(\2\u0164\u0165\5\u008eH\2\u0165"+
		"\u0166\5\u0090I\2\u0166\u0167\5N(\2\u0167\u0168\7\b\2\2\u0168\u0171\3"+
		"\2\2\2\u0169\u016a\7\17\2\2\u016a\u016b\5H%\2\u016b\u016c\5\u0090I\2\u016c"+
		"\u016d\5N(\2\u016d\u016e\5\66\34\2\u016e\u016f\7\b\2\2\u016f\u0171\3\2"+
		"\2\2\u0170\u015a\3\2\2\2\u0170\u0160\3\2\2\2\u0170\u0169\3\2\2\2\u0171"+
		"=\3\2\2\2\u0172\u0173\7\20\2\2\u0173\u0174\5H%\2\u0174\u0175\5\u0090I"+
		"\2\u0175\u0176\5N(\2\u0176\u0177\7\b\2\2\u0177?\3\2\2\2\u0178\u0179\7"+
		"\23\2\2\u0179\u017a\7\62\2\2\u017a\u017b\5B\"\2\u017b\u017c\7\5\2\2\u017c"+
		"\u017d\5H%\2\u017d\u017e\7\5\2\2\u017e\u017f\5J&\2\u017f\u0180\7\63\2"+
		"\2\u0180\u0181\5\u0090I\2\u0181\u0182\5N(\2\u0182\u0183\7\b\2\2\u0183"+
		"\u018f\3\2\2\2\u0184\u0185\7\23\2\2\u0185\u0186\5B\"\2\u0186\u0187\7\5"+
		"\2\2\u0187\u0188\5H%\2\u0188\u0189\7\5\2\2\u0189\u018a\5J&\2\u018a\u018b"+
		"\5\u0090I\2\u018b\u018c\5N(\2\u018c\u018d\7\b\2\2\u018d\u018f\3\2\2\2"+
		"\u018e\u0178\3\2\2\2\u018e\u0184\3\2\2\2\u018fA\3\2\2\2\u0190\u0191\5"+
		"F$\2\u0191C\3\2\2\2\u0192\u0197\5V,\2\u0193\u0197\5X-\2\u0194\u0197\5"+
		"Z.\2\u0195\u0197\5T+\2\u0196\u0192\3\2\2\2\u0196\u0193\3\2\2\2\u0196\u0194"+
		"\3\2\2\2\u0196\u0195\3\2\2\2\u0197E\3\2\2\2\u0198\u0199\b$\1\2\u0199\u019a"+
		"\5D#\2\u019a\u01a0\3\2\2\2\u019b\u019c\f\4\2\2\u019c\u019d\7\4\2\2\u019d"+
		"\u019f\5D#\2\u019e\u019b\3\2\2\2\u019f\u01a2\3\2\2\2\u01a0\u019e\3\2\2"+
		"\2\u01a0\u01a1\3\2\2\2\u01a1G\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a3\u01a4"+
		"\5p9\2\u01a4I\3\2\2\2\u01a5\u01a6\5L\'\2\u01a6K\3\2\2\2\u01a7\u01a8\b"+
		"\'\1\2\u01a8\u01a9\5D#\2\u01a9\u01af\3\2\2\2\u01aa\u01ab\f\4\2\2\u01ab"+
		"\u01ac\7\4\2\2\u01ac\u01ae\5D#\2\u01ad\u01aa\3\2\2\2\u01ae\u01b1\3\2\2"+
		"\2\u01af\u01ad\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0M\3\2\2\2\u01b1\u01af"+
		"\3\2\2\2\u01b2\u01b3\5P)\2\u01b3O\3\2\2\2\u01b4\u01b5\b)\1\2\u01b5\u01b6"+
		"\5\6\4\2\u01b6\u01b7\5\u008cG\2\u01b7\u01be\3\2\2\2\u01b8\u01b9\7\21\2"+
		"\2\u01b9\u01be\5\u008cG\2\u01ba\u01bb\5z>\2\u01bb\u01bc\5\u008cG\2\u01bc"+
		"\u01be\3\2\2\2\u01bd\u01b4\3\2\2\2\u01bd\u01b8\3\2\2\2\u01bd\u01ba\3\2"+
		"\2\2\u01be\u01cc\3\2\2\2\u01bf\u01c0\f\5\2\2\u01c0\u01c1\5\6\4\2\u01c1"+
		"\u01c2\5\u008cG\2\u01c2\u01cb\3\2\2\2\u01c3\u01c4\f\4\2\2\u01c4\u01c5"+
		"\7\21\2\2\u01c5\u01cb\5\u008cG\2\u01c6\u01c7\f\3\2\2\u01c7\u01c8\5z>\2"+
		"\u01c8\u01c9\5\u008cG\2\u01c9\u01cb\3\2\2\2\u01ca\u01bf\3\2\2\2\u01ca"+
		"\u01c3\3\2\2\2\u01ca\u01c6\3\2\2\2\u01cb\u01ce\3\2\2\2\u01cc\u01ca\3\2"+
		"\2\2\u01cc\u01cd\3\2\2\2\u01cdQ\3\2\2\2\u01ce\u01cc\3\2\2\2\u01cf\u01d0"+
		"\5v<\2\u01d0\u01d1\7\"\2\2\u01d1\u01d2\5x=\2\u01d2\u01d8\3\2\2\2\u01d3"+
		"\u01d4\5v<\2\u01d4\u01d5\t\2\2\2\u01d5\u01d6\5x=\2\u01d6\u01d8\3\2\2\2"+
		"\u01d7\u01cf\3\2\2\2\u01d7\u01d3\3\2\2\2\u01d8S\3\2\2\2\u01d9\u01da\5"+
		"v<\2\u01da\u01db\7\"\2\2\u01db\u01dc\5f\64\2\u01dc\u01e2\3\2\2\2\u01dd"+
		"\u01de\5v<\2\u01de\u01df\t\2\2\2\u01df\u01e0\5f\64\2\u01e0\u01e2\3\2\2"+
		"\2\u01e1\u01d9\3\2\2\2\u01e1\u01dd\3\2\2\2\u01e2U\3\2\2\2\u01e3\u01e4"+
		"\5v<\2\u01e4\u01e5\7\"\2\2\u01e5\u01e6\5j\66\2\u01e6\u01ec\3\2\2\2\u01e7"+
		"\u01e8\5v<\2\u01e8\u01e9\t\2\2\2\u01e9\u01ea\5j\66\2\u01ea\u01ec\3\2\2"+
		"\2\u01eb\u01e3\3\2\2\2\u01eb\u01e7\3\2\2\2\u01ecW\3\2\2\2\u01ed\u01ee"+
		"\5v<\2\u01ee\u01ef\7\"\2\2\u01ef\u01f0\5l\67\2\u01f0\u01f6\3\2\2\2\u01f1"+
		"\u01f2\5v<\2\u01f2\u01f3\t\2\2\2\u01f3\u01f4\5l\67\2\u01f4\u01f6\3\2\2"+
		"\2\u01f5\u01ed\3\2\2\2\u01f5\u01f1\3\2\2\2\u01f6Y\3\2\2\2\u01f7\u01f8"+
		"\5v<\2\u01f8\u01f9\7\"\2\2\u01f9\u01fa\5n8\2\u01fa\u0200\3\2\2\2\u01fb"+
		"\u01fc\5v<\2\u01fc\u01fd\7#\2\2\u01fd\u01fe\5n8\2\u01fe\u0200\3\2\2\2"+
		"\u01ff\u01f7\3\2\2\2\u01ff\u01fb\3\2\2\2\u0200[\3\2\2\2\u0201\u0202\5"+
		"v<\2\u0202\u0203\7\"\2\2\u0203\u0204\7\64\2\2\u0204\u0205\7\65\2\2\u0205"+
		"]\3\2\2\2\u0206\u0207\5d\63\2\u0207\u0208\7\"\2\2\u0208\u0209\5\64\33"+
		"\2\u0209_\3\2\2\2\u020a\u020b\7\64\2\2\u020b\u020c\5b\62\2\u020c\u020d"+
		"\7\65\2\2\u020da\3\2\2\2\u020e\u0211\b\62\1\2\u020f\u0212\5j\66\2\u0210"+
		"\u0212\5f\64\2\u0211\u020f\3\2\2\2\u0211\u0210\3\2\2\2\u0212\u021b\3\2"+
		"\2\2\u0213\u0214\f\3\2\2\u0214\u0217\7\4\2\2\u0215\u0218\5j\66\2\u0216"+
		"\u0218\5f\64\2\u0217\u0215\3\2\2\2\u0217\u0216\3\2\2\2\u0218\u021a\3\2"+
		"\2\2\u0219\u0213\3\2\2\2\u021a\u021d\3\2\2\2\u021b\u0219\3\2\2\2\u021b"+
		"\u021c\3\2\2\2\u021cc\3\2\2\2\u021d\u021b\3\2\2\2\u021e\u021f\5\u0086"+
		"D\2\u021f\u0222\7\64\2\2\u0220\u0223\5j\66\2\u0221\u0223\5f\64\2\u0222"+
		"\u0220\3\2\2\2\u0222\u0221\3\2\2\2\u0223\u0224\3\2\2\2\u0224\u0225\7\65"+
		"\2\2\u0225\u022f\3\2\2\2\u0226\u0227\5\u0088E\2\u0227\u022a\7\64\2\2\u0228"+
		"\u022b\5j\66\2\u0229\u022b\5f\64\2\u022a\u0228\3\2\2\2\u022a\u0229\3\2"+
		"\2\2\u022b\u022c\3\2\2\2\u022c\u022d\7\65\2\2\u022d\u022f\3\2\2\2\u022e"+
		"\u021e\3\2\2\2\u022e\u0226\3\2\2\2\u022fe\3\2\2\2\u0230\u0231\b\64\1\2"+
		"\u0231\u0232\5j\66\2\u0232\u0233\t\3\2\2\u0233\u0234\5f\64\17\u0234\u024b"+
		"\3\2\2\2\u0235\u0236\5l\67\2\u0236\u0237\t\3\2\2\u0237\u0238\5f\64\r\u0238"+
		"\u024b\3\2\2\2\u0239\u023a\5n8\2\u023a\u023b\7\30\2\2\u023b\u023c\5f\64"+
		"\n\u023c\u024b\3\2\2\2\u023d\u023e\5j\66\2\u023e\u023f\t\4\2\2\u023f\u0240"+
		"\5f\64\b\u0240\u024b\3\2\2\2\u0241\u0242\5l\67\2\u0242\u0243\t\4\2\2\u0243"+
		"\u0244\5f\64\6\u0244\u024b\3\2\2\2\u0245\u0246\7\62\2\2\u0246\u0247\5"+
		"f\64\2\u0247\u0248\7\63\2\2\u0248\u024b\3\2\2\2\u0249\u024b\5h\65\2\u024a"+
		"\u0230\3\2\2\2\u024a\u0235\3\2\2\2\u024a\u0239\3\2\2\2\u024a\u023d\3\2"+
		"\2\2\u024a\u0241\3\2\2\2\u024a\u0245\3\2\2\2\u024a\u0249\3\2\2\2\u024b"+
		"\u0263\3\2\2\2\u024c\u024d\f\f\2\2\u024d\u024e\t\3\2\2\u024e\u0262\5f"+
		"\64\r\u024f\u0250\f\5\2\2\u0250\u0251\t\4\2\2\u0251\u0262\5f\64\6\u0252"+
		"\u0253\f\20\2\2\u0253\u0254\t\3\2\2\u0254\u0262\5j\66\2\u0255\u0256\f"+
		"\16\2\2\u0256\u0257\t\3\2\2\u0257\u0262\5l\67\2\u0258\u0259\f\13\2\2\u0259"+
		"\u025a\7\30\2\2\u025a\u0262\5n8\2\u025b\u025c\f\t\2\2\u025c\u025d\t\4"+
		"\2\2\u025d\u0262\5j\66\2\u025e\u025f\f\7\2\2\u025f\u0260\t\4\2\2\u0260"+
		"\u0262\5l\67\2\u0261\u024c\3\2\2\2\u0261\u024f\3\2\2\2\u0261\u0252\3\2"+
		"\2\2\u0261\u0255\3\2\2\2\u0261\u0258\3\2\2\2\u0261\u025b\3\2\2\2\u0261"+
		"\u025e\3\2\2\2\u0262\u0265\3\2\2\2\u0263\u0261\3\2\2\2\u0263\u0264\3\2"+
		"\2\2\u0264g\3\2\2\2\u0265\u0263\3\2\2\2\u0266\u026a\5\u0086D\2\u0267\u026a"+
		"\5\62\32\2\u0268\u026a\5d\63\2\u0269\u0266\3\2\2\2\u0269\u0267\3\2\2\2"+
		"\u0269\u0268\3\2\2\2\u026ai\3\2\2\2\u026b\u026c\b\66\1\2\u026c\u026d\7"+
		"\62\2\2\u026d\u026e\5j\66\2\u026e\u026f\7\63\2\2\u026f\u0272\3\2\2\2\u0270"+
		"\u0272\5\u0080A\2\u0271\u026b\3\2\2\2\u0271\u0270\3\2\2\2\u0272\u027b"+
		"\3\2\2\2\u0273\u0274\f\6\2\2\u0274\u0275\t\3\2\2\u0275\u027a\5j\66\7\u0276"+
		"\u0277\f\5\2\2\u0277\u0278\t\4\2\2\u0278\u027a\5j\66\6\u0279\u0273\3\2"+
		"\2\2\u0279\u0276\3\2\2\2\u027a\u027d\3\2\2\2\u027b\u0279\3\2\2\2\u027b"+
		"\u027c\3\2\2\2\u027ck\3\2\2\2\u027d\u027b\3\2\2\2\u027e\u027f\b\67\1\2"+
		"\u027f\u0280\5j\66\2\u0280\u0281\t\3\2\2\u0281\u0282\5l\67\t\u0282\u028d"+
		"\3\2\2\2\u0283\u0284\5j\66\2\u0284\u0285\t\4\2\2\u0285\u0286\5l\67\6\u0286"+
		"\u028d\3\2\2\2\u0287\u0288\7\62\2\2\u0288\u0289\5l\67\2\u0289\u028a\7"+
		"\63\2\2\u028a\u028d\3\2\2\2\u028b\u028d\5~@\2\u028c\u027e\3\2\2\2\u028c"+
		"\u0283\3\2\2\2\u028c\u0287\3\2\2\2\u028c\u028b\3\2\2\2\u028d\u029c\3\2"+
		"\2\2\u028e\u028f\f\n\2\2\u028f\u0290\t\3\2\2\u0290\u029b\5l\67\13\u0291"+
		"\u0292\f\7\2\2\u0292\u0293\t\4\2\2\u0293\u029b\5l\67\b\u0294\u0295\f\b"+
		"\2\2\u0295\u0296\t\3\2\2\u0296\u029b\5j\66\2\u0297\u0298\f\5\2\2\u0298"+
		"\u0299\t\4\2\2\u0299\u029b\5j\66\2\u029a\u028e\3\2\2\2\u029a\u0291\3\2"+
		"\2\2\u029a\u0294\3\2\2\2\u029a\u0297\3\2\2\2\u029b\u029e\3\2\2\2\u029c"+
		"\u029a\3\2\2\2\u029c\u029d\3\2\2\2\u029dm\3\2\2\2\u029e\u029c\3\2\2\2"+
		"\u029f\u02a0\b8\1\2\u02a0\u02a1\5j\66\2\u02a1\u02a2\7\30\2\2\u02a2\u02a3"+
		"\5n8\5\u02a3\u02a6\3\2\2\2\u02a4\u02a6\5|?\2\u02a5\u029f\3\2\2\2\u02a5"+
		"\u02a4\3\2\2\2\u02a6\u02af\3\2\2\2\u02a7\u02a8\f\4\2\2\u02a8\u02a9\7\26"+
		"\2\2\u02a9\u02ae\5n8\5\u02aa\u02ab\f\6\2\2\u02ab\u02ac\7\30\2\2\u02ac"+
		"\u02ae\5j\66\2\u02ad\u02a7\3\2\2\2\u02ad\u02aa\3\2\2\2\u02ae\u02b1\3\2"+
		"\2\2\u02af\u02ad\3\2\2\2\u02af\u02b0\3\2\2\2\u02b0o\3\2\2\2\u02b1\u02af"+
		"\3\2\2\2\u02b2\u02b3\5r:\2\u02b3\u02b4\7)\2\2\u02b4\u02b5\5p9\2\u02b5"+
		"\u02c8\3\2\2\2\u02b6\u02b7\5r:\2\u02b7\u02b8\7/\2\2\u02b8\u02b9\5p9\2"+
		"\u02b9\u02c8\3\2\2\2\u02ba\u02bb\5r:\2\u02bb\u02bc\7*\2\2\u02bc\u02bd"+
		"\5p9\2\u02bd\u02c8\3\2\2\2\u02be\u02bf\5r:\2\u02bf\u02c0\7\60\2\2\u02c0"+
		"\u02c1\5p9\2\u02c1\u02c8\3\2\2\2\u02c2\u02c3\7\62\2\2\u02c3\u02c4\5p9"+
		"\2\u02c4\u02c5\7\63\2\2\u02c5\u02c8\3\2\2\2\u02c6\u02c8\5r:\2\u02c7\u02b2"+
		"\3\2\2\2\u02c7\u02b6\3\2\2\2\u02c7\u02ba\3\2\2\2\u02c7\u02be\3\2\2\2\u02c7"+
		"\u02c2\3\2\2\2\u02c7\u02c6\3\2\2\2\u02c8q\3\2\2\2\u02c9\u02ca\5t;\2\u02ca"+
		"\u02cb\t\5\2\2\u02cb\u02cc\5t;\2\u02cc\u02d2\3\2\2\2\u02cd\u02ce\5t;\2"+
		"\u02ce\u02cf\t\6\2\2\u02cf\u02d0\5t;\2\u02d0\u02d2\3\2\2\2\u02d1\u02c9"+
		"\3\2\2\2\u02d1\u02cd\3\2\2\2\u02d2s\3\2\2\2\u02d3\u02d7\5\64\33\2\u02d4"+
		"\u02d7\5d\63\2\u02d5\u02d7\5\u0086D\2\u02d6\u02d3\3\2\2\2\u02d6\u02d4"+
		"\3\2\2\2\u02d6\u02d5\3\2\2\2\u02d7u\3\2\2\2\u02d8\u02d9\5\u0086D\2\u02d9"+
		"w\3\2\2\2\u02da\u02db\b=\1\2\u02db\u02f5\5v<\2\u02dc\u02f5\5\\/\2\u02dd"+
		"\u02f5\5^\60\2\u02de\u02f5\5j\66\2\u02df\u02f5\5l\67\2\u02e0\u02f5\5n"+
		"8\2\u02e1\u02f5\5\n\6\2\u02e2\u02f5\5\b\5\2\u02e3\u02f5\5T+\2\u02e4\u02f5"+
		"\5Z.\2\u02e5\u02f5\5X-\2\u02e6\u02f5\5V,\2\u02e7\u02f5\5R*\2\u02e8\u02f5"+
		"\5&\24\2\u02e9\u02f5\5|?\2\u02ea\u02f5\5\u0082B\2\u02eb\u02f5\5~@\2\u02ec"+
		"\u02f5\5\u0080A\2\u02ed\u02f5\5\u0084C\2\u02ee\u02ef\t\7\2\2\u02ef\u02f5"+
		"\5x=\f\u02f0\u02f1\7\62\2\2\u02f1\u02f2\5x=\2\u02f2\u02f3\7\63\2\2\u02f3"+
		"\u02f5\3\2\2\2\u02f4\u02da\3\2\2\2\u02f4\u02dc\3\2\2\2\u02f4\u02dd\3\2"+
		"\2\2\u02f4\u02de\3\2\2\2\u02f4\u02df\3\2\2\2\u02f4\u02e0\3\2\2\2\u02f4"+
		"\u02e1\3\2\2\2\u02f4\u02e2\3\2\2\2\u02f4\u02e3\3\2\2\2\u02f4\u02e4\3\2"+
		"\2\2\u02f4\u02e5\3\2\2\2\u02f4\u02e6\3\2\2\2\u02f4\u02e7\3\2\2\2\u02f4"+
		"\u02e8\3\2\2\2\u02f4\u02e9\3\2\2\2\u02f4\u02ea\3\2\2\2\u02f4\u02eb\3\2"+
		"\2\2\u02f4\u02ec\3\2\2\2\u02f4\u02ed\3\2\2\2\u02f4\u02ee\3\2\2\2\u02f4"+
		"\u02f0\3\2\2\2\u02f5\u0313\3\2\2\2\u02f6\u02f7\f\r\2\2\u02f7\u02f8\7\33"+
		"\2\2\u02f8\u0312\5x=\16\u02f9\u02fa\f\13\2\2\u02fa\u02fb\t\3\2\2\u02fb"+
		"\u0312\5x=\f\u02fc\u02fd\f\n\2\2\u02fd\u02fe\t\4\2\2\u02fe\u0312\5x=\13"+
		"\u02ff\u0300\f\t\2\2\u0300\u0301\t\b\2\2\u0301\u0312\5x=\n\u0302\u0303"+
		"\f\b\2\2\u0303\u0304\7)\2\2\u0304\u0312\5x=\t\u0305\u0306\f\7\2\2\u0306"+
		"\u0307\t\t\2\2\u0307\u0312\5x=\b\u0308\u0309\f\6\2\2\u0309\u030a\t\5\2"+
		"\2\u030a\u0312\5x=\7\u030b\u030c\f\5\2\2\u030c\u030d\t\6\2\2\u030d\u0312"+
		"\5x=\6\u030e\u030f\f\4\2\2\u030f\u0310\t\n\2\2\u0310\u0312\5x=\5\u0311"+
		"\u02f6\3\2\2\2\u0311\u02f9\3\2\2\2\u0311\u02fc\3\2\2\2\u0311\u02ff\3\2"+
		"\2\2\u0311\u0302\3\2\2\2\u0311\u0305\3\2\2\2\u0311\u0308\3\2\2\2\u0311"+
		"\u030b\3\2\2\2\u0311\u030e\3\2\2\2\u0312\u0315\3\2\2\2\u0313\u0311\3\2"+
		"\2\2\u0313\u0314\3\2\2\2\u0314y\3\2\2\2\u0315\u0313\3\2\2\2\u0316\u0317"+
		"\7\22\2\2\u0317{\3\2\2\2\u0318\u0319\7\3\2\2\u0319}\3\2\2\2\u031a\u031b"+
		"\7;\2\2\u031b\177\3\2\2\2\u031c\u031d\7:\2\2\u031d\u0081\3\2\2\2\u031e"+
		"\u031f\t\13\2\2\u031f\u0083\3\2\2\2\u0320\u0321\7\66\2\2\u0321\u0085\3"+
		"\2\2\2\u0322\u0323\7<\2\2\u0323\u0087\3\2\2\2\u0324\u0325\7=\2\2\u0325"+
		"\u0089\3\2\2\2\u0326\u0327\7>\2\2\u0327\u008b\3\2\2\2\u0328\u0329\bG\1"+
		"\2\u0329\u032c\7\5\2\2\u032a\u032c\5\u0090I\2\u032b\u0328\3\2\2\2\u032b"+
		"\u032a\3\2\2\2\u032c\u0333\3\2\2\2\u032d\u032e\f\6\2\2\u032e\u0332\7\5"+
		"\2\2\u032f\u0330\f\5\2\2\u0330\u0332\5\u0090I\2\u0331\u032d\3\2\2\2\u0331"+
		"\u032f\3\2\2\2\u0332\u0335\3\2\2\2\u0333\u0331\3\2\2\2\u0333\u0334\3\2"+
		"\2\2\u0334\u008d\3\2\2\2\u0335\u0333\3\2\2\2\u0336\u0337\7\r\2\2\u0337"+
		"\u008f\3\2\2\2\u0338\u0339\7\6\2\2\u0339\u0091\3\2\2\2:\u009a\u00a2\u00af"+
		"\u00d6\u00da\u00e3\u00ed\u0101\u010d\u0112\u0118\u0120\u0129\u0140\u0158"+
		"\u0170\u018e\u0196\u01a0\u01af\u01bd\u01ca\u01cc\u01d7\u01e1\u01eb\u01f5"+
		"\u01ff\u0211\u0217\u021b\u0222\u022a\u022e\u024a\u0261\u0263\u0269\u0271"+
		"\u0279\u027b\u028c\u029a\u029c\u02a5\u02ad\u02af\u02c7\u02d1\u02d6\u02f4"+
		"\u0311\u0313\u032b\u0331\u0333";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}