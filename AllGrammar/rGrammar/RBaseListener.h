
// Generated from R.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "RListener.h"


/**
 * This class provides an empty implementation of RListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RBaseListener : public RListener {
public:

  virtual void enterProg(RParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(RParser::ProgContext * /*ctx*/) override { }

  virtual void enterExpr(RParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(RParser::ExprContext * /*ctx*/) override { }

  virtual void enterExprlist(RParser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(RParser::ExprlistContext * /*ctx*/) override { }

  virtual void enterFormlist(RParser::FormlistContext * /*ctx*/) override { }
  virtual void exitFormlist(RParser::FormlistContext * /*ctx*/) override { }

  virtual void enterForm(RParser::FormContext * /*ctx*/) override { }
  virtual void exitForm(RParser::FormContext * /*ctx*/) override { }

  virtual void enterSublist(RParser::SublistContext * /*ctx*/) override { }
  virtual void exitSublist(RParser::SublistContext * /*ctx*/) override { }

  virtual void enterSub(RParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(RParser::SubContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

