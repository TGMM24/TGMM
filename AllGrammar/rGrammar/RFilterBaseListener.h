
// Generated from RFilter.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "RFilterListener.h"


/**
 * This class provides an empty implementation of RFilterListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RFilterBaseListener : public RFilterListener {
public:

  virtual void enterStream(RFilter::StreamContext * /*ctx*/) override { }
  virtual void exitStream(RFilter::StreamContext * /*ctx*/) override { }

  virtual void enterEat(RFilter::EatContext * /*ctx*/) override { }
  virtual void exitEat(RFilter::EatContext * /*ctx*/) override { }

  virtual void enterElem(RFilter::ElemContext * /*ctx*/) override { }
  virtual void exitElem(RFilter::ElemContext * /*ctx*/) override { }

  virtual void enterAtom(RFilter::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(RFilter::AtomContext * /*ctx*/) override { }

  virtual void enterOp(RFilter::OpContext * /*ctx*/) override { }
  virtual void exitOp(RFilter::OpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

