
// Generated from PhpParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "PhpParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PhpParser.
 */
class  PhpParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHtmlDocument(PhpParser::HtmlDocumentContext *ctx) = 0;
  virtual void exitHtmlDocument(PhpParser::HtmlDocumentContext *ctx) = 0;

  virtual void enterInlineHtml(PhpParser::InlineHtmlContext *ctx) = 0;
  virtual void exitInlineHtml(PhpParser::InlineHtmlContext *ctx) = 0;

  virtual void enterHtmlElement(PhpParser::HtmlElementContext *ctx) = 0;
  virtual void exitHtmlElement(PhpParser::HtmlElementContext *ctx) = 0;

  virtual void enterScriptText(PhpParser::ScriptTextContext *ctx) = 0;
  virtual void exitScriptText(PhpParser::ScriptTextContext *ctx) = 0;

  virtual void enterPhpBlock(PhpParser::PhpBlockContext *ctx) = 0;
  virtual void exitPhpBlock(PhpParser::PhpBlockContext *ctx) = 0;

  virtual void enterImportStatement(PhpParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(PhpParser::ImportStatementContext *ctx) = 0;

  virtual void enterTopStatement(PhpParser::TopStatementContext *ctx) = 0;
  virtual void exitTopStatement(PhpParser::TopStatementContext *ctx) = 0;

  virtual void enterUseDeclaration(PhpParser::UseDeclarationContext *ctx) = 0;
  virtual void exitUseDeclaration(PhpParser::UseDeclarationContext *ctx) = 0;

  virtual void enterUseDeclarationContentList(PhpParser::UseDeclarationContentListContext *ctx) = 0;
  virtual void exitUseDeclarationContentList(PhpParser::UseDeclarationContentListContext *ctx) = 0;

  virtual void enterUseDeclarationContent(PhpParser::UseDeclarationContentContext *ctx) = 0;
  virtual void exitUseDeclarationContent(PhpParser::UseDeclarationContentContext *ctx) = 0;

  virtual void enterNamespaceDeclaration(PhpParser::NamespaceDeclarationContext *ctx) = 0;
  virtual void exitNamespaceDeclaration(PhpParser::NamespaceDeclarationContext *ctx) = 0;

  virtual void enterNamespaceStatement(PhpParser::NamespaceStatementContext *ctx) = 0;
  virtual void exitNamespaceStatement(PhpParser::NamespaceStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(PhpParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(PhpParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(PhpParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(PhpParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassEntryType(PhpParser::ClassEntryTypeContext *ctx) = 0;
  virtual void exitClassEntryType(PhpParser::ClassEntryTypeContext *ctx) = 0;

  virtual void enterInterfaceList(PhpParser::InterfaceListContext *ctx) = 0;
  virtual void exitInterfaceList(PhpParser::InterfaceListContext *ctx) = 0;

  virtual void enterTypeParameterListInBrackets(PhpParser::TypeParameterListInBracketsContext *ctx) = 0;
  virtual void exitTypeParameterListInBrackets(PhpParser::TypeParameterListInBracketsContext *ctx) = 0;

  virtual void enterTypeParameterList(PhpParser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(PhpParser::TypeParameterListContext *ctx) = 0;

  virtual void enterTypeParameterWithDefaultsList(PhpParser::TypeParameterWithDefaultsListContext *ctx) = 0;
  virtual void exitTypeParameterWithDefaultsList(PhpParser::TypeParameterWithDefaultsListContext *ctx) = 0;

  virtual void enterTypeParameterDecl(PhpParser::TypeParameterDeclContext *ctx) = 0;
  virtual void exitTypeParameterDecl(PhpParser::TypeParameterDeclContext *ctx) = 0;

  virtual void enterTypeParameterWithDefaultDecl(PhpParser::TypeParameterWithDefaultDeclContext *ctx) = 0;
  virtual void exitTypeParameterWithDefaultDecl(PhpParser::TypeParameterWithDefaultDeclContext *ctx) = 0;

  virtual void enterGenericDynamicArgs(PhpParser::GenericDynamicArgsContext *ctx) = 0;
  virtual void exitGenericDynamicArgs(PhpParser::GenericDynamicArgsContext *ctx) = 0;

  virtual void enterAttributes(PhpParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(PhpParser::AttributesContext *ctx) = 0;

  virtual void enterAttributeGroup(PhpParser::AttributeGroupContext *ctx) = 0;
  virtual void exitAttributeGroup(PhpParser::AttributeGroupContext *ctx) = 0;

  virtual void enterAttribute(PhpParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(PhpParser::AttributeContext *ctx) = 0;

  virtual void enterInnerStatementList(PhpParser::InnerStatementListContext *ctx) = 0;
  virtual void exitInnerStatementList(PhpParser::InnerStatementListContext *ctx) = 0;

  virtual void enterInnerStatement(PhpParser::InnerStatementContext *ctx) = 0;
  virtual void exitInnerStatement(PhpParser::InnerStatementContext *ctx) = 0;

  virtual void enterStatement(PhpParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PhpParser::StatementContext *ctx) = 0;

  virtual void enterEmptyStatement_(PhpParser::EmptyStatement_Context *ctx) = 0;
  virtual void exitEmptyStatement_(PhpParser::EmptyStatement_Context *ctx) = 0;

  virtual void enterBlockStatement(PhpParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(PhpParser::BlockStatementContext *ctx) = 0;

  virtual void enterIfStatement(PhpParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(PhpParser::IfStatementContext *ctx) = 0;

  virtual void enterElseIfStatement(PhpParser::ElseIfStatementContext *ctx) = 0;
  virtual void exitElseIfStatement(PhpParser::ElseIfStatementContext *ctx) = 0;

  virtual void enterElseIfColonStatement(PhpParser::ElseIfColonStatementContext *ctx) = 0;
  virtual void exitElseIfColonStatement(PhpParser::ElseIfColonStatementContext *ctx) = 0;

  virtual void enterElseStatement(PhpParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(PhpParser::ElseStatementContext *ctx) = 0;

  virtual void enterElseColonStatement(PhpParser::ElseColonStatementContext *ctx) = 0;
  virtual void exitElseColonStatement(PhpParser::ElseColonStatementContext *ctx) = 0;

  virtual void enterWhileStatement(PhpParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(PhpParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoWhileStatement(PhpParser::DoWhileStatementContext *ctx) = 0;
  virtual void exitDoWhileStatement(PhpParser::DoWhileStatementContext *ctx) = 0;

  virtual void enterForStatement(PhpParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(PhpParser::ForStatementContext *ctx) = 0;

  virtual void enterForInit(PhpParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(PhpParser::ForInitContext *ctx) = 0;

  virtual void enterForUpdate(PhpParser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(PhpParser::ForUpdateContext *ctx) = 0;

  virtual void enterSwitchStatement(PhpParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(PhpParser::SwitchStatementContext *ctx) = 0;

  virtual void enterSwitchBlock(PhpParser::SwitchBlockContext *ctx) = 0;
  virtual void exitSwitchBlock(PhpParser::SwitchBlockContext *ctx) = 0;

  virtual void enterBreakStatement(PhpParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(PhpParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(PhpParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(PhpParser::ContinueStatementContext *ctx) = 0;

  virtual void enterReturnStatement(PhpParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(PhpParser::ReturnStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(PhpParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(PhpParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterUnsetStatement(PhpParser::UnsetStatementContext *ctx) = 0;
  virtual void exitUnsetStatement(PhpParser::UnsetStatementContext *ctx) = 0;

  virtual void enterForeachStatement(PhpParser::ForeachStatementContext *ctx) = 0;
  virtual void exitForeachStatement(PhpParser::ForeachStatementContext *ctx) = 0;

  virtual void enterTryCatchFinally(PhpParser::TryCatchFinallyContext *ctx) = 0;
  virtual void exitTryCatchFinally(PhpParser::TryCatchFinallyContext *ctx) = 0;

  virtual void enterCatchClause(PhpParser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(PhpParser::CatchClauseContext *ctx) = 0;

  virtual void enterFinallyStatement(PhpParser::FinallyStatementContext *ctx) = 0;
  virtual void exitFinallyStatement(PhpParser::FinallyStatementContext *ctx) = 0;

  virtual void enterThrowStatement(PhpParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(PhpParser::ThrowStatementContext *ctx) = 0;

  virtual void enterGotoStatement(PhpParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(PhpParser::GotoStatementContext *ctx) = 0;

  virtual void enterDeclareStatement(PhpParser::DeclareStatementContext *ctx) = 0;
  virtual void exitDeclareStatement(PhpParser::DeclareStatementContext *ctx) = 0;

  virtual void enterInlineHtmlStatement(PhpParser::InlineHtmlStatementContext *ctx) = 0;
  virtual void exitInlineHtmlStatement(PhpParser::InlineHtmlStatementContext *ctx) = 0;

  virtual void enterDeclareList(PhpParser::DeclareListContext *ctx) = 0;
  virtual void exitDeclareList(PhpParser::DeclareListContext *ctx) = 0;

  virtual void enterDirective(PhpParser::DirectiveContext *ctx) = 0;
  virtual void exitDirective(PhpParser::DirectiveContext *ctx) = 0;

  virtual void enterFormalParameterList(PhpParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(PhpParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameter(PhpParser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(PhpParser::FormalParameterContext *ctx) = 0;

  virtual void enterTypeHint(PhpParser::TypeHintContext *ctx) = 0;
  virtual void exitTypeHint(PhpParser::TypeHintContext *ctx) = 0;

  virtual void enterGlobalStatement(PhpParser::GlobalStatementContext *ctx) = 0;
  virtual void exitGlobalStatement(PhpParser::GlobalStatementContext *ctx) = 0;

  virtual void enterGlobalVar(PhpParser::GlobalVarContext *ctx) = 0;
  virtual void exitGlobalVar(PhpParser::GlobalVarContext *ctx) = 0;

  virtual void enterEchoStatement(PhpParser::EchoStatementContext *ctx) = 0;
  virtual void exitEchoStatement(PhpParser::EchoStatementContext *ctx) = 0;

  virtual void enterStaticVariableStatement(PhpParser::StaticVariableStatementContext *ctx) = 0;
  virtual void exitStaticVariableStatement(PhpParser::StaticVariableStatementContext *ctx) = 0;

  virtual void enterClassStatement(PhpParser::ClassStatementContext *ctx) = 0;
  virtual void exitClassStatement(PhpParser::ClassStatementContext *ctx) = 0;

  virtual void enterTraitAdaptations(PhpParser::TraitAdaptationsContext *ctx) = 0;
  virtual void exitTraitAdaptations(PhpParser::TraitAdaptationsContext *ctx) = 0;

  virtual void enterTraitAdaptationStatement(PhpParser::TraitAdaptationStatementContext *ctx) = 0;
  virtual void exitTraitAdaptationStatement(PhpParser::TraitAdaptationStatementContext *ctx) = 0;

  virtual void enterTraitPrecedence(PhpParser::TraitPrecedenceContext *ctx) = 0;
  virtual void exitTraitPrecedence(PhpParser::TraitPrecedenceContext *ctx) = 0;

  virtual void enterTraitAlias(PhpParser::TraitAliasContext *ctx) = 0;
  virtual void exitTraitAlias(PhpParser::TraitAliasContext *ctx) = 0;

  virtual void enterTraitMethodReference(PhpParser::TraitMethodReferenceContext *ctx) = 0;
  virtual void exitTraitMethodReference(PhpParser::TraitMethodReferenceContext *ctx) = 0;

  virtual void enterBaseCtorCall(PhpParser::BaseCtorCallContext *ctx) = 0;
  virtual void exitBaseCtorCall(PhpParser::BaseCtorCallContext *ctx) = 0;

  virtual void enterReturnTypeDecl(PhpParser::ReturnTypeDeclContext *ctx) = 0;
  virtual void exitReturnTypeDecl(PhpParser::ReturnTypeDeclContext *ctx) = 0;

  virtual void enterMethodBody(PhpParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(PhpParser::MethodBodyContext *ctx) = 0;

  virtual void enterPropertyModifiers(PhpParser::PropertyModifiersContext *ctx) = 0;
  virtual void exitPropertyModifiers(PhpParser::PropertyModifiersContext *ctx) = 0;

  virtual void enterMemberModifiers(PhpParser::MemberModifiersContext *ctx) = 0;
  virtual void exitMemberModifiers(PhpParser::MemberModifiersContext *ctx) = 0;

  virtual void enterVariableInitializer(PhpParser::VariableInitializerContext *ctx) = 0;
  virtual void exitVariableInitializer(PhpParser::VariableInitializerContext *ctx) = 0;

  virtual void enterIdentifierInitializer(PhpParser::IdentifierInitializerContext *ctx) = 0;
  virtual void exitIdentifierInitializer(PhpParser::IdentifierInitializerContext *ctx) = 0;

  virtual void enterGlobalConstantDeclaration(PhpParser::GlobalConstantDeclarationContext *ctx) = 0;
  virtual void exitGlobalConstantDeclaration(PhpParser::GlobalConstantDeclarationContext *ctx) = 0;

  virtual void enterEnumDeclaration(PhpParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(PhpParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumItem(PhpParser::EnumItemContext *ctx) = 0;
  virtual void exitEnumItem(PhpParser::EnumItemContext *ctx) = 0;

  virtual void enterExpressionList(PhpParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(PhpParser::ExpressionListContext *ctx) = 0;

  virtual void enterParentheses(PhpParser::ParenthesesContext *ctx) = 0;
  virtual void exitParentheses(PhpParser::ParenthesesContext *ctx) = 0;

  virtual void enterChainExpression(PhpParser::ChainExpressionContext *ctx) = 0;
  virtual void exitChainExpression(PhpParser::ChainExpressionContext *ctx) = 0;

  virtual void enterSpecialWordExpression(PhpParser::SpecialWordExpressionContext *ctx) = 0;
  virtual void exitSpecialWordExpression(PhpParser::SpecialWordExpressionContext *ctx) = 0;

  virtual void enterArrayCreationExpression(PhpParser::ArrayCreationExpressionContext *ctx) = 0;
  virtual void exitArrayCreationExpression(PhpParser::ArrayCreationExpressionContext *ctx) = 0;

  virtual void enterBackQuoteStringExpression(PhpParser::BackQuoteStringExpressionContext *ctx) = 0;
  virtual void exitBackQuoteStringExpression(PhpParser::BackQuoteStringExpressionContext *ctx) = 0;

  virtual void enterMatchExpression(PhpParser::MatchExpressionContext *ctx) = 0;
  virtual void exitMatchExpression(PhpParser::MatchExpressionContext *ctx) = 0;

  virtual void enterLogicalExpression(PhpParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(PhpParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterPrintExpression(PhpParser::PrintExpressionContext *ctx) = 0;
  virtual void exitPrintExpression(PhpParser::PrintExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(PhpParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(PhpParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterPostfixIncDecExpression(PhpParser::PostfixIncDecExpressionContext *ctx) = 0;
  virtual void exitPostfixIncDecExpression(PhpParser::PostfixIncDecExpressionContext *ctx) = 0;

  virtual void enterCloneExpression(PhpParser::CloneExpressionContext *ctx) = 0;
  virtual void exitCloneExpression(PhpParser::CloneExpressionContext *ctx) = 0;

  virtual void enterUnaryOperatorExpression(PhpParser::UnaryOperatorExpressionContext *ctx) = 0;
  virtual void exitUnaryOperatorExpression(PhpParser::UnaryOperatorExpressionContext *ctx) = 0;

  virtual void enterNewExpression(PhpParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(PhpParser::NewExpressionContext *ctx) = 0;

  virtual void enterParenthesisExpression(PhpParser::ParenthesisExpressionContext *ctx) = 0;
  virtual void exitParenthesisExpression(PhpParser::ParenthesisExpressionContext *ctx) = 0;

  virtual void enterSpaceshipExpression(PhpParser::SpaceshipExpressionContext *ctx) = 0;
  virtual void exitSpaceshipExpression(PhpParser::SpaceshipExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(PhpParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(PhpParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterNullCoalescingExpression(PhpParser::NullCoalescingExpressionContext *ctx) = 0;
  virtual void exitNullCoalescingExpression(PhpParser::NullCoalescingExpressionContext *ctx) = 0;

  virtual void enterArithmeticExpression(PhpParser::ArithmeticExpressionContext *ctx) = 0;
  virtual void exitArithmeticExpression(PhpParser::ArithmeticExpressionContext *ctx) = 0;

  virtual void enterIndexerExpression(PhpParser::IndexerExpressionContext *ctx) = 0;
  virtual void exitIndexerExpression(PhpParser::IndexerExpressionContext *ctx) = 0;

  virtual void enterScalarExpression(PhpParser::ScalarExpressionContext *ctx) = 0;
  virtual void exitScalarExpression(PhpParser::ScalarExpressionContext *ctx) = 0;

  virtual void enterPrefixIncDecExpression(PhpParser::PrefixIncDecExpressionContext *ctx) = 0;
  virtual void exitPrefixIncDecExpression(PhpParser::PrefixIncDecExpressionContext *ctx) = 0;

  virtual void enterComparisonExpression(PhpParser::ComparisonExpressionContext *ctx) = 0;
  virtual void exitComparisonExpression(PhpParser::ComparisonExpressionContext *ctx) = 0;

  virtual void enterCastExpression(PhpParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(PhpParser::CastExpressionContext *ctx) = 0;

  virtual void enterInstanceOfExpression(PhpParser::InstanceOfExpressionContext *ctx) = 0;
  virtual void exitInstanceOfExpression(PhpParser::InstanceOfExpressionContext *ctx) = 0;

  virtual void enterArrayDestructExpression(PhpParser::ArrayDestructExpressionContext *ctx) = 0;
  virtual void exitArrayDestructExpression(PhpParser::ArrayDestructExpressionContext *ctx) = 0;

  virtual void enterLambdaFunctionExpression(PhpParser::LambdaFunctionExpressionContext *ctx) = 0;
  virtual void exitLambdaFunctionExpression(PhpParser::LambdaFunctionExpressionContext *ctx) = 0;

  virtual void enterBitwiseExpression(PhpParser::BitwiseExpressionContext *ctx) = 0;
  virtual void exitBitwiseExpression(PhpParser::BitwiseExpressionContext *ctx) = 0;

  virtual void enterAssignable(PhpParser::AssignableContext *ctx) = 0;
  virtual void exitAssignable(PhpParser::AssignableContext *ctx) = 0;

  virtual void enterArrayCreation(PhpParser::ArrayCreationContext *ctx) = 0;
  virtual void exitArrayCreation(PhpParser::ArrayCreationContext *ctx) = 0;

  virtual void enterArrayDestructuring(PhpParser::ArrayDestructuringContext *ctx) = 0;
  virtual void exitArrayDestructuring(PhpParser::ArrayDestructuringContext *ctx) = 0;

  virtual void enterIndexedDestructItem(PhpParser::IndexedDestructItemContext *ctx) = 0;
  virtual void exitIndexedDestructItem(PhpParser::IndexedDestructItemContext *ctx) = 0;

  virtual void enterKeyedDestructItem(PhpParser::KeyedDestructItemContext *ctx) = 0;
  virtual void exitKeyedDestructItem(PhpParser::KeyedDestructItemContext *ctx) = 0;

  virtual void enterLambdaFunctionExpr(PhpParser::LambdaFunctionExprContext *ctx) = 0;
  virtual void exitLambdaFunctionExpr(PhpParser::LambdaFunctionExprContext *ctx) = 0;

  virtual void enterMatchExpr(PhpParser::MatchExprContext *ctx) = 0;
  virtual void exitMatchExpr(PhpParser::MatchExprContext *ctx) = 0;

  virtual void enterMatchItem(PhpParser::MatchItemContext *ctx) = 0;
  virtual void exitMatchItem(PhpParser::MatchItemContext *ctx) = 0;

  virtual void enterNewExpr(PhpParser::NewExprContext *ctx) = 0;
  virtual void exitNewExpr(PhpParser::NewExprContext *ctx) = 0;

  virtual void enterAssignmentOperator(PhpParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(PhpParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterYieldExpression(PhpParser::YieldExpressionContext *ctx) = 0;
  virtual void exitYieldExpression(PhpParser::YieldExpressionContext *ctx) = 0;

  virtual void enterArrayItemList(PhpParser::ArrayItemListContext *ctx) = 0;
  virtual void exitArrayItemList(PhpParser::ArrayItemListContext *ctx) = 0;

  virtual void enterArrayItem(PhpParser::ArrayItemContext *ctx) = 0;
  virtual void exitArrayItem(PhpParser::ArrayItemContext *ctx) = 0;

  virtual void enterLambdaFunctionUseVars(PhpParser::LambdaFunctionUseVarsContext *ctx) = 0;
  virtual void exitLambdaFunctionUseVars(PhpParser::LambdaFunctionUseVarsContext *ctx) = 0;

  virtual void enterLambdaFunctionUseVar(PhpParser::LambdaFunctionUseVarContext *ctx) = 0;
  virtual void exitLambdaFunctionUseVar(PhpParser::LambdaFunctionUseVarContext *ctx) = 0;

  virtual void enterQualifiedStaticTypeRef(PhpParser::QualifiedStaticTypeRefContext *ctx) = 0;
  virtual void exitQualifiedStaticTypeRef(PhpParser::QualifiedStaticTypeRefContext *ctx) = 0;

  virtual void enterTypeRef(PhpParser::TypeRefContext *ctx) = 0;
  virtual void exitTypeRef(PhpParser::TypeRefContext *ctx) = 0;

  virtual void enterAnonymousClass(PhpParser::AnonymousClassContext *ctx) = 0;
  virtual void exitAnonymousClass(PhpParser::AnonymousClassContext *ctx) = 0;

  virtual void enterIndirectTypeRef(PhpParser::IndirectTypeRefContext *ctx) = 0;
  virtual void exitIndirectTypeRef(PhpParser::IndirectTypeRefContext *ctx) = 0;

  virtual void enterQualifiedNamespaceName(PhpParser::QualifiedNamespaceNameContext *ctx) = 0;
  virtual void exitQualifiedNamespaceName(PhpParser::QualifiedNamespaceNameContext *ctx) = 0;

  virtual void enterNamespaceNameList(PhpParser::NamespaceNameListContext *ctx) = 0;
  virtual void exitNamespaceNameList(PhpParser::NamespaceNameListContext *ctx) = 0;

  virtual void enterNamespaceNameTail(PhpParser::NamespaceNameTailContext *ctx) = 0;
  virtual void exitNamespaceNameTail(PhpParser::NamespaceNameTailContext *ctx) = 0;

  virtual void enterQualifiedNamespaceNameList(PhpParser::QualifiedNamespaceNameListContext *ctx) = 0;
  virtual void exitQualifiedNamespaceNameList(PhpParser::QualifiedNamespaceNameListContext *ctx) = 0;

  virtual void enterArguments(PhpParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(PhpParser::ArgumentsContext *ctx) = 0;

  virtual void enterActualArgument(PhpParser::ActualArgumentContext *ctx) = 0;
  virtual void exitActualArgument(PhpParser::ActualArgumentContext *ctx) = 0;

  virtual void enterArgumentName(PhpParser::ArgumentNameContext *ctx) = 0;
  virtual void exitArgumentName(PhpParser::ArgumentNameContext *ctx) = 0;

  virtual void enterConstantInitializer(PhpParser::ConstantInitializerContext *ctx) = 0;
  virtual void exitConstantInitializer(PhpParser::ConstantInitializerContext *ctx) = 0;

  virtual void enterConstant(PhpParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(PhpParser::ConstantContext *ctx) = 0;

  virtual void enterLiteralConstant(PhpParser::LiteralConstantContext *ctx) = 0;
  virtual void exitLiteralConstant(PhpParser::LiteralConstantContext *ctx) = 0;

  virtual void enterNumericConstant(PhpParser::NumericConstantContext *ctx) = 0;
  virtual void exitNumericConstant(PhpParser::NumericConstantContext *ctx) = 0;

  virtual void enterClassConstant(PhpParser::ClassConstantContext *ctx) = 0;
  virtual void exitClassConstant(PhpParser::ClassConstantContext *ctx) = 0;

  virtual void enterStringConstant(PhpParser::StringConstantContext *ctx) = 0;
  virtual void exitStringConstant(PhpParser::StringConstantContext *ctx) = 0;

  virtual void enterString(PhpParser::StringContext *ctx) = 0;
  virtual void exitString(PhpParser::StringContext *ctx) = 0;

  virtual void enterInterpolatedStringPart(PhpParser::InterpolatedStringPartContext *ctx) = 0;
  virtual void exitInterpolatedStringPart(PhpParser::InterpolatedStringPartContext *ctx) = 0;

  virtual void enterChainList(PhpParser::ChainListContext *ctx) = 0;
  virtual void exitChainList(PhpParser::ChainListContext *ctx) = 0;

  virtual void enterChain(PhpParser::ChainContext *ctx) = 0;
  virtual void exitChain(PhpParser::ChainContext *ctx) = 0;

  virtual void enterChainOrigin(PhpParser::ChainOriginContext *ctx) = 0;
  virtual void exitChainOrigin(PhpParser::ChainOriginContext *ctx) = 0;

  virtual void enterMemberAccess(PhpParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(PhpParser::MemberAccessContext *ctx) = 0;

  virtual void enterFunctionCall(PhpParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(PhpParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionCallName(PhpParser::FunctionCallNameContext *ctx) = 0;
  virtual void exitFunctionCallName(PhpParser::FunctionCallNameContext *ctx) = 0;

  virtual void enterActualArguments(PhpParser::ActualArgumentsContext *ctx) = 0;
  virtual void exitActualArguments(PhpParser::ActualArgumentsContext *ctx) = 0;

  virtual void enterChainBase(PhpParser::ChainBaseContext *ctx) = 0;
  virtual void exitChainBase(PhpParser::ChainBaseContext *ctx) = 0;

  virtual void enterKeyedFieldName(PhpParser::KeyedFieldNameContext *ctx) = 0;
  virtual void exitKeyedFieldName(PhpParser::KeyedFieldNameContext *ctx) = 0;

  virtual void enterKeyedSimpleFieldName(PhpParser::KeyedSimpleFieldNameContext *ctx) = 0;
  virtual void exitKeyedSimpleFieldName(PhpParser::KeyedSimpleFieldNameContext *ctx) = 0;

  virtual void enterKeyedVariable(PhpParser::KeyedVariableContext *ctx) = 0;
  virtual void exitKeyedVariable(PhpParser::KeyedVariableContext *ctx) = 0;

  virtual void enterSquareCurlyExpression(PhpParser::SquareCurlyExpressionContext *ctx) = 0;
  virtual void exitSquareCurlyExpression(PhpParser::SquareCurlyExpressionContext *ctx) = 0;

  virtual void enterAssignmentList(PhpParser::AssignmentListContext *ctx) = 0;
  virtual void exitAssignmentList(PhpParser::AssignmentListContext *ctx) = 0;

  virtual void enterAssignmentListElement(PhpParser::AssignmentListElementContext *ctx) = 0;
  virtual void exitAssignmentListElement(PhpParser::AssignmentListElementContext *ctx) = 0;

  virtual void enterModifier(PhpParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(PhpParser::ModifierContext *ctx) = 0;

  virtual void enterIdentifier(PhpParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(PhpParser::IdentifierContext *ctx) = 0;

  virtual void enterMemberModifier(PhpParser::MemberModifierContext *ctx) = 0;
  virtual void exitMemberModifier(PhpParser::MemberModifierContext *ctx) = 0;

  virtual void enterMagicConstant(PhpParser::MagicConstantContext *ctx) = 0;
  virtual void exitMagicConstant(PhpParser::MagicConstantContext *ctx) = 0;

  virtual void enterMagicMethod(PhpParser::MagicMethodContext *ctx) = 0;
  virtual void exitMagicMethod(PhpParser::MagicMethodContext *ctx) = 0;

  virtual void enterPrimitiveType(PhpParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(PhpParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterCastOperation(PhpParser::CastOperationContext *ctx) = 0;
  virtual void exitCastOperation(PhpParser::CastOperationContext *ctx) = 0;


};

