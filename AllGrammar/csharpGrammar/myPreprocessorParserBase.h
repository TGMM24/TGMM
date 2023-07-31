#pragma once
#include <stack>
#include <unordered_set>
#include "antlr4-runtime.h"

class myPreprocessorParserBase : public antlr4::Parser {
public:
    std::stack<bool> conditions;
    std::unordered_set<std::string> ConditionalSymbols;
    myPreprocessorParserBase(antlr4::TokenStream *input) : Parser(input) {
        conditions.push(true);
        ConditionalSymbols.insert("DEBUG");
    }
    bool AllConditions();
    void OnPreprocessorDirectiveDefine();
    void OnPreprocessorDirectiveUndef();
    void OnPreprocessorDirectiveIf();
    void OnPreprocessorDirectiveElif();
    void OnPreprocessorDirectiveElse();
    void OnPreprocessorDirectiveEndif();
    void OnPreprocessorDirectiveLine();
    void OnPreprocessorDirectiveError();
    void OnPreprocessorDirectiveWarning();
    void OnPreprocessorDirectiveRegion();
    void OnPreprocessorDirectiveEndregion();
    void OnPreprocessorDirectivePragma();
    void OnPreprocessorDirectiveNullable();
    void OnPreprocessorExpressionTrue();
    void OnPreprocessorExpressionFalse();
    void OnPreprocessorExpressionConditionalSymbol();
    void OnPreprocessorExpressionConditionalOpenParens();
    void OnPreprocessorExpressionConditionalBang();
    void OnPreprocessorExpressionConditionalEq();
    void OnPreprocessorExpressionConditionalNe();
    void OnPreprocessorExpressionConditionalAnd();
    void OnPreprocessorExpressionConditionalOr();
};