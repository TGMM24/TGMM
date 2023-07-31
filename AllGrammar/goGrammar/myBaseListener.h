
// Generated from my.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myListener.h"


/**
 * This class provides an empty implementation of myListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myBaseListener : public myListener {
public:

  virtual void enterSourceFile(myParser::SourceFileContext * /*ctx*/) override { }
  virtual void exitSourceFile(myParser::SourceFileContext * /*ctx*/) override { }

  virtual void enterPackageClause(myParser::PackageClauseContext * /*ctx*/) override { }
  virtual void exitPackageClause(myParser::PackageClauseContext * /*ctx*/) override { }

  virtual void enterImportDecl(myParser::ImportDeclContext * /*ctx*/) override { }
  virtual void exitImportDecl(myParser::ImportDeclContext * /*ctx*/) override { }

  virtual void enterImportSpec(myParser::ImportSpecContext * /*ctx*/) override { }
  virtual void exitImportSpec(myParser::ImportSpecContext * /*ctx*/) override { }

  virtual void enterImportPath(myParser::ImportPathContext * /*ctx*/) override { }
  virtual void exitImportPath(myParser::ImportPathContext * /*ctx*/) override { }

  virtual void enterTopLevelDecl(myParser::TopLevelDeclContext * /*ctx*/) override { }
  virtual void exitTopLevelDecl(myParser::TopLevelDeclContext * /*ctx*/) override { }

  virtual void enterDeclaration(myParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(myParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterConstDecl(myParser::ConstDeclContext * /*ctx*/) override { }
  virtual void exitConstDecl(myParser::ConstDeclContext * /*ctx*/) override { }

  virtual void enterConstSpec(myParser::ConstSpecContext * /*ctx*/) override { }
  virtual void exitConstSpec(myParser::ConstSpecContext * /*ctx*/) override { }

  virtual void enterIdentifierList(myParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(myParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterTypeDecl(myParser::TypeDeclContext * /*ctx*/) override { }
  virtual void exitTypeDecl(myParser::TypeDeclContext * /*ctx*/) override { }

  virtual void enterTypeSpec(myParser::TypeSpecContext * /*ctx*/) override { }
  virtual void exitTypeSpec(myParser::TypeSpecContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(myParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(myParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterFunction(myParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(myParser::FunctionContext * /*ctx*/) override { }

  virtual void enterMethodDecl(myParser::MethodDeclContext * /*ctx*/) override { }
  virtual void exitMethodDecl(myParser::MethodDeclContext * /*ctx*/) override { }

  virtual void enterReceiver(myParser::ReceiverContext * /*ctx*/) override { }
  virtual void exitReceiver(myParser::ReceiverContext * /*ctx*/) override { }

  virtual void enterVarDecl(myParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(myParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterVarSpec(myParser::VarSpecContext * /*ctx*/) override { }
  virtual void exitVarSpec(myParser::VarSpecContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatementList(myParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(myParser::StatementListContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterSimpleStmt(myParser::SimpleStmtContext * /*ctx*/) override { }
  virtual void exitSimpleStmt(myParser::SimpleStmtContext * /*ctx*/) override { }

  virtual void enterExpressionStmt(myParser::ExpressionStmtContext * /*ctx*/) override { }
  virtual void exitExpressionStmt(myParser::ExpressionStmtContext * /*ctx*/) override { }

  virtual void enterSendStmt(myParser::SendStmtContext * /*ctx*/) override { }
  virtual void exitSendStmt(myParser::SendStmtContext * /*ctx*/) override { }

  virtual void enterIncDecStmt(myParser::IncDecStmtContext * /*ctx*/) override { }
  virtual void exitIncDecStmt(myParser::IncDecStmtContext * /*ctx*/) override { }

  virtual void enterAssignment(myParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(myParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssign_op(myParser::Assign_opContext * /*ctx*/) override { }
  virtual void exitAssign_op(myParser::Assign_opContext * /*ctx*/) override { }

  virtual void enterShortVarDecl(myParser::ShortVarDeclContext * /*ctx*/) override { }
  virtual void exitShortVarDecl(myParser::ShortVarDeclContext * /*ctx*/) override { }

  virtual void enterEmptyStmt(myParser::EmptyStmtContext * /*ctx*/) override { }
  virtual void exitEmptyStmt(myParser::EmptyStmtContext * /*ctx*/) override { }

  virtual void enterLabeledStmt(myParser::LabeledStmtContext * /*ctx*/) override { }
  virtual void exitLabeledStmt(myParser::LabeledStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(myParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(myParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(myParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(myParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(myParser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(myParser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterGotoStmt(myParser::GotoStmtContext * /*ctx*/) override { }
  virtual void exitGotoStmt(myParser::GotoStmtContext * /*ctx*/) override { }

  virtual void enterFallthroughStmt(myParser::FallthroughStmtContext * /*ctx*/) override { }
  virtual void exitFallthroughStmt(myParser::FallthroughStmtContext * /*ctx*/) override { }

  virtual void enterDeferStmt(myParser::DeferStmtContext * /*ctx*/) override { }
  virtual void exitDeferStmt(myParser::DeferStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(myParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(myParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterSwitchStmt(myParser::SwitchStmtContext * /*ctx*/) override { }
  virtual void exitSwitchStmt(myParser::SwitchStmtContext * /*ctx*/) override { }

  virtual void enterExprSwitchStmt(myParser::ExprSwitchStmtContext * /*ctx*/) override { }
  virtual void exitExprSwitchStmt(myParser::ExprSwitchStmtContext * /*ctx*/) override { }

  virtual void enterExprCaseClause(myParser::ExprCaseClauseContext * /*ctx*/) override { }
  virtual void exitExprCaseClause(myParser::ExprCaseClauseContext * /*ctx*/) override { }

  virtual void enterExprSwitchCase(myParser::ExprSwitchCaseContext * /*ctx*/) override { }
  virtual void exitExprSwitchCase(myParser::ExprSwitchCaseContext * /*ctx*/) override { }

  virtual void enterTypeSwitchStmt(myParser::TypeSwitchStmtContext * /*ctx*/) override { }
  virtual void exitTypeSwitchStmt(myParser::TypeSwitchStmtContext * /*ctx*/) override { }

  virtual void enterTypeSwitchGuard(myParser::TypeSwitchGuardContext * /*ctx*/) override { }
  virtual void exitTypeSwitchGuard(myParser::TypeSwitchGuardContext * /*ctx*/) override { }

  virtual void enterTypeCaseClause(myParser::TypeCaseClauseContext * /*ctx*/) override { }
  virtual void exitTypeCaseClause(myParser::TypeCaseClauseContext * /*ctx*/) override { }

  virtual void enterTypeSwitchCase(myParser::TypeSwitchCaseContext * /*ctx*/) override { }
  virtual void exitTypeSwitchCase(myParser::TypeSwitchCaseContext * /*ctx*/) override { }

  virtual void enterTypeList(myParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(myParser::TypeListContext * /*ctx*/) override { }

  virtual void enterSelectStmt(myParser::SelectStmtContext * /*ctx*/) override { }
  virtual void exitSelectStmt(myParser::SelectStmtContext * /*ctx*/) override { }

  virtual void enterCommClause(myParser::CommClauseContext * /*ctx*/) override { }
  virtual void exitCommClause(myParser::CommClauseContext * /*ctx*/) override { }

  virtual void enterCommCase(myParser::CommCaseContext * /*ctx*/) override { }
  virtual void exitCommCase(myParser::CommCaseContext * /*ctx*/) override { }

  virtual void enterRecvStmt(myParser::RecvStmtContext * /*ctx*/) override { }
  virtual void exitRecvStmt(myParser::RecvStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(myParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(myParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterForClause(myParser::ForClauseContext * /*ctx*/) override { }
  virtual void exitForClause(myParser::ForClauseContext * /*ctx*/) override { }

  virtual void enterRangeClause(myParser::RangeClauseContext * /*ctx*/) override { }
  virtual void exitRangeClause(myParser::RangeClauseContext * /*ctx*/) override { }

  virtual void enterGoStmt(myParser::GoStmtContext * /*ctx*/) override { }
  virtual void exitGoStmt(myParser::GoStmtContext * /*ctx*/) override { }

  virtual void enterGoType(myParser::GoTypeContext * /*ctx*/) override { }
  virtual void exitGoType(myParser::GoTypeContext * /*ctx*/) override { }

  virtual void enterTypeName(myParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(myParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterTypeLit(myParser::TypeLitContext * /*ctx*/) override { }
  virtual void exitTypeLit(myParser::TypeLitContext * /*ctx*/) override { }

  virtual void enterArrayType(myParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(myParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterArrayLength(myParser::ArrayLengthContext * /*ctx*/) override { }
  virtual void exitArrayLength(myParser::ArrayLengthContext * /*ctx*/) override { }

  virtual void enterElementType(myParser::ElementTypeContext * /*ctx*/) override { }
  virtual void exitElementType(myParser::ElementTypeContext * /*ctx*/) override { }

  virtual void enterPointerType(myParser::PointerTypeContext * /*ctx*/) override { }
  virtual void exitPointerType(myParser::PointerTypeContext * /*ctx*/) override { }

  virtual void enterInterfaceType(myParser::InterfaceTypeContext * /*ctx*/) override { }
  virtual void exitInterfaceType(myParser::InterfaceTypeContext * /*ctx*/) override { }

  virtual void enterSliceType(myParser::SliceTypeContext * /*ctx*/) override { }
  virtual void exitSliceType(myParser::SliceTypeContext * /*ctx*/) override { }

  virtual void enterMapType(myParser::MapTypeContext * /*ctx*/) override { }
  virtual void exitMapType(myParser::MapTypeContext * /*ctx*/) override { }

  virtual void enterChannelType(myParser::ChannelTypeContext * /*ctx*/) override { }
  virtual void exitChannelType(myParser::ChannelTypeContext * /*ctx*/) override { }

  virtual void enterMethodSpec(myParser::MethodSpecContext * /*ctx*/) override { }
  virtual void exitMethodSpec(myParser::MethodSpecContext * /*ctx*/) override { }

  virtual void enterFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterSignature(myParser::SignatureContext * /*ctx*/) override { }
  virtual void exitSignature(myParser::SignatureContext * /*ctx*/) override { }

  virtual void enterResult(myParser::ResultContext * /*ctx*/) override { }
  virtual void exitResult(myParser::ResultContext * /*ctx*/) override { }

  virtual void enterParameters(myParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(myParser::ParametersContext * /*ctx*/) override { }

  virtual void enterParameterList(myParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(myParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameterDecl(myParser::ParameterDeclContext * /*ctx*/) override { }
  virtual void exitParameterDecl(myParser::ParameterDeclContext * /*ctx*/) override { }

  virtual void enterOperand(myParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(myParser::OperandContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBasicLit(myParser::BasicLitContext * /*ctx*/) override { }
  virtual void exitBasicLit(myParser::BasicLitContext * /*ctx*/) override { }

  virtual void enterOperandName(myParser::OperandNameContext * /*ctx*/) override { }
  virtual void exitOperandName(myParser::OperandNameContext * /*ctx*/) override { }

  virtual void enterQualifiedIdent(myParser::QualifiedIdentContext * /*ctx*/) override { }
  virtual void exitQualifiedIdent(myParser::QualifiedIdentContext * /*ctx*/) override { }

  virtual void enterCompositeLit(myParser::CompositeLitContext * /*ctx*/) override { }
  virtual void exitCompositeLit(myParser::CompositeLitContext * /*ctx*/) override { }

  virtual void enterLiteralType(myParser::LiteralTypeContext * /*ctx*/) override { }
  virtual void exitLiteralType(myParser::LiteralTypeContext * /*ctx*/) override { }

  virtual void enterLiteralValue(myParser::LiteralValueContext * /*ctx*/) override { }
  virtual void exitLiteralValue(myParser::LiteralValueContext * /*ctx*/) override { }

  virtual void enterElementList(myParser::ElementListContext * /*ctx*/) override { }
  virtual void exitElementList(myParser::ElementListContext * /*ctx*/) override { }

  virtual void enterKeyedElement(myParser::KeyedElementContext * /*ctx*/) override { }
  virtual void exitKeyedElement(myParser::KeyedElementContext * /*ctx*/) override { }

  virtual void enterKey(myParser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(myParser::KeyContext * /*ctx*/) override { }

  virtual void enterElement(myParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(myParser::ElementContext * /*ctx*/) override { }

  virtual void enterStructType(myParser::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(myParser::StructTypeContext * /*ctx*/) override { }

  virtual void enterFieldDecl(myParser::FieldDeclContext * /*ctx*/) override { }
  virtual void exitFieldDecl(myParser::FieldDeclContext * /*ctx*/) override { }

  virtual void enterAnonymousField(myParser::AnonymousFieldContext * /*ctx*/) override { }
  virtual void exitAnonymousField(myParser::AnonymousFieldContext * /*ctx*/) override { }

  virtual void enterFunctionLit(myParser::FunctionLitContext * /*ctx*/) override { }
  virtual void exitFunctionLit(myParser::FunctionLitContext * /*ctx*/) override { }

  virtual void enterPrimaryExpr(myParser::PrimaryExprContext * /*ctx*/) override { }
  virtual void exitPrimaryExpr(myParser::PrimaryExprContext * /*ctx*/) override { }

  virtual void enterSelector(myParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(myParser::SelectorContext * /*ctx*/) override { }

  virtual void enterIndex(myParser::IndexContext * /*ctx*/) override { }
  virtual void exitIndex(myParser::IndexContext * /*ctx*/) override { }

  virtual void enterSlice(myParser::SliceContext * /*ctx*/) override { }
  virtual void exitSlice(myParser::SliceContext * /*ctx*/) override { }

  virtual void enterTypeAssertion(myParser::TypeAssertionContext * /*ctx*/) override { }
  virtual void exitTypeAssertion(myParser::TypeAssertionContext * /*ctx*/) override { }

  virtual void enterArguments(myParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(myParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterMethodExpr(myParser::MethodExprContext * /*ctx*/) override { }
  virtual void exitMethodExpr(myParser::MethodExprContext * /*ctx*/) override { }

  virtual void enterReceiverType(myParser::ReceiverTypeContext * /*ctx*/) override { }
  virtual void exitReceiverType(myParser::ReceiverTypeContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(myParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(myParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterConversion(myParser::ConversionContext * /*ctx*/) override { }
  virtual void exitConversion(myParser::ConversionContext * /*ctx*/) override { }

  virtual void enterEos(myParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(myParser::EosContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

