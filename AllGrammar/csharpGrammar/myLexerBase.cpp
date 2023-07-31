#include "myLexerBase.h"
#include "myLexer.h"
using namespace antlr4;

void myLexerBase::OnInterpolatedRegularStringStart(){
    interpolatedStringLevel++;
    interpolatedVerbatiums.push(false);
    verbatium = false;
}

void myLexerBase::OnInterpolatedVerbatiumStringStart() {
    interpolatedStringLevel++;
    interpolatedVerbatiums.push(true);
    verbatium = true;
}

void myLexerBase::OnOpenBrace() {
    if (interpolatedStringLevel > 0)
    {
        curlyLevels.push(curlyLevels.top() + 1);
        curlyLevels.pop();
    }
}

void myLexerBase::OnCloseBrace(){
    if (interpolatedStringLevel > 0)
    {
        curlyLevels.push(curlyLevels.top() - 1);
        curlyLevels.pop();
        if (curlyLevels.top() == 0)
        {
            curlyLevels.pop();
            skip();
            popMode();
        }
    }
}

void myLexerBase::OnColon(){
    if (interpolatedStringLevel > 0)
    {
        int ind = 1;
        bool switchToFormatString = true;
        while ((char)_input->LA(ind) != '}')
        {
            if (_input->LA(ind) == ':' || _input->LA(ind) == ')')
            {
                switchToFormatString = false;
                break;
            }
            ind++;
        }
        if (switchToFormatString)
        {
            setMode(myLexer::INTERPOLATION_FORMAT);
        }
    }
}

void myLexerBase::OpenBraceInside(){
    curlyLevels.push(1);
}

void myLexerBase::OnDoubleQuoteInside(){
    interpolatedStringLevel--;
    interpolatedVerbatiums.pop();
    verbatium = (interpolatedVerbatiums.size() > 0 ? interpolatedVerbatiums.top() : false);
}

void myLexerBase::OnCloseBraceInside() {
    curlyLevels.pop();
}

bool myLexerBase::IsRegularCharInside(){
    return !verbatium;
}

bool myLexerBase::IsVerbatiumDoubleQuoteInside(){
    return verbatium;
}