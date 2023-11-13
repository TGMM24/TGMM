
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(myParser::RootContext *ctx) = 0;
  virtual void exitRoot(myParser::RootContext *ctx) = 0;

  virtual void enterSingle_input(myParser::Single_inputContext *ctx) = 0;
  virtual void exitSingle_input(myParser::Single_inputContext *ctx) = 0;

  virtual void enterFile_input(myParser::File_inputContext *ctx) = 0;
  virtual void exitFile_input(myParser::File_inputContext *ctx) = 0;

  virtual void enterEval_input(myParser::Eval_inputContext *ctx) = 0;
  virtual void exitEval_input(myParser::Eval_inputContext *ctx) = 0;

  virtual void enterStmt(myParser::StmtContext *ctx) = 0;
  virtual void exitStmt(myParser::StmtContext *ctx) = 0;

  virtual void enterIf_stmt(myParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(myParser::If_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(myParser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(myParser::While_stmtContext *ctx) = 0;

  virtual void enterFor_stmt(myParser::For_stmtContext *ctx) = 0;
  virtual void exitFor_stmt(myParser::For_stmtContext *ctx) = 0;

  virtual void enterTry_stmt(myParser::Try_stmtContext *ctx) = 0;
  virtual void exitTry_stmt(myParser::Try_stmtContext *ctx) = 0;

  virtual void enterWith_stmt(myParser::With_stmtContext *ctx) = 0;
  virtual void exitWith_stmt(myParser::With_stmtContext *ctx) = 0;

  virtual void enterClass_or_func_def_stmt(myParser::Class_or_func_def_stmtContext *ctx) = 0;
  virtual void exitClass_or_func_def_stmt(myParser::Class_or_func_def_stmtContext *ctx) = 0;

  virtual void enterSuite(myParser::SuiteContext *ctx) = 0;
  virtual void exitSuite(myParser::SuiteContext *ctx) = 0;

  virtual void enterDecorator(myParser::DecoratorContext *ctx) = 0;
  virtual void exitDecorator(myParser::DecoratorContext *ctx) = 0;

  virtual void enterElif_clause(myParser::Elif_clauseContext *ctx) = 0;
  virtual void exitElif_clause(myParser::Elif_clauseContext *ctx) = 0;

  virtual void enterElse_clause(myParser::Else_clauseContext *ctx) = 0;
  virtual void exitElse_clause(myParser::Else_clauseContext *ctx) = 0;

  virtual void enterFinally_clause(myParser::Finally_clauseContext *ctx) = 0;
  virtual void exitFinally_clause(myParser::Finally_clauseContext *ctx) = 0;

  virtual void enterWith_item(myParser::With_itemContext *ctx) = 0;
  virtual void exitWith_item(myParser::With_itemContext *ctx) = 0;

  virtual void enterExcept_clause(myParser::Except_clauseContext *ctx) = 0;
  virtual void exitExcept_clause(myParser::Except_clauseContext *ctx) = 0;

  virtual void enterClassdef(myParser::ClassdefContext *ctx) = 0;
  virtual void exitClassdef(myParser::ClassdefContext *ctx) = 0;

  virtual void enterFuncdef(myParser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(myParser::FuncdefContext *ctx) = 0;

  virtual void enterTypedargslist(myParser::TypedargslistContext *ctx) = 0;
  virtual void exitTypedargslist(myParser::TypedargslistContext *ctx) = 0;

  virtual void enterArgs(myParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(myParser::ArgsContext *ctx) = 0;

  virtual void enterKwargs(myParser::KwargsContext *ctx) = 0;
  virtual void exitKwargs(myParser::KwargsContext *ctx) = 0;

  virtual void enterDef_parameters(myParser::Def_parametersContext *ctx) = 0;
  virtual void exitDef_parameters(myParser::Def_parametersContext *ctx) = 0;

  virtual void enterDef_parameter(myParser::Def_parameterContext *ctx) = 0;
  virtual void exitDef_parameter(myParser::Def_parameterContext *ctx) = 0;

  virtual void enterNamed_parameter(myParser::Named_parameterContext *ctx) = 0;
  virtual void exitNamed_parameter(myParser::Named_parameterContext *ctx) = 0;

  virtual void enterSimple_stmt(myParser::Simple_stmtContext *ctx) = 0;
  virtual void exitSimple_stmt(myParser::Simple_stmtContext *ctx) = 0;

  virtual void enterExpr_stmt(myParser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(myParser::Expr_stmtContext *ctx) = 0;

  virtual void enterPrint_stmt(myParser::Print_stmtContext *ctx) = 0;
  virtual void exitPrint_stmt(myParser::Print_stmtContext *ctx) = 0;

  virtual void enterDel_stmt(myParser::Del_stmtContext *ctx) = 0;
  virtual void exitDel_stmt(myParser::Del_stmtContext *ctx) = 0;

  virtual void enterPass_stmt(myParser::Pass_stmtContext *ctx) = 0;
  virtual void exitPass_stmt(myParser::Pass_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(myParser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(myParser::Break_stmtContext *ctx) = 0;

  virtual void enterContinue_stmt(myParser::Continue_stmtContext *ctx) = 0;
  virtual void exitContinue_stmt(myParser::Continue_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(myParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(myParser::Return_stmtContext *ctx) = 0;

  virtual void enterRaise_stmt(myParser::Raise_stmtContext *ctx) = 0;
  virtual void exitRaise_stmt(myParser::Raise_stmtContext *ctx) = 0;

  virtual void enterYield_stmt(myParser::Yield_stmtContext *ctx) = 0;
  virtual void exitYield_stmt(myParser::Yield_stmtContext *ctx) = 0;

  virtual void enterImport_stmt(myParser::Import_stmtContext *ctx) = 0;
  virtual void exitImport_stmt(myParser::Import_stmtContext *ctx) = 0;

  virtual void enterFrom_stmt(myParser::From_stmtContext *ctx) = 0;
  virtual void exitFrom_stmt(myParser::From_stmtContext *ctx) = 0;

  virtual void enterGlobal_stmt(myParser::Global_stmtContext *ctx) = 0;
  virtual void exitGlobal_stmt(myParser::Global_stmtContext *ctx) = 0;

  virtual void enterExec_stmt(myParser::Exec_stmtContext *ctx) = 0;
  virtual void exitExec_stmt(myParser::Exec_stmtContext *ctx) = 0;

  virtual void enterAssert_stmt(myParser::Assert_stmtContext *ctx) = 0;
  virtual void exitAssert_stmt(myParser::Assert_stmtContext *ctx) = 0;

  virtual void enterNonlocal_stmt(myParser::Nonlocal_stmtContext *ctx) = 0;
  virtual void exitNonlocal_stmt(myParser::Nonlocal_stmtContext *ctx) = 0;

  virtual void enterTestlist_star_expr(myParser::Testlist_star_exprContext *ctx) = 0;
  virtual void exitTestlist_star_expr(myParser::Testlist_star_exprContext *ctx) = 0;

  virtual void enterStar_expr(myParser::Star_exprContext *ctx) = 0;
  virtual void exitStar_expr(myParser::Star_exprContext *ctx) = 0;

  virtual void enterAssign_part(myParser::Assign_partContext *ctx) = 0;
  virtual void exitAssign_part(myParser::Assign_partContext *ctx) = 0;

  virtual void enterExprlist(myParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(myParser::ExprlistContext *ctx) = 0;

  virtual void enterImport_as_names(myParser::Import_as_namesContext *ctx) = 0;
  virtual void exitImport_as_names(myParser::Import_as_namesContext *ctx) = 0;

  virtual void enterImport_as_name(myParser::Import_as_nameContext *ctx) = 0;
  virtual void exitImport_as_name(myParser::Import_as_nameContext *ctx) = 0;

  virtual void enterDotted_as_names(myParser::Dotted_as_namesContext *ctx) = 0;
  virtual void exitDotted_as_names(myParser::Dotted_as_namesContext *ctx) = 0;

  virtual void enterDotted_as_name(myParser::Dotted_as_nameContext *ctx) = 0;
  virtual void exitDotted_as_name(myParser::Dotted_as_nameContext *ctx) = 0;

  virtual void enterTest(myParser::TestContext *ctx) = 0;
  virtual void exitTest(myParser::TestContext *ctx) = 0;

  virtual void enterVarargslist(myParser::VarargslistContext *ctx) = 0;
  virtual void exitVarargslist(myParser::VarargslistContext *ctx) = 0;

  virtual void enterVardef_parameters(myParser::Vardef_parametersContext *ctx) = 0;
  virtual void exitVardef_parameters(myParser::Vardef_parametersContext *ctx) = 0;

  virtual void enterVardef_parameter(myParser::Vardef_parameterContext *ctx) = 0;
  virtual void exitVardef_parameter(myParser::Vardef_parameterContext *ctx) = 0;

  virtual void enterVarargs(myParser::VarargsContext *ctx) = 0;
  virtual void exitVarargs(myParser::VarargsContext *ctx) = 0;

  virtual void enterVarkwargs(myParser::VarkwargsContext *ctx) = 0;
  virtual void exitVarkwargs(myParser::VarkwargsContext *ctx) = 0;

  virtual void enterLogical_test(myParser::Logical_testContext *ctx) = 0;
  virtual void exitLogical_test(myParser::Logical_testContext *ctx) = 0;

  virtual void enterComparison(myParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(myParser::ComparisonContext *ctx) = 0;

  virtual void enterExpr(myParser::ExprContext *ctx) = 0;
  virtual void exitExpr(myParser::ExprContext *ctx) = 0;

  virtual void enterAtom(myParser::AtomContext *ctx) = 0;
  virtual void exitAtom(myParser::AtomContext *ctx) = 0;

  virtual void enterDictorsetmaker(myParser::DictorsetmakerContext *ctx) = 0;
  virtual void exitDictorsetmaker(myParser::DictorsetmakerContext *ctx) = 0;

  virtual void enterTestlist_comp(myParser::Testlist_compContext *ctx) = 0;
  virtual void exitTestlist_comp(myParser::Testlist_compContext *ctx) = 0;

  virtual void enterTestlist(myParser::TestlistContext *ctx) = 0;
  virtual void exitTestlist(myParser::TestlistContext *ctx) = 0;

  virtual void enterDotted_name(myParser::Dotted_nameContext *ctx) = 0;
  virtual void exitDotted_name(myParser::Dotted_nameContext *ctx) = 0;

  virtual void enterName(myParser::NameContext *ctx) = 0;
  virtual void exitName(myParser::NameContext *ctx) = 0;

  virtual void enterNumber(myParser::NumberContext *ctx) = 0;
  virtual void exitNumber(myParser::NumberContext *ctx) = 0;

  virtual void enterInteger(myParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(myParser::IntegerContext *ctx) = 0;

  virtual void enterYield_expr(myParser::Yield_exprContext *ctx) = 0;
  virtual void exitYield_expr(myParser::Yield_exprContext *ctx) = 0;

  virtual void enterYield_arg(myParser::Yield_argContext *ctx) = 0;
  virtual void exitYield_arg(myParser::Yield_argContext *ctx) = 0;

  virtual void enterTrailer(myParser::TrailerContext *ctx) = 0;
  virtual void exitTrailer(myParser::TrailerContext *ctx) = 0;

  virtual void enterArguments(myParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(myParser::ArgumentsContext *ctx) = 0;

  virtual void enterArglist(myParser::ArglistContext *ctx) = 0;
  virtual void exitArglist(myParser::ArglistContext *ctx) = 0;

  virtual void enterArgument(myParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(myParser::ArgumentContext *ctx) = 0;

  virtual void enterSubscriptlist(myParser::SubscriptlistContext *ctx) = 0;
  virtual void exitSubscriptlist(myParser::SubscriptlistContext *ctx) = 0;

  virtual void enterSubscript(myParser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(myParser::SubscriptContext *ctx) = 0;

  virtual void enterSliceop(myParser::SliceopContext *ctx) = 0;
  virtual void exitSliceop(myParser::SliceopContext *ctx) = 0;

  virtual void enterComp_for(myParser::Comp_forContext *ctx) = 0;
  virtual void exitComp_for(myParser::Comp_forContext *ctx) = 0;

  virtual void enterComp_iter(myParser::Comp_iterContext *ctx) = 0;
  virtual void exitComp_iter(myParser::Comp_iterContext *ctx) = 0;


};

