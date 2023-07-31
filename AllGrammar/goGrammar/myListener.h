
// Generated from my.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSourceFile(myParser::SourceFileContext *ctx) = 0;
  virtual void exitSourceFile(myParser::SourceFileContext *ctx) = 0;

  virtual void enterPackageClause(myParser::PackageClauseContext *ctx) = 0;
  virtual void exitPackageClause(myParser::PackageClauseContext *ctx) = 0;

  virtual void enterImportDecl(myParser::ImportDeclContext *ctx) = 0;
  virtual void exitImportDecl(myParser::ImportDeclContext *ctx) = 0;

  virtual void enterImportSpec(myParser::ImportSpecContext *ctx) = 0;
  virtual void exitImportSpec(myParser::ImportSpecContext *ctx) = 0;

  virtual void enterImportPath(myParser::ImportPathContext *ctx) = 0;
  virtual void exitImportPath(myParser::ImportPathContext *ctx) = 0;

  virtual void enterTopLevelDecl(myParser::TopLevelDeclContext *ctx) = 0;
  virtual void exitTopLevelDecl(myParser::TopLevelDeclContext *ctx) = 0;

  virtual void enterDeclaration(myParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(myParser::DeclarationContext *ctx) = 0;

  virtual void enterConstDecl(myParser::ConstDeclContext *ctx) = 0;
  virtual void exitConstDecl(myParser::ConstDeclContext *ctx) = 0;

  virtual void enterConstSpec(myParser::ConstSpecContext *ctx) = 0;
  virtual void exitConstSpec(myParser::ConstSpecContext *ctx) = 0;

  virtual void enterIdentifierList(myParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(myParser::IdentifierListContext *ctx) = 0;

  virtual void enterExpressionList(myParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(myParser::ExpressionListContext *ctx) = 0;

  virtual void enterTypeDecl(myParser::TypeDeclContext *ctx) = 0;
  virtual void exitTypeDecl(myParser::TypeDeclContext *ctx) = 0;

  virtual void enterTypeSpec(myParser::TypeSpecContext *ctx) = 0;
  virtual void exitTypeSpec(myParser::TypeSpecContext *ctx) = 0;

  virtual void enterFunctionDecl(myParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(myParser::FunctionDeclContext *ctx) = 0;

  virtual void enterFunction(myParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(myParser::FunctionContext *ctx) = 0;

  virtual void enterMethodDecl(myParser::MethodDeclContext *ctx) = 0;
  virtual void exitMethodDecl(myParser::MethodDeclContext *ctx) = 0;

  virtual void enterReceiver(myParser::ReceiverContext *ctx) = 0;
  virtual void exitReceiver(myParser::ReceiverContext *ctx) = 0;

  virtual void enterVarDecl(myParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(myParser::VarDeclContext *ctx) = 0;

  virtual void enterVarSpec(myParser::VarSpecContext *ctx) = 0;
  virtual void exitVarSpec(myParser::VarSpecContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterStatementList(myParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(myParser::StatementListContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterSimpleStmt(myParser::SimpleStmtContext *ctx) = 0;
  virtual void exitSimpleStmt(myParser::SimpleStmtContext *ctx) = 0;

  virtual void enterExpressionStmt(myParser::ExpressionStmtContext *ctx) = 0;
  virtual void exitExpressionStmt(myParser::ExpressionStmtContext *ctx) = 0;

  virtual void enterSendStmt(myParser::SendStmtContext *ctx) = 0;
  virtual void exitSendStmt(myParser::SendStmtContext *ctx) = 0;

  virtual void enterIncDecStmt(myParser::IncDecStmtContext *ctx) = 0;
  virtual void exitIncDecStmt(myParser::IncDecStmtContext *ctx) = 0;

  virtual void enterAssignment(myParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(myParser::AssignmentContext *ctx) = 0;

  virtual void enterAssign_op(myParser::Assign_opContext *ctx) = 0;
  virtual void exitAssign_op(myParser::Assign_opContext *ctx) = 0;

  virtual void enterShortVarDecl(myParser::ShortVarDeclContext *ctx) = 0;
  virtual void exitShortVarDecl(myParser::ShortVarDeclContext *ctx) = 0;

  virtual void enterEmptyStmt(myParser::EmptyStmtContext *ctx) = 0;
  virtual void exitEmptyStmt(myParser::EmptyStmtContext *ctx) = 0;

  virtual void enterLabeledStmt(myParser::LabeledStmtContext *ctx) = 0;
  virtual void exitLabeledStmt(myParser::LabeledStmtContext *ctx) = 0;

  virtual void enterReturnStmt(myParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(myParser::ReturnStmtContext *ctx) = 0;

  virtual void enterBreakStmt(myParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(myParser::BreakStmtContext *ctx) = 0;

  virtual void enterContinueStmt(myParser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(myParser::ContinueStmtContext *ctx) = 0;

  virtual void enterGotoStmt(myParser::GotoStmtContext *ctx) = 0;
  virtual void exitGotoStmt(myParser::GotoStmtContext *ctx) = 0;

  virtual void enterFallthroughStmt(myParser::FallthroughStmtContext *ctx) = 0;
  virtual void exitFallthroughStmt(myParser::FallthroughStmtContext *ctx) = 0;

  virtual void enterDeferStmt(myParser::DeferStmtContext *ctx) = 0;
  virtual void exitDeferStmt(myParser::DeferStmtContext *ctx) = 0;

  virtual void enterIfStmt(myParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(myParser::IfStmtContext *ctx) = 0;

  virtual void enterSwitchStmt(myParser::SwitchStmtContext *ctx) = 0;
  virtual void exitSwitchStmt(myParser::SwitchStmtContext *ctx) = 0;

  virtual void enterExprSwitchStmt(myParser::ExprSwitchStmtContext *ctx) = 0;
  virtual void exitExprSwitchStmt(myParser::ExprSwitchStmtContext *ctx) = 0;

  virtual void enterExprCaseClause(myParser::ExprCaseClauseContext *ctx) = 0;
  virtual void exitExprCaseClause(myParser::ExprCaseClauseContext *ctx) = 0;

  virtual void enterExprSwitchCase(myParser::ExprSwitchCaseContext *ctx) = 0;
  virtual void exitExprSwitchCase(myParser::ExprSwitchCaseContext *ctx) = 0;

  virtual void enterTypeSwitchStmt(myParser::TypeSwitchStmtContext *ctx) = 0;
  virtual void exitTypeSwitchStmt(myParser::TypeSwitchStmtContext *ctx) = 0;

  virtual void enterTypeSwitchGuard(myParser::TypeSwitchGuardContext *ctx) = 0;
  virtual void exitTypeSwitchGuard(myParser::TypeSwitchGuardContext *ctx) = 0;

  virtual void enterTypeCaseClause(myParser::TypeCaseClauseContext *ctx) = 0;
  virtual void exitTypeCaseClause(myParser::TypeCaseClauseContext *ctx) = 0;

  virtual void enterTypeSwitchCase(myParser::TypeSwitchCaseContext *ctx) = 0;
  virtual void exitTypeSwitchCase(myParser::TypeSwitchCaseContext *ctx) = 0;

  virtual void enterTypeList(myParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(myParser::TypeListContext *ctx) = 0;

  virtual void enterSelectStmt(myParser::SelectStmtContext *ctx) = 0;
  virtual void exitSelectStmt(myParser::SelectStmtContext *ctx) = 0;

  virtual void enterCommClause(myParser::CommClauseContext *ctx) = 0;
  virtual void exitCommClause(myParser::CommClauseContext *ctx) = 0;

  virtual void enterCommCase(myParser::CommCaseContext *ctx) = 0;
  virtual void exitCommCase(myParser::CommCaseContext *ctx) = 0;

  virtual void enterRecvStmt(myParser::RecvStmtContext *ctx) = 0;
  virtual void exitRecvStmt(myParser::RecvStmtContext *ctx) = 0;

  virtual void enterForStmt(myParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(myParser::ForStmtContext *ctx) = 0;

  virtual void enterForClause(myParser::ForClauseContext *ctx) = 0;
  virtual void exitForClause(myParser::ForClauseContext *ctx) = 0;

  virtual void enterRangeClause(myParser::RangeClauseContext *ctx) = 0;
  virtual void exitRangeClause(myParser::RangeClauseContext *ctx) = 0;

  virtual void enterGoStmt(myParser::GoStmtContext *ctx) = 0;
  virtual void exitGoStmt(myParser::GoStmtContext *ctx) = 0;

  virtual void enterGoType(myParser::GoTypeContext *ctx) = 0;
  virtual void exitGoType(myParser::GoTypeContext *ctx) = 0;

  virtual void enterTypeName(myParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(myParser::TypeNameContext *ctx) = 0;

  virtual void enterTypeLit(myParser::TypeLitContext *ctx) = 0;
  virtual void exitTypeLit(myParser::TypeLitContext *ctx) = 0;

  virtual void enterArrayType(myParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(myParser::ArrayTypeContext *ctx) = 0;

  virtual void enterArrayLength(myParser::ArrayLengthContext *ctx) = 0;
  virtual void exitArrayLength(myParser::ArrayLengthContext *ctx) = 0;

  virtual void enterElementType(myParser::ElementTypeContext *ctx) = 0;
  virtual void exitElementType(myParser::ElementTypeContext *ctx) = 0;

  virtual void enterPointerType(myParser::PointerTypeContext *ctx) = 0;
  virtual void exitPointerType(myParser::PointerTypeContext *ctx) = 0;

  virtual void enterInterfaceType(myParser::InterfaceTypeContext *ctx) = 0;
  virtual void exitInterfaceType(myParser::InterfaceTypeContext *ctx) = 0;

  virtual void enterSliceType(myParser::SliceTypeContext *ctx) = 0;
  virtual void exitSliceType(myParser::SliceTypeContext *ctx) = 0;

  virtual void enterMapType(myParser::MapTypeContext *ctx) = 0;
  virtual void exitMapType(myParser::MapTypeContext *ctx) = 0;

  virtual void enterChannelType(myParser::ChannelTypeContext *ctx) = 0;
  virtual void exitChannelType(myParser::ChannelTypeContext *ctx) = 0;

  virtual void enterMethodSpec(myParser::MethodSpecContext *ctx) = 0;
  virtual void exitMethodSpec(myParser::MethodSpecContext *ctx) = 0;

  virtual void enterFunctionType(myParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(myParser::FunctionTypeContext *ctx) = 0;

  virtual void enterSignature(myParser::SignatureContext *ctx) = 0;
  virtual void exitSignature(myParser::SignatureContext *ctx) = 0;

  virtual void enterResult(myParser::ResultContext *ctx) = 0;
  virtual void exitResult(myParser::ResultContext *ctx) = 0;

  virtual void enterParameters(myParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(myParser::ParametersContext *ctx) = 0;

  virtual void enterParameterList(myParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(myParser::ParameterListContext *ctx) = 0;

  virtual void enterParameterDecl(myParser::ParameterDeclContext *ctx) = 0;
  virtual void exitParameterDecl(myParser::ParameterDeclContext *ctx) = 0;

  virtual void enterOperand(myParser::OperandContext *ctx) = 0;
  virtual void exitOperand(myParser::OperandContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;

  virtual void enterBasicLit(myParser::BasicLitContext *ctx) = 0;
  virtual void exitBasicLit(myParser::BasicLitContext *ctx) = 0;

  virtual void enterOperandName(myParser::OperandNameContext *ctx) = 0;
  virtual void exitOperandName(myParser::OperandNameContext *ctx) = 0;

  virtual void enterQualifiedIdent(myParser::QualifiedIdentContext *ctx) = 0;
  virtual void exitQualifiedIdent(myParser::QualifiedIdentContext *ctx) = 0;

  virtual void enterCompositeLit(myParser::CompositeLitContext *ctx) = 0;
  virtual void exitCompositeLit(myParser::CompositeLitContext *ctx) = 0;

  virtual void enterLiteralType(myParser::LiteralTypeContext *ctx) = 0;
  virtual void exitLiteralType(myParser::LiteralTypeContext *ctx) = 0;

  virtual void enterLiteralValue(myParser::LiteralValueContext *ctx) = 0;
  virtual void exitLiteralValue(myParser::LiteralValueContext *ctx) = 0;

  virtual void enterElementList(myParser::ElementListContext *ctx) = 0;
  virtual void exitElementList(myParser::ElementListContext *ctx) = 0;

  virtual void enterKeyedElement(myParser::KeyedElementContext *ctx) = 0;
  virtual void exitKeyedElement(myParser::KeyedElementContext *ctx) = 0;

  virtual void enterKey(myParser::KeyContext *ctx) = 0;
  virtual void exitKey(myParser::KeyContext *ctx) = 0;

  virtual void enterElement(myParser::ElementContext *ctx) = 0;
  virtual void exitElement(myParser::ElementContext *ctx) = 0;

  virtual void enterStructType(myParser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(myParser::StructTypeContext *ctx) = 0;

  virtual void enterFieldDecl(myParser::FieldDeclContext *ctx) = 0;
  virtual void exitFieldDecl(myParser::FieldDeclContext *ctx) = 0;

  virtual void enterAnonymousField(myParser::AnonymousFieldContext *ctx) = 0;
  virtual void exitAnonymousField(myParser::AnonymousFieldContext *ctx) = 0;

  virtual void enterFunctionLit(myParser::FunctionLitContext *ctx) = 0;
  virtual void exitFunctionLit(myParser::FunctionLitContext *ctx) = 0;

  virtual void enterPrimaryExpr(myParser::PrimaryExprContext *ctx) = 0;
  virtual void exitPrimaryExpr(myParser::PrimaryExprContext *ctx) = 0;

  virtual void enterSelector(myParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(myParser::SelectorContext *ctx) = 0;

  virtual void enterIndex(myParser::IndexContext *ctx) = 0;
  virtual void exitIndex(myParser::IndexContext *ctx) = 0;

  virtual void enterSlice(myParser::SliceContext *ctx) = 0;
  virtual void exitSlice(myParser::SliceContext *ctx) = 0;

  virtual void enterTypeAssertion(myParser::TypeAssertionContext *ctx) = 0;
  virtual void exitTypeAssertion(myParser::TypeAssertionContext *ctx) = 0;

  virtual void enterArguments(myParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(myParser::ArgumentsContext *ctx) = 0;

  virtual void enterMethodExpr(myParser::MethodExprContext *ctx) = 0;
  virtual void exitMethodExpr(myParser::MethodExprContext *ctx) = 0;

  virtual void enterReceiverType(myParser::ReceiverTypeContext *ctx) = 0;
  virtual void exitReceiverType(myParser::ReceiverTypeContext *ctx) = 0;

  virtual void enterExpression(myParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(myParser::ExpressionContext *ctx) = 0;

  virtual void enterUnaryExpr(myParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(myParser::UnaryExprContext *ctx) = 0;

  virtual void enterConversion(myParser::ConversionContext *ctx) = 0;
  virtual void exitConversion(myParser::ConversionContext *ctx) = 0;

  virtual void enterEos(myParser::EosContext *ctx) = 0;
  virtual void exitEos(myParser::EosContext *ctx) = 0;


};

