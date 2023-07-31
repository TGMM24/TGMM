#pragma once

#include "antlr4-runtime.h"

class myParserBase : public antlr4::Parser {
public:
    myParserBase(antlr4::TokenStream *input) : Parser(input) { }
    bool IsLocalVariableDeclaration();
};