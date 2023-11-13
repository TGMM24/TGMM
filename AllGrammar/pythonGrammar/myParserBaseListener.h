
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParserListener.h"


/**
 * This class provides an empty implementation of myParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myParserBaseListener : public myParserListener {
public:

  virtual void enterRoot(myParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(myParser::RootContext * /*ctx*/) override { }

  virtual void enterSingle_input(myParser::Single_inputContext * /*ctx*/) override { }
  virtual void exitSingle_input(myParser::Single_inputContext * /*ctx*/) override { }

  virtual void enterFile_input(myParser::File_inputContext * /*ctx*/) override { }
  virtual void exitFile_input(myParser::File_inputContext * /*ctx*/) override { }

  virtual void enterEval_input(myParser::Eval_inputContext * /*ctx*/) override { }
  virtual void exitEval_input(myParser::Eval_inputContext * /*ctx*/) override { }

  virtual void enterStmt(myParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(myParser::StmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(myParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(myParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(myParser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(myParser::While_stmtContext * /*ctx*/) override { }

  virtual void enterFor_stmt(myParser::For_stmtContext * /*ctx*/) override { }
  virtual void exitFor_stmt(myParser::For_stmtContext * /*ctx*/) override { }

  virtual void enterTry_stmt(myParser::Try_stmtContext * /*ctx*/) override { }
  virtual void exitTry_stmt(myParser::Try_stmtContext * /*ctx*/) override { }

  virtual void enterWith_stmt(myParser::With_stmtContext * /*ctx*/) override { }
  virtual void exitWith_stmt(myParser::With_stmtContext * /*ctx*/) override { }

  virtual void enterClass_or_func_def_stmt(myParser::Class_or_func_def_stmtContext * /*ctx*/) override { }
  virtual void exitClass_or_func_def_stmt(myParser::Class_or_func_def_stmtContext * /*ctx*/) override { }

  virtual void enterSuite(myParser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(myParser::SuiteContext * /*ctx*/) override { }

  virtual void enterDecorator(myParser::DecoratorContext * /*ctx*/) override { }
  virtual void exitDecorator(myParser::DecoratorContext * /*ctx*/) override { }

  virtual void enterElif_clause(myParser::Elif_clauseContext * /*ctx*/) override { }
  virtual void exitElif_clause(myParser::Elif_clauseContext * /*ctx*/) override { }

  virtual void enterElse_clause(myParser::Else_clauseContext * /*ctx*/) override { }
  virtual void exitElse_clause(myParser::Else_clauseContext * /*ctx*/) override { }

  virtual void enterFinally_clause(myParser::Finally_clauseContext * /*ctx*/) override { }
  virtual void exitFinally_clause(myParser::Finally_clauseContext * /*ctx*/) override { }

  virtual void enterWith_item(myParser::With_itemContext * /*ctx*/) override { }
  virtual void exitWith_item(myParser::With_itemContext * /*ctx*/) override { }

  virtual void enterExcept_clause(myParser::Except_clauseContext * /*ctx*/) override { }
  virtual void exitExcept_clause(myParser::Except_clauseContext * /*ctx*/) override { }

  virtual void enterClassdef(myParser::ClassdefContext * /*ctx*/) override { }
  virtual void exitClassdef(myParser::ClassdefContext * /*ctx*/) override { }

  virtual void enterFuncdef(myParser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(myParser::FuncdefContext * /*ctx*/) override { }

  virtual void enterTypedargslist(myParser::TypedargslistContext * /*ctx*/) override { }
  virtual void exitTypedargslist(myParser::TypedargslistContext * /*ctx*/) override { }

  virtual void enterArgs(myParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(myParser::ArgsContext * /*ctx*/) override { }

  virtual void enterKwargs(myParser::KwargsContext * /*ctx*/) override { }
  virtual void exitKwargs(myParser::KwargsContext * /*ctx*/) override { }

  virtual void enterDef_parameters(myParser::Def_parametersContext * /*ctx*/) override { }
  virtual void exitDef_parameters(myParser::Def_parametersContext * /*ctx*/) override { }

  virtual void enterDef_parameter(myParser::Def_parameterContext * /*ctx*/) override { }
  virtual void exitDef_parameter(myParser::Def_parameterContext * /*ctx*/) override { }

  virtual void enterNamed_parameter(myParser::Named_parameterContext * /*ctx*/) override { }
  virtual void exitNamed_parameter(myParser::Named_parameterContext * /*ctx*/) override { }

  virtual void enterSimple_stmt(myParser::Simple_stmtContext * /*ctx*/) override { }
  virtual void exitSimple_stmt(myParser::Simple_stmtContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(myParser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(myParser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterPrint_stmt(myParser::Print_stmtContext * /*ctx*/) override { }
  virtual void exitPrint_stmt(myParser::Print_stmtContext * /*ctx*/) override { }

  virtual void enterDel_stmt(myParser::Del_stmtContext * /*ctx*/) override { }
  virtual void exitDel_stmt(myParser::Del_stmtContext * /*ctx*/) override { }

  virtual void enterPass_stmt(myParser::Pass_stmtContext * /*ctx*/) override { }
  virtual void exitPass_stmt(myParser::Pass_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(myParser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(myParser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterContinue_stmt(myParser::Continue_stmtContext * /*ctx*/) override { }
  virtual void exitContinue_stmt(myParser::Continue_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(myParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(myParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterRaise_stmt(myParser::Raise_stmtContext * /*ctx*/) override { }
  virtual void exitRaise_stmt(myParser::Raise_stmtContext * /*ctx*/) override { }

  virtual void enterYield_stmt(myParser::Yield_stmtContext * /*ctx*/) override { }
  virtual void exitYield_stmt(myParser::Yield_stmtContext * /*ctx*/) override { }

  virtual void enterImport_stmt(myParser::Import_stmtContext * /*ctx*/) override { }
  virtual void exitImport_stmt(myParser::Import_stmtContext * /*ctx*/) override { }

  virtual void enterFrom_stmt(myParser::From_stmtContext * /*ctx*/) override { }
  virtual void exitFrom_stmt(myParser::From_stmtContext * /*ctx*/) override { }

  virtual void enterGlobal_stmt(myParser::Global_stmtContext * /*ctx*/) override { }
  virtual void exitGlobal_stmt(myParser::Global_stmtContext * /*ctx*/) override { }

  virtual void enterExec_stmt(myParser::Exec_stmtContext * /*ctx*/) override { }
  virtual void exitExec_stmt(myParser::Exec_stmtContext * /*ctx*/) override { }

  virtual void enterAssert_stmt(myParser::Assert_stmtContext * /*ctx*/) override { }
  virtual void exitAssert_stmt(myParser::Assert_stmtContext * /*ctx*/) override { }

  virtual void enterNonlocal_stmt(myParser::Nonlocal_stmtContext * /*ctx*/) override { }
  virtual void exitNonlocal_stmt(myParser::Nonlocal_stmtContext * /*ctx*/) override { }

  virtual void enterTestlist_star_expr(myParser::Testlist_star_exprContext * /*ctx*/) override { }
  virtual void exitTestlist_star_expr(myParser::Testlist_star_exprContext * /*ctx*/) override { }

  virtual void enterStar_expr(myParser::Star_exprContext * /*ctx*/) override { }
  virtual void exitStar_expr(myParser::Star_exprContext * /*ctx*/) override { }

  virtual void enterAssign_part(myParser::Assign_partContext * /*ctx*/) override { }
  virtual void exitAssign_part(myParser::Assign_partContext * /*ctx*/) override { }

  virtual void enterExprlist(myParser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(myParser::ExprlistContext * /*ctx*/) override { }

  virtual void enterImport_as_names(myParser::Import_as_namesContext * /*ctx*/) override { }
  virtual void exitImport_as_names(myParser::Import_as_namesContext * /*ctx*/) override { }

  virtual void enterImport_as_name(myParser::Import_as_nameContext * /*ctx*/) override { }
  virtual void exitImport_as_name(myParser::Import_as_nameContext * /*ctx*/) override { }

  virtual void enterDotted_as_names(myParser::Dotted_as_namesContext * /*ctx*/) override { }
  virtual void exitDotted_as_names(myParser::Dotted_as_namesContext * /*ctx*/) override { }

  virtual void enterDotted_as_name(myParser::Dotted_as_nameContext * /*ctx*/) override { }
  virtual void exitDotted_as_name(myParser::Dotted_as_nameContext * /*ctx*/) override { }

  virtual void enterTest(myParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(myParser::TestContext * /*ctx*/) override { }

  virtual void enterVarargslist(myParser::VarargslistContext * /*ctx*/) override { }
  virtual void exitVarargslist(myParser::VarargslistContext * /*ctx*/) override { }

  virtual void enterVardef_parameters(myParser::Vardef_parametersContext * /*ctx*/) override { }
  virtual void exitVardef_parameters(myParser::Vardef_parametersContext * /*ctx*/) override { }

  virtual void enterVardef_parameter(myParser::Vardef_parameterContext * /*ctx*/) override { }
  virtual void exitVardef_parameter(myParser::Vardef_parameterContext * /*ctx*/) override { }

  virtual void enterVarargs(myParser::VarargsContext * /*ctx*/) override { }
  virtual void exitVarargs(myParser::VarargsContext * /*ctx*/) override { }

  virtual void enterVarkwargs(myParser::VarkwargsContext * /*ctx*/) override { }
  virtual void exitVarkwargs(myParser::VarkwargsContext * /*ctx*/) override { }

  virtual void enterLogical_test(myParser::Logical_testContext * /*ctx*/) override { }
  virtual void exitLogical_test(myParser::Logical_testContext * /*ctx*/) override { }

  virtual void enterComparison(myParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(myParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterExpr(myParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(myParser::ExprContext * /*ctx*/) override { }

  virtual void enterAtom(myParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(myParser::AtomContext * /*ctx*/) override { }

  virtual void enterDictorsetmaker(myParser::DictorsetmakerContext * /*ctx*/) override { }
  virtual void exitDictorsetmaker(myParser::DictorsetmakerContext * /*ctx*/) override { }

  virtual void enterTestlist_comp(myParser::Testlist_compContext * /*ctx*/) override { }
  virtual void exitTestlist_comp(myParser::Testlist_compContext * /*ctx*/) override { }

  virtual void enterTestlist(myParser::TestlistContext * /*ctx*/) override { }
  virtual void exitTestlist(myParser::TestlistContext * /*ctx*/) override { }

  virtual void enterDotted_name(myParser::Dotted_nameContext * /*ctx*/) override { }
  virtual void exitDotted_name(myParser::Dotted_nameContext * /*ctx*/) override { }

  virtual void enterName(myParser::NameContext * /*ctx*/) override { }
  virtual void exitName(myParser::NameContext * /*ctx*/) override { }

  virtual void enterNumber(myParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(myParser::NumberContext * /*ctx*/) override { }

  virtual void enterInteger(myParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(myParser::IntegerContext * /*ctx*/) override { }

  virtual void enterYield_expr(myParser::Yield_exprContext * /*ctx*/) override { }
  virtual void exitYield_expr(myParser::Yield_exprContext * /*ctx*/) override { }

  virtual void enterYield_arg(myParser::Yield_argContext * /*ctx*/) override { }
  virtual void exitYield_arg(myParser::Yield_argContext * /*ctx*/) override { }

  virtual void enterTrailer(myParser::TrailerContext * /*ctx*/) override { }
  virtual void exitTrailer(myParser::TrailerContext * /*ctx*/) override { }

  virtual void enterArguments(myParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(myParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterArglist(myParser::ArglistContext * /*ctx*/) override { }
  virtual void exitArglist(myParser::ArglistContext * /*ctx*/) override { }

  virtual void enterArgument(myParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(myParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterSubscriptlist(myParser::SubscriptlistContext * /*ctx*/) override { }
  virtual void exitSubscriptlist(myParser::SubscriptlistContext * /*ctx*/) override { }

  virtual void enterSubscript(myParser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(myParser::SubscriptContext * /*ctx*/) override { }

  virtual void enterSliceop(myParser::SliceopContext * /*ctx*/) override { }
  virtual void exitSliceop(myParser::SliceopContext * /*ctx*/) override { }

  virtual void enterComp_for(myParser::Comp_forContext * /*ctx*/) override { }
  virtual void exitComp_for(myParser::Comp_forContext * /*ctx*/) override { }

  virtual void enterComp_iter(myParser::Comp_iterContext * /*ctx*/) override { }
  virtual void exitComp_iter(myParser::Comp_iterContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

