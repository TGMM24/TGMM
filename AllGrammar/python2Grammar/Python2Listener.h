
// Generated from Python2.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "Python2Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Python2Parser.
 */
class  Python2Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSingle_input(Python2Parser::Single_inputContext *ctx) = 0;
  virtual void exitSingle_input(Python2Parser::Single_inputContext *ctx) = 0;

  virtual void enterFile_input(Python2Parser::File_inputContext *ctx) = 0;
  virtual void exitFile_input(Python2Parser::File_inputContext *ctx) = 0;

  virtual void enterEval_input(Python2Parser::Eval_inputContext *ctx) = 0;
  virtual void exitEval_input(Python2Parser::Eval_inputContext *ctx) = 0;

  virtual void enterDecorator(Python2Parser::DecoratorContext *ctx) = 0;
  virtual void exitDecorator(Python2Parser::DecoratorContext *ctx) = 0;

  virtual void enterDecorators(Python2Parser::DecoratorsContext *ctx) = 0;
  virtual void exitDecorators(Python2Parser::DecoratorsContext *ctx) = 0;

  virtual void enterDecorated(Python2Parser::DecoratedContext *ctx) = 0;
  virtual void exitDecorated(Python2Parser::DecoratedContext *ctx) = 0;

  virtual void enterFuncdef(Python2Parser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(Python2Parser::FuncdefContext *ctx) = 0;

  virtual void enterParameters(Python2Parser::ParametersContext *ctx) = 0;
  virtual void exitParameters(Python2Parser::ParametersContext *ctx) = 0;

  virtual void enterVarargslist(Python2Parser::VarargslistContext *ctx) = 0;
  virtual void exitVarargslist(Python2Parser::VarargslistContext *ctx) = 0;

  virtual void enterFpdef(Python2Parser::FpdefContext *ctx) = 0;
  virtual void exitFpdef(Python2Parser::FpdefContext *ctx) = 0;

  virtual void enterFplist(Python2Parser::FplistContext *ctx) = 0;
  virtual void exitFplist(Python2Parser::FplistContext *ctx) = 0;

  virtual void enterStmt(Python2Parser::StmtContext *ctx) = 0;
  virtual void exitStmt(Python2Parser::StmtContext *ctx) = 0;

  virtual void enterSimple_stmt(Python2Parser::Simple_stmtContext *ctx) = 0;
  virtual void exitSimple_stmt(Python2Parser::Simple_stmtContext *ctx) = 0;

  virtual void enterSmall_stmt(Python2Parser::Small_stmtContext *ctx) = 0;
  virtual void exitSmall_stmt(Python2Parser::Small_stmtContext *ctx) = 0;

  virtual void enterExpr_stmt(Python2Parser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(Python2Parser::Expr_stmtContext *ctx) = 0;

  virtual void enterAugassign(Python2Parser::AugassignContext *ctx) = 0;
  virtual void exitAugassign(Python2Parser::AugassignContext *ctx) = 0;

  virtual void enterPrint_stmt(Python2Parser::Print_stmtContext *ctx) = 0;
  virtual void exitPrint_stmt(Python2Parser::Print_stmtContext *ctx) = 0;

  virtual void enterDel_stmt(Python2Parser::Del_stmtContext *ctx) = 0;
  virtual void exitDel_stmt(Python2Parser::Del_stmtContext *ctx) = 0;

  virtual void enterPass_stmt(Python2Parser::Pass_stmtContext *ctx) = 0;
  virtual void exitPass_stmt(Python2Parser::Pass_stmtContext *ctx) = 0;

  virtual void enterFlow_stmt(Python2Parser::Flow_stmtContext *ctx) = 0;
  virtual void exitFlow_stmt(Python2Parser::Flow_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(Python2Parser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(Python2Parser::Break_stmtContext *ctx) = 0;

  virtual void enterContinue_stmt(Python2Parser::Continue_stmtContext *ctx) = 0;
  virtual void exitContinue_stmt(Python2Parser::Continue_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(Python2Parser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(Python2Parser::Return_stmtContext *ctx) = 0;

  virtual void enterYield_stmt(Python2Parser::Yield_stmtContext *ctx) = 0;
  virtual void exitYield_stmt(Python2Parser::Yield_stmtContext *ctx) = 0;

  virtual void enterRaise_stmt(Python2Parser::Raise_stmtContext *ctx) = 0;
  virtual void exitRaise_stmt(Python2Parser::Raise_stmtContext *ctx) = 0;

  virtual void enterImport_stmt(Python2Parser::Import_stmtContext *ctx) = 0;
  virtual void exitImport_stmt(Python2Parser::Import_stmtContext *ctx) = 0;

  virtual void enterImport_name(Python2Parser::Import_nameContext *ctx) = 0;
  virtual void exitImport_name(Python2Parser::Import_nameContext *ctx) = 0;

  virtual void enterImport_from(Python2Parser::Import_fromContext *ctx) = 0;
  virtual void exitImport_from(Python2Parser::Import_fromContext *ctx) = 0;

  virtual void enterImport_as_name(Python2Parser::Import_as_nameContext *ctx) = 0;
  virtual void exitImport_as_name(Python2Parser::Import_as_nameContext *ctx) = 0;

  virtual void enterDotted_as_name(Python2Parser::Dotted_as_nameContext *ctx) = 0;
  virtual void exitDotted_as_name(Python2Parser::Dotted_as_nameContext *ctx) = 0;

  virtual void enterImport_as_names(Python2Parser::Import_as_namesContext *ctx) = 0;
  virtual void exitImport_as_names(Python2Parser::Import_as_namesContext *ctx) = 0;

  virtual void enterDotted_as_names(Python2Parser::Dotted_as_namesContext *ctx) = 0;
  virtual void exitDotted_as_names(Python2Parser::Dotted_as_namesContext *ctx) = 0;

  virtual void enterDotted_name(Python2Parser::Dotted_nameContext *ctx) = 0;
  virtual void exitDotted_name(Python2Parser::Dotted_nameContext *ctx) = 0;

  virtual void enterGlobal_stmt(Python2Parser::Global_stmtContext *ctx) = 0;
  virtual void exitGlobal_stmt(Python2Parser::Global_stmtContext *ctx) = 0;

  virtual void enterExec_stmt(Python2Parser::Exec_stmtContext *ctx) = 0;
  virtual void exitExec_stmt(Python2Parser::Exec_stmtContext *ctx) = 0;

  virtual void enterAssert_stmt(Python2Parser::Assert_stmtContext *ctx) = 0;
  virtual void exitAssert_stmt(Python2Parser::Assert_stmtContext *ctx) = 0;

  virtual void enterCompound_stmt(Python2Parser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(Python2Parser::Compound_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(Python2Parser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(Python2Parser::If_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(Python2Parser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(Python2Parser::While_stmtContext *ctx) = 0;

  virtual void enterFor_stmt(Python2Parser::For_stmtContext *ctx) = 0;
  virtual void exitFor_stmt(Python2Parser::For_stmtContext *ctx) = 0;

  virtual void enterTry_stmt(Python2Parser::Try_stmtContext *ctx) = 0;
  virtual void exitTry_stmt(Python2Parser::Try_stmtContext *ctx) = 0;

  virtual void enterWith_stmt(Python2Parser::With_stmtContext *ctx) = 0;
  virtual void exitWith_stmt(Python2Parser::With_stmtContext *ctx) = 0;

  virtual void enterWith_item(Python2Parser::With_itemContext *ctx) = 0;
  virtual void exitWith_item(Python2Parser::With_itemContext *ctx) = 0;

  virtual void enterExcept_clause(Python2Parser::Except_clauseContext *ctx) = 0;
  virtual void exitExcept_clause(Python2Parser::Except_clauseContext *ctx) = 0;

  virtual void enterSuite(Python2Parser::SuiteContext *ctx) = 0;
  virtual void exitSuite(Python2Parser::SuiteContext *ctx) = 0;

  virtual void enterTestlist_safe(Python2Parser::Testlist_safeContext *ctx) = 0;
  virtual void exitTestlist_safe(Python2Parser::Testlist_safeContext *ctx) = 0;

  virtual void enterOld_test(Python2Parser::Old_testContext *ctx) = 0;
  virtual void exitOld_test(Python2Parser::Old_testContext *ctx) = 0;

  virtual void enterOld_lambdef(Python2Parser::Old_lambdefContext *ctx) = 0;
  virtual void exitOld_lambdef(Python2Parser::Old_lambdefContext *ctx) = 0;

  virtual void enterTest(Python2Parser::TestContext *ctx) = 0;
  virtual void exitTest(Python2Parser::TestContext *ctx) = 0;

  virtual void enterOr_test(Python2Parser::Or_testContext *ctx) = 0;
  virtual void exitOr_test(Python2Parser::Or_testContext *ctx) = 0;

  virtual void enterAnd_test(Python2Parser::And_testContext *ctx) = 0;
  virtual void exitAnd_test(Python2Parser::And_testContext *ctx) = 0;

  virtual void enterNot_test(Python2Parser::Not_testContext *ctx) = 0;
  virtual void exitNot_test(Python2Parser::Not_testContext *ctx) = 0;

  virtual void enterComparison(Python2Parser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(Python2Parser::ComparisonContext *ctx) = 0;

  virtual void enterComp_op(Python2Parser::Comp_opContext *ctx) = 0;
  virtual void exitComp_op(Python2Parser::Comp_opContext *ctx) = 0;

  virtual void enterExpr(Python2Parser::ExprContext *ctx) = 0;
  virtual void exitExpr(Python2Parser::ExprContext *ctx) = 0;

  virtual void enterXor_expr(Python2Parser::Xor_exprContext *ctx) = 0;
  virtual void exitXor_expr(Python2Parser::Xor_exprContext *ctx) = 0;

  virtual void enterAnd_expr(Python2Parser::And_exprContext *ctx) = 0;
  virtual void exitAnd_expr(Python2Parser::And_exprContext *ctx) = 0;

  virtual void enterShift_expr(Python2Parser::Shift_exprContext *ctx) = 0;
  virtual void exitShift_expr(Python2Parser::Shift_exprContext *ctx) = 0;

  virtual void enterArith_expr(Python2Parser::Arith_exprContext *ctx) = 0;
  virtual void exitArith_expr(Python2Parser::Arith_exprContext *ctx) = 0;

  virtual void enterTerm(Python2Parser::TermContext *ctx) = 0;
  virtual void exitTerm(Python2Parser::TermContext *ctx) = 0;

  virtual void enterFactor(Python2Parser::FactorContext *ctx) = 0;
  virtual void exitFactor(Python2Parser::FactorContext *ctx) = 0;

  virtual void enterPower(Python2Parser::PowerContext *ctx) = 0;
  virtual void exitPower(Python2Parser::PowerContext *ctx) = 0;

  virtual void enterAtom(Python2Parser::AtomContext *ctx) = 0;
  virtual void exitAtom(Python2Parser::AtomContext *ctx) = 0;

  virtual void enterListmaker(Python2Parser::ListmakerContext *ctx) = 0;
  virtual void exitListmaker(Python2Parser::ListmakerContext *ctx) = 0;

  virtual void enterTestlist_comp(Python2Parser::Testlist_compContext *ctx) = 0;
  virtual void exitTestlist_comp(Python2Parser::Testlist_compContext *ctx) = 0;

  virtual void enterLambdef(Python2Parser::LambdefContext *ctx) = 0;
  virtual void exitLambdef(Python2Parser::LambdefContext *ctx) = 0;

  virtual void enterTrailer(Python2Parser::TrailerContext *ctx) = 0;
  virtual void exitTrailer(Python2Parser::TrailerContext *ctx) = 0;

  virtual void enterSubscriptlist(Python2Parser::SubscriptlistContext *ctx) = 0;
  virtual void exitSubscriptlist(Python2Parser::SubscriptlistContext *ctx) = 0;

  virtual void enterSubscript(Python2Parser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(Python2Parser::SubscriptContext *ctx) = 0;

  virtual void enterSliceop(Python2Parser::SliceopContext *ctx) = 0;
  virtual void exitSliceop(Python2Parser::SliceopContext *ctx) = 0;

  virtual void enterExprlist(Python2Parser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(Python2Parser::ExprlistContext *ctx) = 0;

  virtual void enterTestlist(Python2Parser::TestlistContext *ctx) = 0;
  virtual void exitTestlist(Python2Parser::TestlistContext *ctx) = 0;

  virtual void enterDictorsetmaker(Python2Parser::DictorsetmakerContext *ctx) = 0;
  virtual void exitDictorsetmaker(Python2Parser::DictorsetmakerContext *ctx) = 0;

  virtual void enterClassdef(Python2Parser::ClassdefContext *ctx) = 0;
  virtual void exitClassdef(Python2Parser::ClassdefContext *ctx) = 0;

  virtual void enterArglist(Python2Parser::ArglistContext *ctx) = 0;
  virtual void exitArglist(Python2Parser::ArglistContext *ctx) = 0;

  virtual void enterArgument(Python2Parser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(Python2Parser::ArgumentContext *ctx) = 0;

  virtual void enterList_iter(Python2Parser::List_iterContext *ctx) = 0;
  virtual void exitList_iter(Python2Parser::List_iterContext *ctx) = 0;

  virtual void enterList_for(Python2Parser::List_forContext *ctx) = 0;
  virtual void exitList_for(Python2Parser::List_forContext *ctx) = 0;

  virtual void enterList_if(Python2Parser::List_ifContext *ctx) = 0;
  virtual void exitList_if(Python2Parser::List_ifContext *ctx) = 0;

  virtual void enterComp_iter(Python2Parser::Comp_iterContext *ctx) = 0;
  virtual void exitComp_iter(Python2Parser::Comp_iterContext *ctx) = 0;

  virtual void enterComp_for(Python2Parser::Comp_forContext *ctx) = 0;
  virtual void exitComp_for(Python2Parser::Comp_forContext *ctx) = 0;

  virtual void enterComp_if(Python2Parser::Comp_ifContext *ctx) = 0;
  virtual void exitComp_if(Python2Parser::Comp_ifContext *ctx) = 0;

  virtual void enterTestlist1(Python2Parser::Testlist1Context *ctx) = 0;
  virtual void exitTestlist1(Python2Parser::Testlist1Context *ctx) = 0;

  virtual void enterEncoding_decl(Python2Parser::Encoding_declContext *ctx) = 0;
  virtual void exitEncoding_decl(Python2Parser::Encoding_declContext *ctx) = 0;

  virtual void enterYield_expr(Python2Parser::Yield_exprContext *ctx) = 0;
  virtual void exitYield_expr(Python2Parser::Yield_exprContext *ctx) = 0;


};

