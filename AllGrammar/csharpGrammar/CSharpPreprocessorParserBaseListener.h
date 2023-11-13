
// Generated from CSharpPreprocessorParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CSharpPreprocessorParserListener.h"


/**
 * This class provides an empty implementation of CSharpPreprocessorParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CSharpPreprocessorParserBaseListener : public CSharpPreprocessorParserListener {
public:

  virtual void enterPreprocessorDeclaration(CSharpPreprocessorParser::PreprocessorDeclarationContext * /*ctx*/) override { }
  virtual void exitPreprocessorDeclaration(CSharpPreprocessorParser::PreprocessorDeclarationContext * /*ctx*/) override { }

  virtual void enterPreprocessorConditional(CSharpPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }
  virtual void exitPreprocessorConditional(CSharpPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }

  virtual void enterPreprocessorLine(CSharpPreprocessorParser::PreprocessorLineContext * /*ctx*/) override { }
  virtual void exitPreprocessorLine(CSharpPreprocessorParser::PreprocessorLineContext * /*ctx*/) override { }

  virtual void enterPreprocessorDiagnostic(CSharpPreprocessorParser::PreprocessorDiagnosticContext * /*ctx*/) override { }
  virtual void exitPreprocessorDiagnostic(CSharpPreprocessorParser::PreprocessorDiagnosticContext * /*ctx*/) override { }

  virtual void enterPreprocessorRegion(CSharpPreprocessorParser::PreprocessorRegionContext * /*ctx*/) override { }
  virtual void exitPreprocessorRegion(CSharpPreprocessorParser::PreprocessorRegionContext * /*ctx*/) override { }

  virtual void enterPreprocessorPragma(CSharpPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }
  virtual void exitPreprocessorPragma(CSharpPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }

  virtual void enterPreprocessorNullable(CSharpPreprocessorParser::PreprocessorNullableContext * /*ctx*/) override { }
  virtual void exitPreprocessorNullable(CSharpPreprocessorParser::PreprocessorNullableContext * /*ctx*/) override { }

  virtual void enterDirective_new_line_or_sharp(CSharpPreprocessorParser::Directive_new_line_or_sharpContext * /*ctx*/) override { }
  virtual void exitDirective_new_line_or_sharp(CSharpPreprocessorParser::Directive_new_line_or_sharpContext * /*ctx*/) override { }

  virtual void enterPreprocessor_expression(CSharpPreprocessorParser::Preprocessor_expressionContext * /*ctx*/) override { }
  virtual void exitPreprocessor_expression(CSharpPreprocessorParser::Preprocessor_expressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

