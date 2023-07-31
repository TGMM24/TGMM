
// Generated from UnicodeClasses.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  UnicodeClasses : public antlr4::Lexer {
public:
  enum {
    UNICODE_CLASS_LL = 1, UNICODE_CLASS_LM = 2, UNICODE_CLASS_LO = 3, UNICODE_CLASS_LT = 4, 
    UNICODE_CLASS_LU = 5, UNICODE_CLASS_ND = 6, UNICODE_CLASS_NL = 7
  };

  explicit UnicodeClasses(antlr4::CharStream *input);

  ~UnicodeClasses() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

