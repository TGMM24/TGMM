#include "myParser.h"

using namespace antlr4;

bool myParserBase::IsLocalVariableDeclaration(){
    if (typeid(this->_ctx) != typeid(myParser::Local_variable_declarationContext)) {
        return false;
    }
    myParser::Local_variable_declarationContext* local_var_decl = _tracker.createInstance<myParser::Local_variable_declarationContext>(_ctx, getState());
    if (local_var_decl == nullptr) return true;
    myParser::Local_variable_typeContext* local_variable_type = local_var_decl->local_variable_type();
    if (local_variable_type == nullptr) return true;
    if (local_variable_type->getText().compare("var")) return false;
    return true;
}