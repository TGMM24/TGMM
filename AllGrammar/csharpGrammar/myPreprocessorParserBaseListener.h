
// Generated from myPreprocessorParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myPreprocessorParserListener.h"


/**
 * This class provides an empty implementation of myPreprocessorParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myPreprocessorParserBaseListener : public myPreprocessorParserListener {
public:

  virtual void enterPreprocessorDeclaration(myPreprocessorParser::PreprocessorDeclarationContext * /*ctx*/) override { }
  virtual void exitPreprocessorDeclaration(myPreprocessorParser::PreprocessorDeclarationContext * /*ctx*/) override { }

  virtual void enterPreprocessorConditional(myPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }
  virtual void exitPreprocessorConditional(myPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }

  virtual void enterPreprocessorLine(myPreprocessorParser::PreprocessorLineContext * /*ctx*/) override { }
  virtual void exitPreprocessorLine(myPreprocessorParser::PreprocessorLineContext * /*ctx*/) override { }

  virtual void enterPreprocessorDiagnostic(myPreprocessorParser::PreprocessorDiagnosticContext * /*ctx*/) override { }
  virtual void exitPreprocessorDiagnostic(myPreprocessorParser::PreprocessorDiagnosticContext * /*ctx*/) override { }

  virtual void enterPreprocessorRegion(myPreprocessorParser::PreprocessorRegionContext * /*ctx*/) override { }
  virtual void exitPreprocessorRegion(myPreprocessorParser::PreprocessorRegionContext * /*ctx*/) override { }

  virtual void enterPreprocessorPragma(myPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }
  virtual void exitPreprocessorPragma(myPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }

  virtual void enterPreprocessorNullable(myPreprocessorParser::PreprocessorNullableContext * /*ctx*/) override { }
  virtual void exitPreprocessorNullable(myPreprocessorParser::PreprocessorNullableContext * /*ctx*/) override { }

  virtual void enterDirective_new_line_or_sharp(myPreprocessorParser::Directive_new_line_or_sharpContext * /*ctx*/) override { }
  virtual void exitDirective_new_line_or_sharp(myPreprocessorParser::Directive_new_line_or_sharpContext * /*ctx*/) override { }

  virtual void enterPreprocessor_expression(myPreprocessorParser::Preprocessor_expressionContext * /*ctx*/) override { }
  virtual void exitPreprocessor_expression(myPreprocessorParser::Preprocessor_expressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

