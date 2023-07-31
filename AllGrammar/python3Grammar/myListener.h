
// Generated from my.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSingle_input(myParser::Single_inputContext *ctx) = 0;
  virtual void exitSingle_input(myParser::Single_inputContext *ctx) = 0;

  virtual void enterFile_input(myParser::File_inputContext *ctx) = 0;
  virtual void exitFile_input(myParser::File_inputContext *ctx) = 0;

  virtual void enterEval_input(myParser::Eval_inputContext *ctx) = 0;
  virtual void exitEval_input(myParser::Eval_inputContext *ctx) = 0;

  virtual void enterDecorator(myParser::DecoratorContext *ctx) = 0;
  virtual void exitDecorator(myParser::DecoratorContext *ctx) = 0;

  virtual void enterDecorators(myParser::DecoratorsContext *ctx) = 0;
  virtual void exitDecorators(myParser::DecoratorsContext *ctx) = 0;

  virtual void enterDecorated(myParser::DecoratedContext *ctx) = 0;
  virtual void exitDecorated(myParser::DecoratedContext *ctx) = 0;

  virtual void enterAsync_funcdef(myParser::Async_funcdefContext *ctx) = 0;
  virtual void exitAsync_funcdef(myParser::Async_funcdefContext *ctx) = 0;

  virtual void enterFuncdef(myParser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(myParser::FuncdefContext *ctx) = 0;

  virtual void enterParameters(myParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(myParser::ParametersContext *ctx) = 0;

  virtual void enterTypedargslist(myParser::TypedargslistContext *ctx) = 0;
  virtual void exitTypedargslist(myParser::TypedargslistContext *ctx) = 0;

  virtual void enterTfpdef(myParser::TfpdefContext *ctx) = 0;
  virtual void exitTfpdef(myParser::TfpdefContext *ctx) = 0;

  virtual void enterVarargslist(myParser::VarargslistContext *ctx) = 0;
  virtual void exitVarargslist(myParser::VarargslistContext *ctx) = 0;

  virtual void enterVfpdef(myParser::VfpdefContext *ctx) = 0;
  virtual void exitVfpdef(myParser::VfpdefContext *ctx) = 0;

  virtual void enterStmt(myParser::StmtContext *ctx) = 0;
  virtual void exitStmt(myParser::StmtContext *ctx) = 0;

  virtual void enterSimple_stmt(myParser::Simple_stmtContext *ctx) = 0;
  virtual void exitSimple_stmt(myParser::Simple_stmtContext *ctx) = 0;

  virtual void enterSmall_stmt(myParser::Small_stmtContext *ctx) = 0;
  virtual void exitSmall_stmt(myParser::Small_stmtContext *ctx) = 0;

  virtual void enterExpr_stmt(myParser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(myParser::Expr_stmtContext *ctx) = 0;

  virtual void enterAnnassign(myParser::AnnassignContext *ctx) = 0;
  virtual void exitAnnassign(myParser::AnnassignContext *ctx) = 0;

  virtual void enterTestlist_star_expr(myParser::Testlist_star_exprContext *ctx) = 0;
  virtual void exitTestlist_star_expr(myParser::Testlist_star_exprContext *ctx) = 0;

  virtual void enterAugassign(myParser::AugassignContext *ctx) = 0;
  virtual void exitAugassign(myParser::AugassignContext *ctx) = 0;

  virtual void enterDel_stmt(myParser::Del_stmtContext *ctx) = 0;
  virtual void exitDel_stmt(myParser::Del_stmtContext *ctx) = 0;

  virtual void enterPass_stmt(myParser::Pass_stmtContext *ctx) = 0;
  virtual void exitPass_stmt(myParser::Pass_stmtContext *ctx) = 0;

  virtual void enterFlow_stmt(myParser::Flow_stmtContext *ctx) = 0;
  virtual void exitFlow_stmt(myParser::Flow_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(myParser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(myParser::Break_stmtContext *ctx) = 0;

  virtual void enterContinue_stmt(myParser::Continue_stmtContext *ctx) = 0;
  virtual void exitContinue_stmt(myParser::Continue_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(myParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(myParser::Return_stmtContext *ctx) = 0;

  virtual void enterYield_stmt(myParser::Yield_stmtContext *ctx) = 0;
  virtual void exitYield_stmt(myParser::Yield_stmtContext *ctx) = 0;

  virtual void enterRaise_stmt(myParser::Raise_stmtContext *ctx) = 0;
  virtual void exitRaise_stmt(myParser::Raise_stmtContext *ctx) = 0;

  virtual void enterImport_stmt(myParser::Import_stmtContext *ctx) = 0;
  virtual void exitImport_stmt(myParser::Import_stmtContext *ctx) = 0;

  virtual void enterImport_name(myParser::Import_nameContext *ctx) = 0;
  virtual void exitImport_name(myParser::Import_nameContext *ctx) = 0;

  virtual void enterImport_from(myParser::Import_fromContext *ctx) = 0;
  virtual void exitImport_from(myParser::Import_fromContext *ctx) = 0;

  virtual void enterImport_as_name(myParser::Import_as_nameContext *ctx) = 0;
  virtual void exitImport_as_name(myParser::Import_as_nameContext *ctx) = 0;

  virtual void enterDotted_as_name(myParser::Dotted_as_nameContext *ctx) = 0;
  virtual void exitDotted_as_name(myParser::Dotted_as_nameContext *ctx) = 0;

  virtual void enterImport_as_names(myParser::Import_as_namesContext *ctx) = 0;
  virtual void exitImport_as_names(myParser::Import_as_namesContext *ctx) = 0;

  virtual void enterDotted_as_names(myParser::Dotted_as_namesContext *ctx) = 0;
  virtual void exitDotted_as_names(myParser::Dotted_as_namesContext *ctx) = 0;

  virtual void enterDotted_name(myParser::Dotted_nameContext *ctx) = 0;
  virtual void exitDotted_name(myParser::Dotted_nameContext *ctx) = 0;

  virtual void enterGlobal_stmt(myParser::Global_stmtContext *ctx) = 0;
  virtual void exitGlobal_stmt(myParser::Global_stmtContext *ctx) = 0;

  virtual void enterNonlocal_stmt(myParser::Nonlocal_stmtContext *ctx) = 0;
  virtual void exitNonlocal_stmt(myParser::Nonlocal_stmtContext *ctx) = 0;

  virtual void enterAssert_stmt(myParser::Assert_stmtContext *ctx) = 0;
  virtual void exitAssert_stmt(myParser::Assert_stmtContext *ctx) = 0;

  virtual void enterCompound_stmt(myParser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(myParser::Compound_stmtContext *ctx) = 0;

  virtual void enterAsync_stmt(myParser::Async_stmtContext *ctx) = 0;
  virtual void exitAsync_stmt(myParser::Async_stmtContext *ctx) = 0;

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

  virtual void enterWith_item(myParser::With_itemContext *ctx) = 0;
  virtual void exitWith_item(myParser::With_itemContext *ctx) = 0;

  virtual void enterExcept_clause(myParser::Except_clauseContext *ctx) = 0;
  virtual void exitExcept_clause(myParser::Except_clauseContext *ctx) = 0;

  virtual void enterSuite(myParser::SuiteContext *ctx) = 0;
  virtual void exitSuite(myParser::SuiteContext *ctx) = 0;

  virtual void enterTest(myParser::TestContext *ctx) = 0;
  virtual void exitTest(myParser::TestContext *ctx) = 0;

  virtual void enterTest_nocond(myParser::Test_nocondContext *ctx) = 0;
  virtual void exitTest_nocond(myParser::Test_nocondContext *ctx) = 0;

  virtual void enterLambdef(myParser::LambdefContext *ctx) = 0;
  virtual void exitLambdef(myParser::LambdefContext *ctx) = 0;

  virtual void enterLambdef_nocond(myParser::Lambdef_nocondContext *ctx) = 0;
  virtual void exitLambdef_nocond(myParser::Lambdef_nocondContext *ctx) = 0;

  virtual void enterOr_test(myParser::Or_testContext *ctx) = 0;
  virtual void exitOr_test(myParser::Or_testContext *ctx) = 0;

  virtual void enterAnd_test(myParser::And_testContext *ctx) = 0;
  virtual void exitAnd_test(myParser::And_testContext *ctx) = 0;

  virtual void enterNot_test(myParser::Not_testContext *ctx) = 0;
  virtual void exitNot_test(myParser::Not_testContext *ctx) = 0;

  virtual void enterComparison(myParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(myParser::ComparisonContext *ctx) = 0;

  virtual void enterComp_op(myParser::Comp_opContext *ctx) = 0;
  virtual void exitComp_op(myParser::Comp_opContext *ctx) = 0;

  virtual void enterStar_expr(myParser::Star_exprContext *ctx) = 0;
  virtual void exitStar_expr(myParser::Star_exprContext *ctx) = 0;

  virtual void enterExpr(myParser::ExprContext *ctx) = 0;
  virtual void exitExpr(myParser::ExprContext *ctx) = 0;

  virtual void enterXor_expr(myParser::Xor_exprContext *ctx) = 0;
  virtual void exitXor_expr(myParser::Xor_exprContext *ctx) = 0;

  virtual void enterAnd_expr(myParser::And_exprContext *ctx) = 0;
  virtual void exitAnd_expr(myParser::And_exprContext *ctx) = 0;

  virtual void enterShift_expr(myParser::Shift_exprContext *ctx) = 0;
  virtual void exitShift_expr(myParser::Shift_exprContext *ctx) = 0;

  virtual void enterArith_expr(myParser::Arith_exprContext *ctx) = 0;
  virtual void exitArith_expr(myParser::Arith_exprContext *ctx) = 0;

  virtual void enterTerm(myParser::TermContext *ctx) = 0;
  virtual void exitTerm(myParser::TermContext *ctx) = 0;

  virtual void enterFactor(myParser::FactorContext *ctx) = 0;
  virtual void exitFactor(myParser::FactorContext *ctx) = 0;

  virtual void enterPower(myParser::PowerContext *ctx) = 0;
  virtual void exitPower(myParser::PowerContext *ctx) = 0;

  virtual void enterAtom_expr(myParser::Atom_exprContext *ctx) = 0;
  virtual void exitAtom_expr(myParser::Atom_exprContext *ctx) = 0;

  virtual void enterAtom(myParser::AtomContext *ctx) = 0;
  virtual void exitAtom(myParser::AtomContext *ctx) = 0;

  virtual void enterTestlist_comp(myParser::Testlist_compContext *ctx) = 0;
  virtual void exitTestlist_comp(myParser::Testlist_compContext *ctx) = 0;

  virtual void enterTrailer(myParser::TrailerContext *ctx) = 0;
  virtual void exitTrailer(myParser::TrailerContext *ctx) = 0;

  virtual void enterSubscriptlist(myParser::SubscriptlistContext *ctx) = 0;
  virtual void exitSubscriptlist(myParser::SubscriptlistContext *ctx) = 0;

  virtual void enterSubscript(myParser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(myParser::SubscriptContext *ctx) = 0;

  virtual void enterSliceop(myParser::SliceopContext *ctx) = 0;
  virtual void exitSliceop(myParser::SliceopContext *ctx) = 0;

  virtual void enterExprlist(myParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(myParser::ExprlistContext *ctx) = 0;

  virtual void enterTestlist(myParser::TestlistContext *ctx) = 0;
  virtual void exitTestlist(myParser::TestlistContext *ctx) = 0;

  virtual void enterDictorsetmaker(myParser::DictorsetmakerContext *ctx) = 0;
  virtual void exitDictorsetmaker(myParser::DictorsetmakerContext *ctx) = 0;

  virtual void enterClassdef(myParser::ClassdefContext *ctx) = 0;
  virtual void exitClassdef(myParser::ClassdefContext *ctx) = 0;

  virtual void enterArglist(myParser::ArglistContext *ctx) = 0;
  virtual void exitArglist(myParser::ArglistContext *ctx) = 0;

  virtual void enterArgument(myParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(myParser::ArgumentContext *ctx) = 0;

  virtual void enterComp_iter(myParser::Comp_iterContext *ctx) = 0;
  virtual void exitComp_iter(myParser::Comp_iterContext *ctx) = 0;

  virtual void enterComp_for(myParser::Comp_forContext *ctx) = 0;
  virtual void exitComp_for(myParser::Comp_forContext *ctx) = 0;

  virtual void enterComp_if(myParser::Comp_ifContext *ctx) = 0;
  virtual void exitComp_if(myParser::Comp_ifContext *ctx) = 0;

  virtual void enterEncoding_decl(myParser::Encoding_declContext *ctx) = 0;
  virtual void exitEncoding_decl(myParser::Encoding_declContext *ctx) = 0;

  virtual void enterYield_expr(myParser::Yield_exprContext *ctx) = 0;
  virtual void exitYield_expr(myParser::Yield_exprContext *ctx) = 0;

  virtual void enterYield_arg(myParser::Yield_argContext *ctx) = 0;
  virtual void exitYield_arg(myParser::Yield_argContext *ctx) = 0;


};

