
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParserListener.h"


/**
 * This class provides an empty implementation of myParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myParserBaseListener : public myParserListener {
public:

  virtual void enterProgram(myParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(myParser::ProgramContext * /*ctx*/) override { }

  virtual void enterSourceElement(myParser::SourceElementContext * /*ctx*/) override { }
  virtual void exitSourceElement(myParser::SourceElementContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatementList(myParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(myParser::StatementListContext * /*ctx*/) override { }

  virtual void enterImportStatement(myParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(myParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterImportFromBlock(myParser::ImportFromBlockContext * /*ctx*/) override { }
  virtual void exitImportFromBlock(myParser::ImportFromBlockContext * /*ctx*/) override { }

  virtual void enterModuleItems(myParser::ModuleItemsContext * /*ctx*/) override { }
  virtual void exitModuleItems(myParser::ModuleItemsContext * /*ctx*/) override { }

  virtual void enterImportDefault(myParser::ImportDefaultContext * /*ctx*/) override { }
  virtual void exitImportDefault(myParser::ImportDefaultContext * /*ctx*/) override { }

  virtual void enterImportNamespace(myParser::ImportNamespaceContext * /*ctx*/) override { }
  virtual void exitImportNamespace(myParser::ImportNamespaceContext * /*ctx*/) override { }

  virtual void enterImportFrom(myParser::ImportFromContext * /*ctx*/) override { }
  virtual void exitImportFrom(myParser::ImportFromContext * /*ctx*/) override { }

  virtual void enterAliasName(myParser::AliasNameContext * /*ctx*/) override { }
  virtual void exitAliasName(myParser::AliasNameContext * /*ctx*/) override { }

  virtual void enterExportDeclaration(myParser::ExportDeclarationContext * /*ctx*/) override { }
  virtual void exitExportDeclaration(myParser::ExportDeclarationContext * /*ctx*/) override { }

  virtual void enterExportDefaultDeclaration(myParser::ExportDefaultDeclarationContext * /*ctx*/) override { }
  virtual void exitExportDefaultDeclaration(myParser::ExportDefaultDeclarationContext * /*ctx*/) override { }

  virtual void enterExportFromBlock(myParser::ExportFromBlockContext * /*ctx*/) override { }
  virtual void exitExportFromBlock(myParser::ExportFromBlockContext * /*ctx*/) override { }

  virtual void enterDeclaration(myParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(myParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVariableStatement(myParser::VariableStatementContext * /*ctx*/) override { }
  virtual void exitVariableStatement(myParser::VariableStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationList(myParser::VariableDeclarationListContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationList(myParser::VariableDeclarationListContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyStatement_(myParser::EmptyStatement_Context * /*ctx*/) override { }
  virtual void exitEmptyStatement_(myParser::EmptyStatement_Context * /*ctx*/) override { }

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(myParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(myParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(myParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(myParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(myParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(myParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForInStatement(myParser::ForInStatementContext * /*ctx*/) override { }
  virtual void exitForInStatement(myParser::ForInStatementContext * /*ctx*/) override { }

  virtual void enterForOfStatement(myParser::ForOfStatementContext * /*ctx*/) override { }
  virtual void exitForOfStatement(myParser::ForOfStatementContext * /*ctx*/) override { }

  virtual void enterVarModifier(myParser::VarModifierContext * /*ctx*/) override { }
  virtual void exitVarModifier(myParser::VarModifierContext * /*ctx*/) override { }

  virtual void enterContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterWithStatement(myParser::WithStatementContext * /*ctx*/) override { }
  virtual void exitWithStatement(myParser::WithStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseBlock(myParser::CaseBlockContext * /*ctx*/) override { }
  virtual void exitCaseBlock(myParser::CaseBlockContext * /*ctx*/) override { }

  virtual void enterCaseClauses(myParser::CaseClausesContext * /*ctx*/) override { }
  virtual void exitCaseClauses(myParser::CaseClausesContext * /*ctx*/) override { }

  virtual void enterCaseClause(myParser::CaseClauseContext * /*ctx*/) override { }
  virtual void exitCaseClause(myParser::CaseClauseContext * /*ctx*/) override { }

  virtual void enterDefaultClause(myParser::DefaultClauseContext * /*ctx*/) override { }
  virtual void exitDefaultClause(myParser::DefaultClauseContext * /*ctx*/) override { }

  virtual void enterLabelledStatement(myParser::LabelledStatementContext * /*ctx*/) override { }
  virtual void exitLabelledStatement(myParser::LabelledStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(myParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(myParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatchProduction(myParser::CatchProductionContext * /*ctx*/) override { }
  virtual void exitCatchProduction(myParser::CatchProductionContext * /*ctx*/) override { }

  virtual void enterFinallyProduction(myParser::FinallyProductionContext * /*ctx*/) override { }
  virtual void exitFinallyProduction(myParser::FinallyProductionContext * /*ctx*/) override { }

  virtual void enterDebuggerStatement(myParser::DebuggerStatementContext * /*ctx*/) override { }
  virtual void exitDebuggerStatement(myParser::DebuggerStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassTail(myParser::ClassTailContext * /*ctx*/) override { }
  virtual void exitClassTail(myParser::ClassTailContext * /*ctx*/) override { }

  virtual void enterClassElement(myParser::ClassElementContext * /*ctx*/) override { }
  virtual void exitClassElement(myParser::ClassElementContext * /*ctx*/) override { }

  virtual void enterMethodDefinition(myParser::MethodDefinitionContext * /*ctx*/) override { }
  virtual void exitMethodDefinition(myParser::MethodDefinitionContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameterArg(myParser::FormalParameterArgContext * /*ctx*/) override { }
  virtual void exitFormalParameterArg(myParser::FormalParameterArgContext * /*ctx*/) override { }

  virtual void enterLastFormalParameterArg(myParser::LastFormalParameterArgContext * /*ctx*/) override { }
  virtual void exitLastFormalParameterArg(myParser::LastFormalParameterArgContext * /*ctx*/) override { }

  virtual void enterFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterSourceElements(myParser::SourceElementsContext * /*ctx*/) override { }
  virtual void exitSourceElements(myParser::SourceElementsContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(myParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(myParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterElementList(myParser::ElementListContext * /*ctx*/) override { }
  virtual void exitElementList(myParser::ElementListContext * /*ctx*/) override { }

  virtual void enterArrayElement(myParser::ArrayElementContext * /*ctx*/) override { }
  virtual void exitArrayElement(myParser::ArrayElementContext * /*ctx*/) override { }

  virtual void enterPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterFunctionProperty(myParser::FunctionPropertyContext * /*ctx*/) override { }
  virtual void exitFunctionProperty(myParser::FunctionPropertyContext * /*ctx*/) override { }

  virtual void enterPropertyGetter(myParser::PropertyGetterContext * /*ctx*/) override { }
  virtual void exitPropertyGetter(myParser::PropertyGetterContext * /*ctx*/) override { }

  virtual void enterPropertySetter(myParser::PropertySetterContext * /*ctx*/) override { }
  virtual void exitPropertySetter(myParser::PropertySetterContext * /*ctx*/) override { }

  virtual void enterPropertyShorthand(myParser::PropertyShorthandContext * /*ctx*/) override { }
  virtual void exitPropertyShorthand(myParser::PropertyShorthandContext * /*ctx*/) override { }

  virtual void enterPropertyName(myParser::PropertyNameContext * /*ctx*/) override { }
  virtual void exitPropertyName(myParser::PropertyNameContext * /*ctx*/) override { }

  virtual void enterArguments(myParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(myParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterArgument(myParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(myParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpressionSequence(myParser::ExpressionSequenceContext * /*ctx*/) override { }
  virtual void exitExpressionSequence(myParser::ExpressionSequenceContext * /*ctx*/) override { }

  virtual void enterTemplateStringExpression(myParser::TemplateStringExpressionContext * /*ctx*/) override { }
  virtual void exitTemplateStringExpression(myParser::TemplateStringExpressionContext * /*ctx*/) override { }

  virtual void enterTernaryExpression(myParser::TernaryExpressionContext * /*ctx*/) override { }
  virtual void exitTernaryExpression(myParser::TernaryExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterPowerExpression(myParser::PowerExpressionContext * /*ctx*/) override { }
  virtual void exitPowerExpression(myParser::PowerExpressionContext * /*ctx*/) override { }

  virtual void enterPreIncrementExpression(myParser::PreIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreIncrementExpression(myParser::PreIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterObjectLiteralExpression(myParser::ObjectLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitObjectLiteralExpression(myParser::ObjectLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterMetaExpression(myParser::MetaExpressionContext * /*ctx*/) override { }
  virtual void exitMetaExpression(myParser::MetaExpressionContext * /*ctx*/) override { }

  virtual void enterInExpression(myParser::InExpressionContext * /*ctx*/) override { }
  virtual void exitInExpression(myParser::InExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterOptionalChainExpression(myParser::OptionalChainExpressionContext * /*ctx*/) override { }
  virtual void exitOptionalChainExpression(myParser::OptionalChainExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(myParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(myParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterPreDecreaseExpression(myParser::PreDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPreDecreaseExpression(myParser::PreDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterArgumentsExpression(myParser::ArgumentsExpressionContext * /*ctx*/) override { }
  virtual void exitArgumentsExpression(myParser::ArgumentsExpressionContext * /*ctx*/) override { }

  virtual void enterAwaitExpression(myParser::AwaitExpressionContext * /*ctx*/) override { }
  virtual void exitAwaitExpression(myParser::AwaitExpressionContext * /*ctx*/) override { }

  virtual void enterThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }
  virtual void exitThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionExpression(myParser::FunctionExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionExpression(myParser::FunctionExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(myParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(myParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterPostDecreaseExpression(myParser::PostDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPostDecreaseExpression(myParser::PostDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterInstanceofExpression(myParser::InstanceofExpressionContext * /*ctx*/) override { }
  virtual void exitInstanceofExpression(myParser::InstanceofExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryPlusExpression(myParser::UnaryPlusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryPlusExpression(myParser::UnaryPlusExpressionContext * /*ctx*/) override { }

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterImportExpression(myParser::ImportExpressionContext * /*ctx*/) override { }
  virtual void exitImportExpression(myParser::ImportExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterBitXOrExpression(myParser::BitXOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitXOrExpression(myParser::BitXOrExpressionContext * /*ctx*/) override { }

  virtual void enterSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }
  virtual void exitSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterBitShiftExpression(myParser::BitShiftExpressionContext * /*ctx*/) override { }
  virtual void exitBitShiftExpression(myParser::BitShiftExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterPostIncrementExpression(myParser::PostIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementExpression(myParser::PostIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterYieldExpression(myParser::YieldExpressionContext * /*ctx*/) override { }
  virtual void exitYieldExpression(myParser::YieldExpressionContext * /*ctx*/) override { }

  virtual void enterBitNotExpression(myParser::BitNotExpressionContext * /*ctx*/) override { }
  virtual void exitBitNotExpression(myParser::BitNotExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterArrayLiteralExpression(myParser::ArrayLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitArrayLiteralExpression(myParser::ArrayLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterMemberDotExpression(myParser::MemberDotExpressionContext * /*ctx*/) override { }
  virtual void exitMemberDotExpression(myParser::MemberDotExpressionContext * /*ctx*/) override { }

  virtual void enterClassExpression(myParser::ClassExpressionContext * /*ctx*/) override { }
  virtual void exitClassExpression(myParser::ClassExpressionContext * /*ctx*/) override { }

  virtual void enterMemberIndexExpression(myParser::MemberIndexExpressionContext * /*ctx*/) override { }
  virtual void exitMemberIndexExpression(myParser::MemberIndexExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(myParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(myParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterBitAndExpression(myParser::BitAndExpressionContext * /*ctx*/) override { }
  virtual void exitBitAndExpression(myParser::BitAndExpressionContext * /*ctx*/) override { }

  virtual void enterBitOrExpression(myParser::BitOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitOrExpression(myParser::BitOrExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterVoidExpression(myParser::VoidExpressionContext * /*ctx*/) override { }
  virtual void exitVoidExpression(myParser::VoidExpressionContext * /*ctx*/) override { }

  virtual void enterCoalesceExpression(myParser::CoalesceExpressionContext * /*ctx*/) override { }
  virtual void exitCoalesceExpression(myParser::CoalesceExpressionContext * /*ctx*/) override { }

  virtual void enterAssignable(myParser::AssignableContext * /*ctx*/) override { }
  virtual void exitAssignable(myParser::AssignableContext * /*ctx*/) override { }

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(myParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(myParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterAnonymousFunctionDecl(myParser::AnonymousFunctionDeclContext * /*ctx*/) override { }
  virtual void exitAnonymousFunctionDecl(myParser::AnonymousFunctionDeclContext * /*ctx*/) override { }

  virtual void enterArrowFunction(myParser::ArrowFunctionContext * /*ctx*/) override { }
  virtual void exitArrowFunction(myParser::ArrowFunctionContext * /*ctx*/) override { }

  virtual void enterArrowFunctionParameters(myParser::ArrowFunctionParametersContext * /*ctx*/) override { }
  virtual void exitArrowFunctionParameters(myParser::ArrowFunctionParametersContext * /*ctx*/) override { }

  virtual void enterArrowFunctionBody(myParser::ArrowFunctionBodyContext * /*ctx*/) override { }
  virtual void exitArrowFunctionBody(myParser::ArrowFunctionBodyContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringLiteral(myParser::TemplateStringLiteralContext * /*ctx*/) override { }
  virtual void exitTemplateStringLiteral(myParser::TemplateStringLiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringAtom(myParser::TemplateStringAtomContext * /*ctx*/) override { }
  virtual void exitTemplateStringAtom(myParser::TemplateStringAtomContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(myParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(myParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterBigintLiteral(myParser::BigintLiteralContext * /*ctx*/) override { }
  virtual void exitBigintLiteral(myParser::BigintLiteralContext * /*ctx*/) override { }

  virtual void enterGetter(myParser::GetterContext * /*ctx*/) override { }
  virtual void exitGetter(myParser::GetterContext * /*ctx*/) override { }

  virtual void enterSetter(myParser::SetterContext * /*ctx*/) override { }
  virtual void exitSetter(myParser::SetterContext * /*ctx*/) override { }

  virtual void enterIdentifierName(myParser::IdentifierNameContext * /*ctx*/) override { }
  virtual void exitIdentifierName(myParser::IdentifierNameContext * /*ctx*/) override { }

  virtual void enterIdentifier(myParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(myParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterReservedWord(myParser::ReservedWordContext * /*ctx*/) override { }
  virtual void exitReservedWord(myParser::ReservedWordContext * /*ctx*/) override { }

  virtual void enterKeyword(myParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(myParser::KeywordContext * /*ctx*/) override { }

  virtual void enterLet_(myParser::Let_Context * /*ctx*/) override { }
  virtual void exitLet_(myParser::Let_Context * /*ctx*/) override { }

  virtual void enterEos(myParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(myParser::EosContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

