
// Generated from Python2.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "Python2Listener.h"


/**
 * This class provides an empty implementation of Python2Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Python2BaseListener : public Python2Listener {
public:

  virtual void enterSingle_input(Python2Parser::Single_inputContext * /*ctx*/) override { }
  virtual void exitSingle_input(Python2Parser::Single_inputContext * /*ctx*/) override { }

  virtual void enterFile_input(Python2Parser::File_inputContext * /*ctx*/) override { }
  virtual void exitFile_input(Python2Parser::File_inputContext * /*ctx*/) override { }

  virtual void enterEval_input(Python2Parser::Eval_inputContext * /*ctx*/) override { }
  virtual void exitEval_input(Python2Parser::Eval_inputContext * /*ctx*/) override { }

  virtual void enterDecorator(Python2Parser::DecoratorContext * /*ctx*/) override { }
  virtual void exitDecorator(Python2Parser::DecoratorContext * /*ctx*/) override { }

  virtual void enterDecorators(Python2Parser::DecoratorsContext * /*ctx*/) override { }
  virtual void exitDecorators(Python2Parser::DecoratorsContext * /*ctx*/) override { }

  virtual void enterDecorated(Python2Parser::DecoratedContext * /*ctx*/) override { }
  virtual void exitDecorated(Python2Parser::DecoratedContext * /*ctx*/) override { }

  virtual void enterFuncdef(Python2Parser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(Python2Parser::FuncdefContext * /*ctx*/) override { }

  virtual void enterParameters(Python2Parser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(Python2Parser::ParametersContext * /*ctx*/) override { }

  virtual void enterVarargslist(Python2Parser::VarargslistContext * /*ctx*/) override { }
  virtual void exitVarargslist(Python2Parser::VarargslistContext * /*ctx*/) override { }

  virtual void enterFpdef(Python2Parser::FpdefContext * /*ctx*/) override { }
  virtual void exitFpdef(Python2Parser::FpdefContext * /*ctx*/) override { }

  virtual void enterFplist(Python2Parser::FplistContext * /*ctx*/) override { }
  virtual void exitFplist(Python2Parser::FplistContext * /*ctx*/) override { }

  virtual void enterStmt(Python2Parser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(Python2Parser::StmtContext * /*ctx*/) override { }

  virtual void enterSimple_stmt(Python2Parser::Simple_stmtContext * /*ctx*/) override { }
  virtual void exitSimple_stmt(Python2Parser::Simple_stmtContext * /*ctx*/) override { }

  virtual void enterSmall_stmt(Python2Parser::Small_stmtContext * /*ctx*/) override { }
  virtual void exitSmall_stmt(Python2Parser::Small_stmtContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(Python2Parser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(Python2Parser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterAugassign(Python2Parser::AugassignContext * /*ctx*/) override { }
  virtual void exitAugassign(Python2Parser::AugassignContext * /*ctx*/) override { }

  virtual void enterPrint_stmt(Python2Parser::Print_stmtContext * /*ctx*/) override { }
  virtual void exitPrint_stmt(Python2Parser::Print_stmtContext * /*ctx*/) override { }

  virtual void enterDel_stmt(Python2Parser::Del_stmtContext * /*ctx*/) override { }
  virtual void exitDel_stmt(Python2Parser::Del_stmtContext * /*ctx*/) override { }

  virtual void enterPass_stmt(Python2Parser::Pass_stmtContext * /*ctx*/) override { }
  virtual void exitPass_stmt(Python2Parser::Pass_stmtContext * /*ctx*/) override { }

  virtual void enterFlow_stmt(Python2Parser::Flow_stmtContext * /*ctx*/) override { }
  virtual void exitFlow_stmt(Python2Parser::Flow_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(Python2Parser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(Python2Parser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterContinue_stmt(Python2Parser::Continue_stmtContext * /*ctx*/) override { }
  virtual void exitContinue_stmt(Python2Parser::Continue_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(Python2Parser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(Python2Parser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterYield_stmt(Python2Parser::Yield_stmtContext * /*ctx*/) override { }
  virtual void exitYield_stmt(Python2Parser::Yield_stmtContext * /*ctx*/) override { }

  virtual void enterRaise_stmt(Python2Parser::Raise_stmtContext * /*ctx*/) override { }
  virtual void exitRaise_stmt(Python2Parser::Raise_stmtContext * /*ctx*/) override { }

  virtual void enterImport_stmt(Python2Parser::Import_stmtContext * /*ctx*/) override { }
  virtual void exitImport_stmt(Python2Parser::Import_stmtContext * /*ctx*/) override { }

  virtual void enterImport_name(Python2Parser::Import_nameContext * /*ctx*/) override { }
  virtual void exitImport_name(Python2Parser::Import_nameContext * /*ctx*/) override { }

  virtual void enterImport_from(Python2Parser::Import_fromContext * /*ctx*/) override { }
  virtual void exitImport_from(Python2Parser::Import_fromContext * /*ctx*/) override { }

  virtual void enterImport_as_name(Python2Parser::Import_as_nameContext * /*ctx*/) override { }
  virtual void exitImport_as_name(Python2Parser::Import_as_nameContext * /*ctx*/) override { }

  virtual void enterDotted_as_name(Python2Parser::Dotted_as_nameContext * /*ctx*/) override { }
  virtual void exitDotted_as_name(Python2Parser::Dotted_as_nameContext * /*ctx*/) override { }

  virtual void enterImport_as_names(Python2Parser::Import_as_namesContext * /*ctx*/) override { }
  virtual void exitImport_as_names(Python2Parser::Import_as_namesContext * /*ctx*/) override { }

  virtual void enterDotted_as_names(Python2Parser::Dotted_as_namesContext * /*ctx*/) override { }
  virtual void exitDotted_as_names(Python2Parser::Dotted_as_namesContext * /*ctx*/) override { }

  virtual void enterDotted_name(Python2Parser::Dotted_nameContext * /*ctx*/) override { }
  virtual void exitDotted_name(Python2Parser::Dotted_nameContext * /*ctx*/) override { }

  virtual void enterGlobal_stmt(Python2Parser::Global_stmtContext * /*ctx*/) override { }
  virtual void exitGlobal_stmt(Python2Parser::Global_stmtContext * /*ctx*/) override { }

  virtual void enterExec_stmt(Python2Parser::Exec_stmtContext * /*ctx*/) override { }
  virtual void exitExec_stmt(Python2Parser::Exec_stmtContext * /*ctx*/) override { }

  virtual void enterAssert_stmt(Python2Parser::Assert_stmtContext * /*ctx*/) override { }
  virtual void exitAssert_stmt(Python2Parser::Assert_stmtContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(Python2Parser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(Python2Parser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(Python2Parser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(Python2Parser::If_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(Python2Parser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(Python2Parser::While_stmtContext * /*ctx*/) override { }

  virtual void enterFor_stmt(Python2Parser::For_stmtContext * /*ctx*/) override { }
  virtual void exitFor_stmt(Python2Parser::For_stmtContext * /*ctx*/) override { }

  virtual void enterTry_stmt(Python2Parser::Try_stmtContext * /*ctx*/) override { }
  virtual void exitTry_stmt(Python2Parser::Try_stmtContext * /*ctx*/) override { }

  virtual void enterWith_stmt(Python2Parser::With_stmtContext * /*ctx*/) override { }
  virtual void exitWith_stmt(Python2Parser::With_stmtContext * /*ctx*/) override { }

  virtual void enterWith_item(Python2Parser::With_itemContext * /*ctx*/) override { }
  virtual void exitWith_item(Python2Parser::With_itemContext * /*ctx*/) override { }

  virtual void enterExcept_clause(Python2Parser::Except_clauseContext * /*ctx*/) override { }
  virtual void exitExcept_clause(Python2Parser::Except_clauseContext * /*ctx*/) override { }

  virtual void enterSuite(Python2Parser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(Python2Parser::SuiteContext * /*ctx*/) override { }

  virtual void enterTestlist_safe(Python2Parser::Testlist_safeContext * /*ctx*/) override { }
  virtual void exitTestlist_safe(Python2Parser::Testlist_safeContext * /*ctx*/) override { }

  virtual void enterOld_test(Python2Parser::Old_testContext * /*ctx*/) override { }
  virtual void exitOld_test(Python2Parser::Old_testContext * /*ctx*/) override { }

  virtual void enterOld_lambdef(Python2Parser::Old_lambdefContext * /*ctx*/) override { }
  virtual void exitOld_lambdef(Python2Parser::Old_lambdefContext * /*ctx*/) override { }

  virtual void enterTest(Python2Parser::TestContext * /*ctx*/) override { }
  virtual void exitTest(Python2Parser::TestContext * /*ctx*/) override { }

  virtual void enterOr_test(Python2Parser::Or_testContext * /*ctx*/) override { }
  virtual void exitOr_test(Python2Parser::Or_testContext * /*ctx*/) override { }

  virtual void enterAnd_test(Python2Parser::And_testContext * /*ctx*/) override { }
  virtual void exitAnd_test(Python2Parser::And_testContext * /*ctx*/) override { }

  virtual void enterNot_test(Python2Parser::Not_testContext * /*ctx*/) override { }
  virtual void exitNot_test(Python2Parser::Not_testContext * /*ctx*/) override { }

  virtual void enterComparison(Python2Parser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(Python2Parser::ComparisonContext * /*ctx*/) override { }

  virtual void enterComp_op(Python2Parser::Comp_opContext * /*ctx*/) override { }
  virtual void exitComp_op(Python2Parser::Comp_opContext * /*ctx*/) override { }

  virtual void enterExpr(Python2Parser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(Python2Parser::ExprContext * /*ctx*/) override { }

  virtual void enterXor_expr(Python2Parser::Xor_exprContext * /*ctx*/) override { }
  virtual void exitXor_expr(Python2Parser::Xor_exprContext * /*ctx*/) override { }

  virtual void enterAnd_expr(Python2Parser::And_exprContext * /*ctx*/) override { }
  virtual void exitAnd_expr(Python2Parser::And_exprContext * /*ctx*/) override { }

  virtual void enterShift_expr(Python2Parser::Shift_exprContext * /*ctx*/) override { }
  virtual void exitShift_expr(Python2Parser::Shift_exprContext * /*ctx*/) override { }

  virtual void enterArith_expr(Python2Parser::Arith_exprContext * /*ctx*/) override { }
  virtual void exitArith_expr(Python2Parser::Arith_exprContext * /*ctx*/) override { }

  virtual void enterTerm(Python2Parser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(Python2Parser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(Python2Parser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(Python2Parser::FactorContext * /*ctx*/) override { }

  virtual void enterPower(Python2Parser::PowerContext * /*ctx*/) override { }
  virtual void exitPower(Python2Parser::PowerContext * /*ctx*/) override { }

  virtual void enterAtom(Python2Parser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(Python2Parser::AtomContext * /*ctx*/) override { }

  virtual void enterListmaker(Python2Parser::ListmakerContext * /*ctx*/) override { }
  virtual void exitListmaker(Python2Parser::ListmakerContext * /*ctx*/) override { }

  virtual void enterTestlist_comp(Python2Parser::Testlist_compContext * /*ctx*/) override { }
  virtual void exitTestlist_comp(Python2Parser::Testlist_compContext * /*ctx*/) override { }

  virtual void enterLambdef(Python2Parser::LambdefContext * /*ctx*/) override { }
  virtual void exitLambdef(Python2Parser::LambdefContext * /*ctx*/) override { }

  virtual void enterTrailer(Python2Parser::TrailerContext * /*ctx*/) override { }
  virtual void exitTrailer(Python2Parser::TrailerContext * /*ctx*/) override { }

  virtual void enterSubscriptlist(Python2Parser::SubscriptlistContext * /*ctx*/) override { }
  virtual void exitSubscriptlist(Python2Parser::SubscriptlistContext * /*ctx*/) override { }

  virtual void enterSubscript(Python2Parser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(Python2Parser::SubscriptContext * /*ctx*/) override { }

  virtual void enterSliceop(Python2Parser::SliceopContext * /*ctx*/) override { }
  virtual void exitSliceop(Python2Parser::SliceopContext * /*ctx*/) override { }

  virtual void enterExprlist(Python2Parser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(Python2Parser::ExprlistContext * /*ctx*/) override { }

  virtual void enterTestlist(Python2Parser::TestlistContext * /*ctx*/) override { }
  virtual void exitTestlist(Python2Parser::TestlistContext * /*ctx*/) override { }

  virtual void enterDictorsetmaker(Python2Parser::DictorsetmakerContext * /*ctx*/) override { }
  virtual void exitDictorsetmaker(Python2Parser::DictorsetmakerContext * /*ctx*/) override { }

  virtual void enterClassdef(Python2Parser::ClassdefContext * /*ctx*/) override { }
  virtual void exitClassdef(Python2Parser::ClassdefContext * /*ctx*/) override { }

  virtual void enterArglist(Python2Parser::ArglistContext * /*ctx*/) override { }
  virtual void exitArglist(Python2Parser::ArglistContext * /*ctx*/) override { }

  virtual void enterArgument(Python2Parser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(Python2Parser::ArgumentContext * /*ctx*/) override { }

  virtual void enterList_iter(Python2Parser::List_iterContext * /*ctx*/) override { }
  virtual void exitList_iter(Python2Parser::List_iterContext * /*ctx*/) override { }

  virtual void enterList_for(Python2Parser::List_forContext * /*ctx*/) override { }
  virtual void exitList_for(Python2Parser::List_forContext * /*ctx*/) override { }

  virtual void enterList_if(Python2Parser::List_ifContext * /*ctx*/) override { }
  virtual void exitList_if(Python2Parser::List_ifContext * /*ctx*/) override { }

  virtual void enterComp_iter(Python2Parser::Comp_iterContext * /*ctx*/) override { }
  virtual void exitComp_iter(Python2Parser::Comp_iterContext * /*ctx*/) override { }

  virtual void enterComp_for(Python2Parser::Comp_forContext * /*ctx*/) override { }
  virtual void exitComp_for(Python2Parser::Comp_forContext * /*ctx*/) override { }

  virtual void enterComp_if(Python2Parser::Comp_ifContext * /*ctx*/) override { }
  virtual void exitComp_if(Python2Parser::Comp_ifContext * /*ctx*/) override { }

  virtual void enterTestlist1(Python2Parser::Testlist1Context * /*ctx*/) override { }
  virtual void exitTestlist1(Python2Parser::Testlist1Context * /*ctx*/) override { }

  virtual void enterEncoding_decl(Python2Parser::Encoding_declContext * /*ctx*/) override { }
  virtual void exitEncoding_decl(Python2Parser::Encoding_declContext * /*ctx*/) override { }

  virtual void enterYield_expr(Python2Parser::Yield_exprContext * /*ctx*/) override { }
  virtual void exitYield_expr(Python2Parser::Yield_exprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

