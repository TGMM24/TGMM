
// Generated from my.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myListener.h"


/**
 * This class provides an empty implementation of myListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myBaseListener : public myListener {
public:

  virtual void enterSingle_input(myParser::Single_inputContext * /*ctx*/) override { }
  virtual void exitSingle_input(myParser::Single_inputContext * /*ctx*/) override { }

  virtual void enterFile_input(myParser::File_inputContext * /*ctx*/) override { }
  virtual void exitFile_input(myParser::File_inputContext * /*ctx*/) override { }

  virtual void enterEval_input(myParser::Eval_inputContext * /*ctx*/) override { }
  virtual void exitEval_input(myParser::Eval_inputContext * /*ctx*/) override { }

  virtual void enterDecorator(myParser::DecoratorContext * /*ctx*/) override { }
  virtual void exitDecorator(myParser::DecoratorContext * /*ctx*/) override { }

  virtual void enterDecorators(myParser::DecoratorsContext * /*ctx*/) override { }
  virtual void exitDecorators(myParser::DecoratorsContext * /*ctx*/) override { }

  virtual void enterDecorated(myParser::DecoratedContext * /*ctx*/) override { }
  virtual void exitDecorated(myParser::DecoratedContext * /*ctx*/) override { }

  virtual void enterAsync_funcdef(myParser::Async_funcdefContext * /*ctx*/) override { }
  virtual void exitAsync_funcdef(myParser::Async_funcdefContext * /*ctx*/) override { }

  virtual void enterFuncdef(myParser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(myParser::FuncdefContext * /*ctx*/) override { }

  virtual void enterParameters(myParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(myParser::ParametersContext * /*ctx*/) override { }

  virtual void enterTypedargslist(myParser::TypedargslistContext * /*ctx*/) override { }
  virtual void exitTypedargslist(myParser::TypedargslistContext * /*ctx*/) override { }

  virtual void enterTfpdef(myParser::TfpdefContext * /*ctx*/) override { }
  virtual void exitTfpdef(myParser::TfpdefContext * /*ctx*/) override { }

  virtual void enterVarargslist(myParser::VarargslistContext * /*ctx*/) override { }
  virtual void exitVarargslist(myParser::VarargslistContext * /*ctx*/) override { }

  virtual void enterVfpdef(myParser::VfpdefContext * /*ctx*/) override { }
  virtual void exitVfpdef(myParser::VfpdefContext * /*ctx*/) override { }

  virtual void enterStmt(myParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(myParser::StmtContext * /*ctx*/) override { }

  virtual void enterSimple_stmt(myParser::Simple_stmtContext * /*ctx*/) override { }
  virtual void exitSimple_stmt(myParser::Simple_stmtContext * /*ctx*/) override { }

  virtual void enterSmall_stmt(myParser::Small_stmtContext * /*ctx*/) override { }
  virtual void exitSmall_stmt(myParser::Small_stmtContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(myParser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(myParser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterAnnassign(myParser::AnnassignContext * /*ctx*/) override { }
  virtual void exitAnnassign(myParser::AnnassignContext * /*ctx*/) override { }

  virtual void enterTestlist_star_expr(myParser::Testlist_star_exprContext * /*ctx*/) override { }
  virtual void exitTestlist_star_expr(myParser::Testlist_star_exprContext * /*ctx*/) override { }

  virtual void enterAugassign(myParser::AugassignContext * /*ctx*/) override { }
  virtual void exitAugassign(myParser::AugassignContext * /*ctx*/) override { }

  virtual void enterDel_stmt(myParser::Del_stmtContext * /*ctx*/) override { }
  virtual void exitDel_stmt(myParser::Del_stmtContext * /*ctx*/) override { }

  virtual void enterPass_stmt(myParser::Pass_stmtContext * /*ctx*/) override { }
  virtual void exitPass_stmt(myParser::Pass_stmtContext * /*ctx*/) override { }

  virtual void enterFlow_stmt(myParser::Flow_stmtContext * /*ctx*/) override { }
  virtual void exitFlow_stmt(myParser::Flow_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(myParser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(myParser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterContinue_stmt(myParser::Continue_stmtContext * /*ctx*/) override { }
  virtual void exitContinue_stmt(myParser::Continue_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(myParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(myParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterYield_stmt(myParser::Yield_stmtContext * /*ctx*/) override { }
  virtual void exitYield_stmt(myParser::Yield_stmtContext * /*ctx*/) override { }

  virtual void enterRaise_stmt(myParser::Raise_stmtContext * /*ctx*/) override { }
  virtual void exitRaise_stmt(myParser::Raise_stmtContext * /*ctx*/) override { }

  virtual void enterImport_stmt(myParser::Import_stmtContext * /*ctx*/) override { }
  virtual void exitImport_stmt(myParser::Import_stmtContext * /*ctx*/) override { }

  virtual void enterImport_name(myParser::Import_nameContext * /*ctx*/) override { }
  virtual void exitImport_name(myParser::Import_nameContext * /*ctx*/) override { }

  virtual void enterImport_from(myParser::Import_fromContext * /*ctx*/) override { }
  virtual void exitImport_from(myParser::Import_fromContext * /*ctx*/) override { }

  virtual void enterImport_as_name(myParser::Import_as_nameContext * /*ctx*/) override { }
  virtual void exitImport_as_name(myParser::Import_as_nameContext * /*ctx*/) override { }

  virtual void enterDotted_as_name(myParser::Dotted_as_nameContext * /*ctx*/) override { }
  virtual void exitDotted_as_name(myParser::Dotted_as_nameContext * /*ctx*/) override { }

  virtual void enterImport_as_names(myParser::Import_as_namesContext * /*ctx*/) override { }
  virtual void exitImport_as_names(myParser::Import_as_namesContext * /*ctx*/) override { }

  virtual void enterDotted_as_names(myParser::Dotted_as_namesContext * /*ctx*/) override { }
  virtual void exitDotted_as_names(myParser::Dotted_as_namesContext * /*ctx*/) override { }

  virtual void enterDotted_name(myParser::Dotted_nameContext * /*ctx*/) override { }
  virtual void exitDotted_name(myParser::Dotted_nameContext * /*ctx*/) override { }

  virtual void enterGlobal_stmt(myParser::Global_stmtContext * /*ctx*/) override { }
  virtual void exitGlobal_stmt(myParser::Global_stmtContext * /*ctx*/) override { }

  virtual void enterNonlocal_stmt(myParser::Nonlocal_stmtContext * /*ctx*/) override { }
  virtual void exitNonlocal_stmt(myParser::Nonlocal_stmtContext * /*ctx*/) override { }

  virtual void enterAssert_stmt(myParser::Assert_stmtContext * /*ctx*/) override { }
  virtual void exitAssert_stmt(myParser::Assert_stmtContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(myParser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(myParser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterAsync_stmt(myParser::Async_stmtContext * /*ctx*/) override { }
  virtual void exitAsync_stmt(myParser::Async_stmtContext * /*ctx*/) override { }

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

  virtual void enterWith_item(myParser::With_itemContext * /*ctx*/) override { }
  virtual void exitWith_item(myParser::With_itemContext * /*ctx*/) override { }

  virtual void enterExcept_clause(myParser::Except_clauseContext * /*ctx*/) override { }
  virtual void exitExcept_clause(myParser::Except_clauseContext * /*ctx*/) override { }

  virtual void enterSuite(myParser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(myParser::SuiteContext * /*ctx*/) override { }

  virtual void enterTest(myParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(myParser::TestContext * /*ctx*/) override { }

  virtual void enterTest_nocond(myParser::Test_nocondContext * /*ctx*/) override { }
  virtual void exitTest_nocond(myParser::Test_nocondContext * /*ctx*/) override { }

  virtual void enterLambdef(myParser::LambdefContext * /*ctx*/) override { }
  virtual void exitLambdef(myParser::LambdefContext * /*ctx*/) override { }

  virtual void enterLambdef_nocond(myParser::Lambdef_nocondContext * /*ctx*/) override { }
  virtual void exitLambdef_nocond(myParser::Lambdef_nocondContext * /*ctx*/) override { }

  virtual void enterOr_test(myParser::Or_testContext * /*ctx*/) override { }
  virtual void exitOr_test(myParser::Or_testContext * /*ctx*/) override { }

  virtual void enterAnd_test(myParser::And_testContext * /*ctx*/) override { }
  virtual void exitAnd_test(myParser::And_testContext * /*ctx*/) override { }

  virtual void enterNot_test(myParser::Not_testContext * /*ctx*/) override { }
  virtual void exitNot_test(myParser::Not_testContext * /*ctx*/) override { }

  virtual void enterComparison(myParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(myParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterComp_op(myParser::Comp_opContext * /*ctx*/) override { }
  virtual void exitComp_op(myParser::Comp_opContext * /*ctx*/) override { }

  virtual void enterStar_expr(myParser::Star_exprContext * /*ctx*/) override { }
  virtual void exitStar_expr(myParser::Star_exprContext * /*ctx*/) override { }

  virtual void enterExpr(myParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(myParser::ExprContext * /*ctx*/) override { }

  virtual void enterXor_expr(myParser::Xor_exprContext * /*ctx*/) override { }
  virtual void exitXor_expr(myParser::Xor_exprContext * /*ctx*/) override { }

  virtual void enterAnd_expr(myParser::And_exprContext * /*ctx*/) override { }
  virtual void exitAnd_expr(myParser::And_exprContext * /*ctx*/) override { }

  virtual void enterShift_expr(myParser::Shift_exprContext * /*ctx*/) override { }
  virtual void exitShift_expr(myParser::Shift_exprContext * /*ctx*/) override { }

  virtual void enterArith_expr(myParser::Arith_exprContext * /*ctx*/) override { }
  virtual void exitArith_expr(myParser::Arith_exprContext * /*ctx*/) override { }

  virtual void enterTerm(myParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(myParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(myParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(myParser::FactorContext * /*ctx*/) override { }

  virtual void enterPower(myParser::PowerContext * /*ctx*/) override { }
  virtual void exitPower(myParser::PowerContext * /*ctx*/) override { }

  virtual void enterAtom_expr(myParser::Atom_exprContext * /*ctx*/) override { }
  virtual void exitAtom_expr(myParser::Atom_exprContext * /*ctx*/) override { }

  virtual void enterAtom(myParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(myParser::AtomContext * /*ctx*/) override { }

  virtual void enterTestlist_comp(myParser::Testlist_compContext * /*ctx*/) override { }
  virtual void exitTestlist_comp(myParser::Testlist_compContext * /*ctx*/) override { }

  virtual void enterTrailer(myParser::TrailerContext * /*ctx*/) override { }
  virtual void exitTrailer(myParser::TrailerContext * /*ctx*/) override { }

  virtual void enterSubscriptlist(myParser::SubscriptlistContext * /*ctx*/) override { }
  virtual void exitSubscriptlist(myParser::SubscriptlistContext * /*ctx*/) override { }

  virtual void enterSubscript(myParser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(myParser::SubscriptContext * /*ctx*/) override { }

  virtual void enterSliceop(myParser::SliceopContext * /*ctx*/) override { }
  virtual void exitSliceop(myParser::SliceopContext * /*ctx*/) override { }

  virtual void enterExprlist(myParser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(myParser::ExprlistContext * /*ctx*/) override { }

  virtual void enterTestlist(myParser::TestlistContext * /*ctx*/) override { }
  virtual void exitTestlist(myParser::TestlistContext * /*ctx*/) override { }

  virtual void enterDictorsetmaker(myParser::DictorsetmakerContext * /*ctx*/) override { }
  virtual void exitDictorsetmaker(myParser::DictorsetmakerContext * /*ctx*/) override { }

  virtual void enterClassdef(myParser::ClassdefContext * /*ctx*/) override { }
  virtual void exitClassdef(myParser::ClassdefContext * /*ctx*/) override { }

  virtual void enterArglist(myParser::ArglistContext * /*ctx*/) override { }
  virtual void exitArglist(myParser::ArglistContext * /*ctx*/) override { }

  virtual void enterArgument(myParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(myParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterComp_iter(myParser::Comp_iterContext * /*ctx*/) override { }
  virtual void exitComp_iter(myParser::Comp_iterContext * /*ctx*/) override { }

  virtual void enterComp_for(myParser::Comp_forContext * /*ctx*/) override { }
  virtual void exitComp_for(myParser::Comp_forContext * /*ctx*/) override { }

  virtual void enterComp_if(myParser::Comp_ifContext * /*ctx*/) override { }
  virtual void exitComp_if(myParser::Comp_ifContext * /*ctx*/) override { }

  virtual void enterEncoding_decl(myParser::Encoding_declContext * /*ctx*/) override { }
  virtual void exitEncoding_decl(myParser::Encoding_declContext * /*ctx*/) override { }

  virtual void enterYield_expr(myParser::Yield_exprContext * /*ctx*/) override { }
  virtual void exitYield_expr(myParser::Yield_exprContext * /*ctx*/) override { }

  virtual void enterYield_arg(myParser::Yield_argContext * /*ctx*/) override { }
  virtual void exitYield_arg(myParser::Yield_argContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

