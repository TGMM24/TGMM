
// Generated from R.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "RParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RParser.
 */
class  RListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(RParser::ProgContext *ctx) = 0;
  virtual void exitProg(RParser::ProgContext *ctx) = 0;

  virtual void enterExpr(RParser::ExprContext *ctx) = 0;
  virtual void exitExpr(RParser::ExprContext *ctx) = 0;

  virtual void enterExprlist(RParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(RParser::ExprlistContext *ctx) = 0;

  virtual void enterFormlist(RParser::FormlistContext *ctx) = 0;
  virtual void exitFormlist(RParser::FormlistContext *ctx) = 0;

  virtual void enterForm(RParser::FormContext *ctx) = 0;
  virtual void exitForm(RParser::FormContext *ctx) = 0;

  virtual void enterSublist(RParser::SublistContext *ctx) = 0;
  virtual void exitSublist(RParser::SublistContext *ctx) = 0;

  virtual void enterSub(RParser::SubContext *ctx) = 0;
  virtual void exitSub(RParser::SubContext *ctx) = 0;


};

