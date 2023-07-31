#include "myPreprocessorParserBase.h"
#include "myPreprocessorParser.h"
#include "antlr4-runtime.h"
using namespace antlr4;
using namespace std;



bool myPreprocessorParserBase::AllConditions()
{
    bool res = true;
    bool val;
    stack <bool> temp;
    while(!conditions.empty())
    {
        val=conditions.top();
        temp.push(val);
        conditions.pop();
        if(!val) {
            res = false;
            break;
        }
    }
    while(!temp.empty())
    {
        val=temp.top();
        temp.pop();
        conditions.push(val);
    }
    return res;
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveDefine()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorDeclarationContext* d = dynamic_cast<myPreprocessorParser::PreprocessorDeclarationContext*>(c);
    ConditionalSymbols.insert(d->CONDITIONAL_SYMBOL()->getText());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveUndef()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorDeclarationContext* d = dynamic_cast<myPreprocessorParser::PreprocessorDeclarationContext*>(c);
    ConditionalSymbols.erase(d->CONDITIONAL_SYMBOL()->getText());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveIf()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorConditionalContext* d = dynamic_cast<myPreprocessorParser::PreprocessorConditionalContext*>(c);
    d->value = d->expr->value.compare("true") && AllConditions();
    conditions.push(d->expr->value.compare("true"));
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveElif()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorConditionalContext* d = dynamic_cast<myPreprocessorParser::PreprocessorConditionalContext*>(c);
   
    if (!conditions.top())
    {
        conditions.pop();
        d->value = d->expr->value.compare("true") && AllConditions();
        conditions.push(d->expr->value.compare("true"));
    }
    else
    {
        d->value = false;
    }
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveElse()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorConditionalContext* d = dynamic_cast<myPreprocessorParser::PreprocessorConditionalContext*>(c);
    if (!conditions.top())
    {
        conditions.pop();
        d->value = true && AllConditions();
        conditions.push(true);
    }
    else
    {
        d->value = false;
    }
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveEndif()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorConditionalContext* d = dynamic_cast<myPreprocessorParser::PreprocessorConditionalContext*>(c);
    conditions.pop();
    d->value = conditions.top();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveLine()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorLineContext* d = dynamic_cast<myPreprocessorParser::PreprocessorLineContext*>(c);
    //myPreprocessorParser::PreprocessorLineContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorLineContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveError()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorDiagnosticContext* d = dynamic_cast<myPreprocessorParser::PreprocessorDiagnosticContext*>(c);
    //myPreprocessorParser::PreprocessorDiagnosticContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorDiagnosticContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveWarning()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorDiagnosticContext* d = dynamic_cast<myPreprocessorParser::PreprocessorDiagnosticContext*>(c);
    //myPreprocessorParser::PreprocessorDiagnosticContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorDiagnosticContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveRegion()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorRegionContext* d = dynamic_cast<myPreprocessorParser::PreprocessorRegionContext*>(c);
    //myPreprocessorParser::PreprocessorRegionContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorRegionContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveEndregion()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorRegionContext* d = dynamic_cast<myPreprocessorParser::PreprocessorRegionContext*>(c);
    //myPreprocessorParser::PreprocessorRegionContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorRegionContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectivePragma()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorPragmaContext* d = dynamic_cast<myPreprocessorParser::PreprocessorPragmaContext*>(c);
    //myPreprocessorParser::PreprocessorPragmaContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorPragmaContext>(this->_ctx, this->getState());
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorDirectiveNullable()
{
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::PreprocessorNullableContext* d = dynamic_cast<myPreprocessorParser::PreprocessorNullableContext*>(c);
    //myPreprocessorParser::PreprocessorNullableContext *d = _tracker.createInstance<myPreprocessorParser::PreprocessorNullableContext>(this->_ctx, this->getState());
    
    d->value = AllConditions();
}

void myPreprocessorParserBase:: OnPreprocessorExpressionTrue()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = "true";
}

void myPreprocessorParserBase:: OnPreprocessorExpressionFalse()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = "false";
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalSymbol()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = ConditionalSymbols.find(d->CONDITIONAL_SYMBOL()->getText()) != ConditionalSymbols.end()? "true" : "false";
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalOpenParens()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = d->expr->value;
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalBang()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = d->expr->value.compare("true") ? "false" : "true";
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalEq()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    
    d->value = (d->expr1->value == d->expr2->value ? "true" : "false");
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalNe()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = (d->expr1->value != d->expr2->value ? "true" : "false");
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalAnd()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = (d->expr1->value.compare("true") && d->expr2->value.compare("true") ? "true" : "false");
}

void myPreprocessorParserBase:: OnPreprocessorExpressionConditionalOr()
{
    
    ParserRuleContext* c = this->_ctx;
    myPreprocessorParser::Preprocessor_expressionContext* d = dynamic_cast<myPreprocessorParser::Preprocessor_expressionContext*>(c);
    d->value = (d->expr1->value.compare("true") || d->expr2->value.compare("true") ? "true" : "false");
}

