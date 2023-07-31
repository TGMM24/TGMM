
// Generated from Cobol85Preprocessor.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Cobol85PreprocessorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Cobol85PreprocessorParser.
 */
class  Cobol85PreprocessorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(Cobol85PreprocessorParser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(Cobol85PreprocessorParser::StartRuleContext *ctx) = 0;

  virtual void enterCompilerOptions(Cobol85PreprocessorParser::CompilerOptionsContext *ctx) = 0;
  virtual void exitCompilerOptions(Cobol85PreprocessorParser::CompilerOptionsContext *ctx) = 0;

  virtual void enterCompilerXOpts(Cobol85PreprocessorParser::CompilerXOptsContext *ctx) = 0;
  virtual void exitCompilerXOpts(Cobol85PreprocessorParser::CompilerXOptsContext *ctx) = 0;

  virtual void enterCompilerOption(Cobol85PreprocessorParser::CompilerOptionContext *ctx) = 0;
  virtual void exitCompilerOption(Cobol85PreprocessorParser::CompilerOptionContext *ctx) = 0;

  virtual void enterExecCicsStatement(Cobol85PreprocessorParser::ExecCicsStatementContext *ctx) = 0;
  virtual void exitExecCicsStatement(Cobol85PreprocessorParser::ExecCicsStatementContext *ctx) = 0;

  virtual void enterExecSqlStatement(Cobol85PreprocessorParser::ExecSqlStatementContext *ctx) = 0;
  virtual void exitExecSqlStatement(Cobol85PreprocessorParser::ExecSqlStatementContext *ctx) = 0;

  virtual void enterExecSqlImsStatement(Cobol85PreprocessorParser::ExecSqlImsStatementContext *ctx) = 0;
  virtual void exitExecSqlImsStatement(Cobol85PreprocessorParser::ExecSqlImsStatementContext *ctx) = 0;

  virtual void enterCopyStatement(Cobol85PreprocessorParser::CopyStatementContext *ctx) = 0;
  virtual void exitCopyStatement(Cobol85PreprocessorParser::CopyStatementContext *ctx) = 0;

  virtual void enterCopySource(Cobol85PreprocessorParser::CopySourceContext *ctx) = 0;
  virtual void exitCopySource(Cobol85PreprocessorParser::CopySourceContext *ctx) = 0;

  virtual void enterCopyLibrary(Cobol85PreprocessorParser::CopyLibraryContext *ctx) = 0;
  virtual void exitCopyLibrary(Cobol85PreprocessorParser::CopyLibraryContext *ctx) = 0;

  virtual void enterReplacingPhrase(Cobol85PreprocessorParser::ReplacingPhraseContext *ctx) = 0;
  virtual void exitReplacingPhrase(Cobol85PreprocessorParser::ReplacingPhraseContext *ctx) = 0;

  virtual void enterReplaceArea(Cobol85PreprocessorParser::ReplaceAreaContext *ctx) = 0;
  virtual void exitReplaceArea(Cobol85PreprocessorParser::ReplaceAreaContext *ctx) = 0;

  virtual void enterReplaceByStatement(Cobol85PreprocessorParser::ReplaceByStatementContext *ctx) = 0;
  virtual void exitReplaceByStatement(Cobol85PreprocessorParser::ReplaceByStatementContext *ctx) = 0;

  virtual void enterReplaceOffStatement(Cobol85PreprocessorParser::ReplaceOffStatementContext *ctx) = 0;
  virtual void exitReplaceOffStatement(Cobol85PreprocessorParser::ReplaceOffStatementContext *ctx) = 0;

  virtual void enterReplaceClause(Cobol85PreprocessorParser::ReplaceClauseContext *ctx) = 0;
  virtual void exitReplaceClause(Cobol85PreprocessorParser::ReplaceClauseContext *ctx) = 0;

  virtual void enterDirectoryPhrase(Cobol85PreprocessorParser::DirectoryPhraseContext *ctx) = 0;
  virtual void exitDirectoryPhrase(Cobol85PreprocessorParser::DirectoryPhraseContext *ctx) = 0;

  virtual void enterFamilyPhrase(Cobol85PreprocessorParser::FamilyPhraseContext *ctx) = 0;
  virtual void exitFamilyPhrase(Cobol85PreprocessorParser::FamilyPhraseContext *ctx) = 0;

  virtual void enterReplaceable(Cobol85PreprocessorParser::ReplaceableContext *ctx) = 0;
  virtual void exitReplaceable(Cobol85PreprocessorParser::ReplaceableContext *ctx) = 0;

  virtual void enterReplacement(Cobol85PreprocessorParser::ReplacementContext *ctx) = 0;
  virtual void exitReplacement(Cobol85PreprocessorParser::ReplacementContext *ctx) = 0;

  virtual void enterEjectStatement(Cobol85PreprocessorParser::EjectStatementContext *ctx) = 0;
  virtual void exitEjectStatement(Cobol85PreprocessorParser::EjectStatementContext *ctx) = 0;

  virtual void enterSkipStatement(Cobol85PreprocessorParser::SkipStatementContext *ctx) = 0;
  virtual void exitSkipStatement(Cobol85PreprocessorParser::SkipStatementContext *ctx) = 0;

  virtual void enterTitleStatement(Cobol85PreprocessorParser::TitleStatementContext *ctx) = 0;
  virtual void exitTitleStatement(Cobol85PreprocessorParser::TitleStatementContext *ctx) = 0;

  virtual void enterPseudoText(Cobol85PreprocessorParser::PseudoTextContext *ctx) = 0;
  virtual void exitPseudoText(Cobol85PreprocessorParser::PseudoTextContext *ctx) = 0;

  virtual void enterCharData(Cobol85PreprocessorParser::CharDataContext *ctx) = 0;
  virtual void exitCharData(Cobol85PreprocessorParser::CharDataContext *ctx) = 0;

  virtual void enterCharDataSql(Cobol85PreprocessorParser::CharDataSqlContext *ctx) = 0;
  virtual void exitCharDataSql(Cobol85PreprocessorParser::CharDataSqlContext *ctx) = 0;

  virtual void enterCharDataLine(Cobol85PreprocessorParser::CharDataLineContext *ctx) = 0;
  virtual void exitCharDataLine(Cobol85PreprocessorParser::CharDataLineContext *ctx) = 0;

  virtual void enterCobolWord(Cobol85PreprocessorParser::CobolWordContext *ctx) = 0;
  virtual void exitCobolWord(Cobol85PreprocessorParser::CobolWordContext *ctx) = 0;

  virtual void enterLiteral(Cobol85PreprocessorParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(Cobol85PreprocessorParser::LiteralContext *ctx) = 0;

  virtual void enterFilename(Cobol85PreprocessorParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(Cobol85PreprocessorParser::FilenameContext *ctx) = 0;

  virtual void enterCharDataKeyword(Cobol85PreprocessorParser::CharDataKeywordContext *ctx) = 0;
  virtual void exitCharDataKeyword(Cobol85PreprocessorParser::CharDataKeywordContext *ctx) = 0;


};

