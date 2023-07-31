#pragma once

#include <stack>

#include "antlr4-runtime.h"

class myLexerBase : public antlr4::Lexer {
public:
    myLexerBase(antlr4::CharStream *input): Lexer(input) { }
    int interpolatedStringLevel;
    std::stack<bool> interpolatedVerbatiums;
    std::stack<int> curlyLevels;
    bool verbatium;


    void OnInterpolatedRegularStringStart();
    void OnInterpolatedVerbatiumStringStart();
    void OnOpenBrace();
    void OnCloseBrace();
    void OnColon();
    void OpenBraceInside();
    void OnDoubleQuoteInside();
    void OnCloseBraceInside();
    bool IsRegularCharInside();
    bool IsVerbatiumDoubleQuoteInside();
};