
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(myParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(myParser::ProgramContext *ctx) = 0;

  virtual void enterSourceElement(myParser::SourceElementContext *ctx) = 0;
  virtual void exitSourceElement(myParser::SourceElementContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterStatementList(myParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(myParser::StatementListContext *ctx) = 0;

  virtual void enterImportStatement(myParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(myParser::ImportStatementContext *ctx) = 0;

  virtual void enterImportFromBlock(myParser::ImportFromBlockContext *ctx) = 0;
  virtual void exitImportFromBlock(myParser::ImportFromBlockContext *ctx) = 0;

  virtual void enterModuleItems(myParser::ModuleItemsContext *ctx) = 0;
  virtual void exitModuleItems(myParser::ModuleItemsContext *ctx) = 0;

  virtual void enterImportDefault(myParser::ImportDefaultContext *ctx) = 0;
  virtual void exitImportDefault(myParser::ImportDefaultContext *ctx) = 0;

  virtual void enterImportNamespace(myParser::ImportNamespaceContext *ctx) = 0;
  virtual void exitImportNamespace(myParser::ImportNamespaceContext *ctx) = 0;

  virtual void enterImportFrom(myParser::ImportFromContext *ctx) = 0;
  virtual void exitImportFrom(myParser::ImportFromContext *ctx) = 0;

  virtual void enterAliasName(myParser::AliasNameContext *ctx) = 0;
  virtual void exitAliasName(myParser::AliasNameContext *ctx) = 0;

  virtual void enterExportDeclaration(myParser::ExportDeclarationContext *ctx) = 0;
  virtual void exitExportDeclaration(myParser::ExportDeclarationContext *ctx) = 0;

  virtual void enterExportDefaultDeclaration(myParser::ExportDefaultDeclarationContext *ctx) = 0;
  virtual void exitExportDefaultDeclaration(myParser::ExportDefaultDeclarationContext *ctx) = 0;

  virtual void enterExportFromBlock(myParser::ExportFromBlockContext *ctx) = 0;
  virtual void exitExportFromBlock(myParser::ExportFromBlockContext *ctx) = 0;

  virtual void enterDeclaration(myParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(myParser::DeclarationContext *ctx) = 0;

  virtual void enterVariableStatement(myParser::VariableStatementContext *ctx) = 0;
  virtual void exitVariableStatement(myParser::VariableStatementContext *ctx) = 0;

  virtual void enterVariableDeclarationList(myParser::VariableDeclarationListContext *ctx) = 0;
  virtual void exitVariableDeclarationList(myParser::VariableDeclarationListContext *ctx) = 0;

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterEmptyStatement_(myParser::EmptyStatement_Context *ctx) = 0;
  virtual void exitEmptyStatement_(myParser::EmptyStatement_Context *ctx) = 0;

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(myParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(myParser::IfStatementContext *ctx) = 0;

  virtual void enterDoStatement(myParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(myParser::DoStatementContext *ctx) = 0;

  virtual void enterWhileStatement(myParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(myParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(myParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(myParser::ForStatementContext *ctx) = 0;

  virtual void enterForInStatement(myParser::ForInStatementContext *ctx) = 0;
  virtual void exitForInStatement(myParser::ForInStatementContext *ctx) = 0;

  virtual void enterForOfStatement(myParser::ForOfStatementContext *ctx) = 0;
  virtual void exitForOfStatement(myParser::ForOfStatementContext *ctx) = 0;

  virtual void enterVarModifier(myParser::VarModifierContext *ctx) = 0;
  virtual void exitVarModifier(myParser::VarModifierContext *ctx) = 0;

  virtual void enterContinueStatement(myParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(myParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBreakStatement(myParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(myParser::BreakStatementContext *ctx) = 0;

  virtual void enterReturnStatement(myParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(myParser::ReturnStatementContext *ctx) = 0;

  virtual void enterYieldStatement(myParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(myParser::YieldStatementContext *ctx) = 0;

  virtual void enterWithStatement(myParser::WithStatementContext *ctx) = 0;
  virtual void exitWithStatement(myParser::WithStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseBlock(myParser::CaseBlockContext *ctx) = 0;
  virtual void exitCaseBlock(myParser::CaseBlockContext *ctx) = 0;

  virtual void enterCaseClauses(myParser::CaseClausesContext *ctx) = 0;
  virtual void exitCaseClauses(myParser::CaseClausesContext *ctx) = 0;

  virtual void enterCaseClause(myParser::CaseClauseContext *ctx) = 0;
  virtual void exitCaseClause(myParser::CaseClauseContext *ctx) = 0;

  virtual void enterDefaultClause(myParser::DefaultClauseContext *ctx) = 0;
  virtual void exitDefaultClause(myParser::DefaultClauseContext *ctx) = 0;

  virtual void enterLabelledStatement(myParser::LabelledStatementContext *ctx) = 0;
  virtual void exitLabelledStatement(myParser::LabelledStatementContext *ctx) = 0;

  virtual void enterThrowStatement(myParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(myParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(myParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(myParser::TryStatementContext *ctx) = 0;

  virtual void enterCatchProduction(myParser::CatchProductionContext *ctx) = 0;
  virtual void exitCatchProduction(myParser::CatchProductionContext *ctx) = 0;

  virtual void enterFinallyProduction(myParser::FinallyProductionContext *ctx) = 0;
  virtual void exitFinallyProduction(myParser::FinallyProductionContext *ctx) = 0;

  virtual void enterDebuggerStatement(myParser::DebuggerStatementContext *ctx) = 0;
  virtual void exitDebuggerStatement(myParser::DebuggerStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassTail(myParser::ClassTailContext *ctx) = 0;
  virtual void exitClassTail(myParser::ClassTailContext *ctx) = 0;

  virtual void enterClassElement(myParser::ClassElementContext *ctx) = 0;
  virtual void exitClassElement(myParser::ClassElementContext *ctx) = 0;

  virtual void enterMethodDefinition(myParser::MethodDefinitionContext *ctx) = 0;
  virtual void exitMethodDefinition(myParser::MethodDefinitionContext *ctx) = 0;

  virtual void enterFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameterArg(myParser::FormalParameterArgContext *ctx) = 0;
  virtual void exitFormalParameterArg(myParser::FormalParameterArgContext *ctx) = 0;

  virtual void enterLastFormalParameterArg(myParser::LastFormalParameterArgContext *ctx) = 0;
  virtual void exitLastFormalParameterArg(myParser::LastFormalParameterArgContext *ctx) = 0;

  virtual void enterFunctionBody(myParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(myParser::FunctionBodyContext *ctx) = 0;

  virtual void enterSourceElements(myParser::SourceElementsContext *ctx) = 0;
  virtual void exitSourceElements(myParser::SourceElementsContext *ctx) = 0;

  virtual void enterArrayLiteral(myParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(myParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterElementList(myParser::ElementListContext *ctx) = 0;
  virtual void exitElementList(myParser::ElementListContext *ctx) = 0;

  virtual void enterArrayElement(myParser::ArrayElementContext *ctx) = 0;
  virtual void exitArrayElement(myParser::ArrayElementContext *ctx) = 0;

  virtual void enterPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterFunctionProperty(myParser::FunctionPropertyContext *ctx) = 0;
  virtual void exitFunctionProperty(myParser::FunctionPropertyContext *ctx) = 0;

  virtual void enterPropertyGetter(myParser::PropertyGetterContext *ctx) = 0;
  virtual void exitPropertyGetter(myParser::PropertyGetterContext *ctx) = 0;

  virtual void enterPropertySetter(myParser::PropertySetterContext *ctx) = 0;
  virtual void exitPropertySetter(myParser::PropertySetterContext *ctx) = 0;

  virtual void enterPropertyShorthand(myParser::PropertyShorthandContext *ctx) = 0;
  virtual void exitPropertyShorthand(myParser::PropertyShorthandContext *ctx) = 0;

  virtual void enterPropertyName(myParser::PropertyNameContext *ctx) = 0;
  virtual void exitPropertyName(myParser::PropertyNameContext *ctx) = 0;

  virtual void enterArguments(myParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(myParser::ArgumentsContext *ctx) = 0;

  virtual void enterArgument(myParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(myParser::ArgumentContext *ctx) = 0;

  virtual void enterExpressionSequence(myParser::ExpressionSequenceContext *ctx) = 0;
  virtual void exitExpressionSequence(myParser::ExpressionSequenceContext *ctx) = 0;

  virtual void enterTemplateStringExpression(myParser::TemplateStringExpressionContext *ctx) = 0;
  virtual void exitTemplateStringExpression(myParser::TemplateStringExpressionContext *ctx) = 0;

  virtual void enterTernaryExpression(myParser::TernaryExpressionContext *ctx) = 0;
  virtual void exitTernaryExpression(myParser::TernaryExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterPowerExpression(myParser::PowerExpressionContext *ctx) = 0;
  virtual void exitPowerExpression(myParser::PowerExpressionContext *ctx) = 0;

  virtual void enterPreIncrementExpression(myParser::PreIncrementExpressionContext *ctx) = 0;
  virtual void exitPreIncrementExpression(myParser::PreIncrementExpressionContext *ctx) = 0;

  virtual void enterObjectLiteralExpression(myParser::ObjectLiteralExpressionContext *ctx) = 0;
  virtual void exitObjectLiteralExpression(myParser::ObjectLiteralExpressionContext *ctx) = 0;

  virtual void enterMetaExpression(myParser::MetaExpressionContext *ctx) = 0;
  virtual void exitMetaExpression(myParser::MetaExpressionContext *ctx) = 0;

  virtual void enterInExpression(myParser::InExpressionContext *ctx) = 0;
  virtual void exitInExpression(myParser::InExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterOptionalChainExpression(myParser::OptionalChainExpressionContext *ctx) = 0;
  virtual void exitOptionalChainExpression(myParser::OptionalChainExpressionContext *ctx) = 0;

  virtual void enterNotExpression(myParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(myParser::NotExpressionContext *ctx) = 0;

  virtual void enterPreDecreaseExpression(myParser::PreDecreaseExpressionContext *ctx) = 0;
  virtual void exitPreDecreaseExpression(myParser::PreDecreaseExpressionContext *ctx) = 0;

  virtual void enterArgumentsExpression(myParser::ArgumentsExpressionContext *ctx) = 0;
  virtual void exitArgumentsExpression(myParser::ArgumentsExpressionContext *ctx) = 0;

  virtual void enterAwaitExpression(myParser::AwaitExpressionContext *ctx) = 0;
  virtual void exitAwaitExpression(myParser::AwaitExpressionContext *ctx) = 0;

  virtual void enterThisExpression(myParser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(myParser::ThisExpressionContext *ctx) = 0;

  virtual void enterFunctionExpression(myParser::FunctionExpressionContext *ctx) = 0;
  virtual void exitFunctionExpression(myParser::FunctionExpressionContext *ctx) = 0;

  virtual void enterUnaryMinusExpression(myParser::UnaryMinusExpressionContext *ctx) = 0;
  virtual void exitUnaryMinusExpression(myParser::UnaryMinusExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterPostDecreaseExpression(myParser::PostDecreaseExpressionContext *ctx) = 0;
  virtual void exitPostDecreaseExpression(myParser::PostDecreaseExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterInstanceofExpression(myParser::InstanceofExpressionContext *ctx) = 0;
  virtual void exitInstanceofExpression(myParser::InstanceofExpressionContext *ctx) = 0;

  virtual void enterUnaryPlusExpression(myParser::UnaryPlusExpressionContext *ctx) = 0;
  virtual void exitUnaryPlusExpression(myParser::UnaryPlusExpressionContext *ctx) = 0;

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterImportExpression(myParser::ImportExpressionContext *ctx) = 0;
  virtual void exitImportExpression(myParser::ImportExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterBitXOrExpression(myParser::BitXOrExpressionContext *ctx) = 0;
  virtual void exitBitXOrExpression(myParser::BitXOrExpressionContext *ctx) = 0;

  virtual void enterSuperExpression(myParser::SuperExpressionContext *ctx) = 0;
  virtual void exitSuperExpression(myParser::SuperExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterBitShiftExpression(myParser::BitShiftExpressionContext *ctx) = 0;
  virtual void exitBitShiftExpression(myParser::BitShiftExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterPostIncrementExpression(myParser::PostIncrementExpressionContext *ctx) = 0;
  virtual void exitPostIncrementExpression(myParser::PostIncrementExpressionContext *ctx) = 0;

  virtual void enterYieldExpression(myParser::YieldExpressionContext *ctx) = 0;
  virtual void exitYieldExpression(myParser::YieldExpressionContext *ctx) = 0;

  virtual void enterBitNotExpression(myParser::BitNotExpressionContext *ctx) = 0;
  virtual void exitBitNotExpression(myParser::BitNotExpressionContext *ctx) = 0;

  virtual void enterNewExpression(myParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(myParser::NewExpressionContext *ctx) = 0;

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterArrayLiteralExpression(myParser::ArrayLiteralExpressionContext *ctx) = 0;
  virtual void exitArrayLiteralExpression(myParser::ArrayLiteralExpressionContext *ctx) = 0;

  virtual void enterMemberDotExpression(myParser::MemberDotExpressionContext *ctx) = 0;
  virtual void exitMemberDotExpression(myParser::MemberDotExpressionContext *ctx) = 0;

  virtual void enterClassExpression(myParser::ClassExpressionContext *ctx) = 0;
  virtual void exitClassExpression(myParser::ClassExpressionContext *ctx) = 0;

  virtual void enterMemberIndexExpression(myParser::MemberIndexExpressionContext *ctx) = 0;
  virtual void exitMemberIndexExpression(myParser::MemberIndexExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(myParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(myParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBitAndExpression(myParser::BitAndExpressionContext *ctx) = 0;
  virtual void exitBitAndExpression(myParser::BitAndExpressionContext *ctx) = 0;

  virtual void enterBitOrExpression(myParser::BitOrExpressionContext *ctx) = 0;
  virtual void exitBitOrExpression(myParser::BitOrExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext *ctx) = 0;
  virtual void exitAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext *ctx) = 0;

  virtual void enterVoidExpression(myParser::VoidExpressionContext *ctx) = 0;
  virtual void exitVoidExpression(myParser::VoidExpressionContext *ctx) = 0;

  virtual void enterCoalesceExpression(myParser::CoalesceExpressionContext *ctx) = 0;
  virtual void exitCoalesceExpression(myParser::CoalesceExpressionContext *ctx) = 0;

  virtual void enterAssignable(myParser::AssignableContext *ctx) = 0;
  virtual void exitAssignable(myParser::AssignableContext *ctx) = 0;

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;

  virtual void enterFunctionDecl(myParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(myParser::FunctionDeclContext *ctx) = 0;

  virtual void enterAnonymousFunctionDecl(myParser::AnonymousFunctionDeclContext *ctx) = 0;
  virtual void exitAnonymousFunctionDecl(myParser::AnonymousFunctionDeclContext *ctx) = 0;

  virtual void enterArrowFunction(myParser::ArrowFunctionContext *ctx) = 0;
  virtual void exitArrowFunction(myParser::ArrowFunctionContext *ctx) = 0;

  virtual void enterArrowFunctionParameters(myParser::ArrowFunctionParametersContext *ctx) = 0;
  virtual void exitArrowFunctionParameters(myParser::ArrowFunctionParametersContext *ctx) = 0;

  virtual void enterArrowFunctionBody(myParser::ArrowFunctionBodyContext *ctx) = 0;
  virtual void exitArrowFunctionBody(myParser::ArrowFunctionBodyContext *ctx) = 0;

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;

  virtual void enterTemplateStringLiteral(myParser::TemplateStringLiteralContext *ctx) = 0;
  virtual void exitTemplateStringLiteral(myParser::TemplateStringLiteralContext *ctx) = 0;

  virtual void enterTemplateStringAtom(myParser::TemplateStringAtomContext *ctx) = 0;
  virtual void exitTemplateStringAtom(myParser::TemplateStringAtomContext *ctx) = 0;

  virtual void enterNumericLiteral(myParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(myParser::NumericLiteralContext *ctx) = 0;

  virtual void enterBigintLiteral(myParser::BigintLiteralContext *ctx) = 0;
  virtual void exitBigintLiteral(myParser::BigintLiteralContext *ctx) = 0;

  virtual void enterGetter(myParser::GetterContext *ctx) = 0;
  virtual void exitGetter(myParser::GetterContext *ctx) = 0;

  virtual void enterSetter(myParser::SetterContext *ctx) = 0;
  virtual void exitSetter(myParser::SetterContext *ctx) = 0;

  virtual void enterIdentifierName(myParser::IdentifierNameContext *ctx) = 0;
  virtual void exitIdentifierName(myParser::IdentifierNameContext *ctx) = 0;

  virtual void enterIdentifier(myParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(myParser::IdentifierContext *ctx) = 0;

  virtual void enterReservedWord(myParser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(myParser::ReservedWordContext *ctx) = 0;

  virtual void enterKeyword(myParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(myParser::KeywordContext *ctx) = 0;

  virtual void enterLet_(myParser::Let_Context *ctx) = 0;
  virtual void exitLet_(myParser::Let_Context *ctx) = 0;

  virtual void enterEos(myParser::EosContext *ctx) = 0;
  virtual void exitEos(myParser::EosContext *ctx) = 0;


};

