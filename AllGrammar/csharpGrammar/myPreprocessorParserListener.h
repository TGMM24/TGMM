
// Generated from myPreprocessorParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myPreprocessorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myPreprocessorParser.
 */
class  myPreprocessorParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPreprocessorDeclaration(myPreprocessorParser::PreprocessorDeclarationContext *ctx) = 0;
  virtual void exitPreprocessorDeclaration(myPreprocessorParser::PreprocessorDeclarationContext *ctx) = 0;

  virtual void enterPreprocessorConditional(myPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;
  virtual void exitPreprocessorConditional(myPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;

  virtual void enterPreprocessorLine(myPreprocessorParser::PreprocessorLineContext *ctx) = 0;
  virtual void exitPreprocessorLine(myPreprocessorParser::PreprocessorLineContext *ctx) = 0;

  virtual void enterPreprocessorDiagnostic(myPreprocessorParser::PreprocessorDiagnosticContext *ctx) = 0;
  virtual void exitPreprocessorDiagnostic(myPreprocessorParser::PreprocessorDiagnosticContext *ctx) = 0;

  virtual void enterPreprocessorRegion(myPreprocessorParser::PreprocessorRegionContext *ctx) = 0;
  virtual void exitPreprocessorRegion(myPreprocessorParser::PreprocessorRegionContext *ctx) = 0;

  virtual void enterPreprocessorPragma(myPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;
  virtual void exitPreprocessorPragma(myPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;

  virtual void enterPreprocessorNullable(myPreprocessorParser::PreprocessorNullableContext *ctx) = 0;
  virtual void exitPreprocessorNullable(myPreprocessorParser::PreprocessorNullableContext *ctx) = 0;

  virtual void enterDirective_new_line_or_sharp(myPreprocessorParser::Directive_new_line_or_sharpContext *ctx) = 0;
  virtual void exitDirective_new_line_or_sharp(myPreprocessorParser::Directive_new_line_or_sharpContext *ctx) = 0;

  virtual void enterPreprocessor_expression(myPreprocessorParser::Preprocessor_expressionContext *ctx) = 0;
  virtual void exitPreprocessor_expression(myPreprocessorParser::Preprocessor_expressionContext *ctx) = 0;


};

