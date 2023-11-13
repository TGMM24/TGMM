
// Generated from CSharpPreprocessorParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CSharpPreprocessorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CSharpPreprocessorParser.
 */
class  CSharpPreprocessorParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPreprocessorDeclaration(CSharpPreprocessorParser::PreprocessorDeclarationContext *ctx) = 0;
  virtual void exitPreprocessorDeclaration(CSharpPreprocessorParser::PreprocessorDeclarationContext *ctx) = 0;

  virtual void enterPreprocessorConditional(CSharpPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;
  virtual void exitPreprocessorConditional(CSharpPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;

  virtual void enterPreprocessorLine(CSharpPreprocessorParser::PreprocessorLineContext *ctx) = 0;
  virtual void exitPreprocessorLine(CSharpPreprocessorParser::PreprocessorLineContext *ctx) = 0;

  virtual void enterPreprocessorDiagnostic(CSharpPreprocessorParser::PreprocessorDiagnosticContext *ctx) = 0;
  virtual void exitPreprocessorDiagnostic(CSharpPreprocessorParser::PreprocessorDiagnosticContext *ctx) = 0;

  virtual void enterPreprocessorRegion(CSharpPreprocessorParser::PreprocessorRegionContext *ctx) = 0;
  virtual void exitPreprocessorRegion(CSharpPreprocessorParser::PreprocessorRegionContext *ctx) = 0;

  virtual void enterPreprocessorPragma(CSharpPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;
  virtual void exitPreprocessorPragma(CSharpPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;

  virtual void enterPreprocessorNullable(CSharpPreprocessorParser::PreprocessorNullableContext *ctx) = 0;
  virtual void exitPreprocessorNullable(CSharpPreprocessorParser::PreprocessorNullableContext *ctx) = 0;

  virtual void enterDirective_new_line_or_sharp(CSharpPreprocessorParser::Directive_new_line_or_sharpContext *ctx) = 0;
  virtual void exitDirective_new_line_or_sharp(CSharpPreprocessorParser::Directive_new_line_or_sharpContext *ctx) = 0;

  virtual void enterPreprocessor_expression(CSharpPreprocessorParser::Preprocessor_expressionContext *ctx) = 0;
  virtual void exitPreprocessor_expression(CSharpPreprocessorParser::Preprocessor_expressionContext *ctx) = 0;


};

