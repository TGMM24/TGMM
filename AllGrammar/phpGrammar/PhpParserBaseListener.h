
// Generated from PhpParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "PhpParserListener.h"


/**
 * This class provides an empty implementation of PhpParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PhpParserBaseListener : public PhpParserListener {
public:

  virtual void enterHtmlDocument(PhpParser::HtmlDocumentContext * /*ctx*/) override { }
  virtual void exitHtmlDocument(PhpParser::HtmlDocumentContext * /*ctx*/) override { }

  virtual void enterInlineHtml(PhpParser::InlineHtmlContext * /*ctx*/) override { }
  virtual void exitInlineHtml(PhpParser::InlineHtmlContext * /*ctx*/) override { }

  virtual void enterHtmlElement(PhpParser::HtmlElementContext * /*ctx*/) override { }
  virtual void exitHtmlElement(PhpParser::HtmlElementContext * /*ctx*/) override { }

  virtual void enterScriptText(PhpParser::ScriptTextContext * /*ctx*/) override { }
  virtual void exitScriptText(PhpParser::ScriptTextContext * /*ctx*/) override { }

  virtual void enterPhpBlock(PhpParser::PhpBlockContext * /*ctx*/) override { }
  virtual void exitPhpBlock(PhpParser::PhpBlockContext * /*ctx*/) override { }

  virtual void enterImportStatement(PhpParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(PhpParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterTopStatement(PhpParser::TopStatementContext * /*ctx*/) override { }
  virtual void exitTopStatement(PhpParser::TopStatementContext * /*ctx*/) override { }

  virtual void enterUseDeclaration(PhpParser::UseDeclarationContext * /*ctx*/) override { }
  virtual void exitUseDeclaration(PhpParser::UseDeclarationContext * /*ctx*/) override { }

  virtual void enterUseDeclarationContentList(PhpParser::UseDeclarationContentListContext * /*ctx*/) override { }
  virtual void exitUseDeclarationContentList(PhpParser::UseDeclarationContentListContext * /*ctx*/) override { }

  virtual void enterUseDeclarationContent(PhpParser::UseDeclarationContentContext * /*ctx*/) override { }
  virtual void exitUseDeclarationContent(PhpParser::UseDeclarationContentContext * /*ctx*/) override { }

  virtual void enterNamespaceDeclaration(PhpParser::NamespaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNamespaceDeclaration(PhpParser::NamespaceDeclarationContext * /*ctx*/) override { }

  virtual void enterNamespaceStatement(PhpParser::NamespaceStatementContext * /*ctx*/) override { }
  virtual void exitNamespaceStatement(PhpParser::NamespaceStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(PhpParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(PhpParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(PhpParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(PhpParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassEntryType(PhpParser::ClassEntryTypeContext * /*ctx*/) override { }
  virtual void exitClassEntryType(PhpParser::ClassEntryTypeContext * /*ctx*/) override { }

  virtual void enterInterfaceList(PhpParser::InterfaceListContext * /*ctx*/) override { }
  virtual void exitInterfaceList(PhpParser::InterfaceListContext * /*ctx*/) override { }

  virtual void enterTypeParameterListInBrackets(PhpParser::TypeParameterListInBracketsContext * /*ctx*/) override { }
  virtual void exitTypeParameterListInBrackets(PhpParser::TypeParameterListInBracketsContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(PhpParser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(PhpParser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterTypeParameterWithDefaultsList(PhpParser::TypeParameterWithDefaultsListContext * /*ctx*/) override { }
  virtual void exitTypeParameterWithDefaultsList(PhpParser::TypeParameterWithDefaultsListContext * /*ctx*/) override { }

  virtual void enterTypeParameterDecl(PhpParser::TypeParameterDeclContext * /*ctx*/) override { }
  virtual void exitTypeParameterDecl(PhpParser::TypeParameterDeclContext * /*ctx*/) override { }

  virtual void enterTypeParameterWithDefaultDecl(PhpParser::TypeParameterWithDefaultDeclContext * /*ctx*/) override { }
  virtual void exitTypeParameterWithDefaultDecl(PhpParser::TypeParameterWithDefaultDeclContext * /*ctx*/) override { }

  virtual void enterGenericDynamicArgs(PhpParser::GenericDynamicArgsContext * /*ctx*/) override { }
  virtual void exitGenericDynamicArgs(PhpParser::GenericDynamicArgsContext * /*ctx*/) override { }

  virtual void enterAttributes(PhpParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(PhpParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttributeGroup(PhpParser::AttributeGroupContext * /*ctx*/) override { }
  virtual void exitAttributeGroup(PhpParser::AttributeGroupContext * /*ctx*/) override { }

  virtual void enterAttribute(PhpParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(PhpParser::AttributeContext * /*ctx*/) override { }

  virtual void enterInnerStatementList(PhpParser::InnerStatementListContext * /*ctx*/) override { }
  virtual void exitInnerStatementList(PhpParser::InnerStatementListContext * /*ctx*/) override { }

  virtual void enterInnerStatement(PhpParser::InnerStatementContext * /*ctx*/) override { }
  virtual void exitInnerStatement(PhpParser::InnerStatementContext * /*ctx*/) override { }

  virtual void enterStatement(PhpParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PhpParser::StatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement_(PhpParser::EmptyStatement_Context * /*ctx*/) override { }
  virtual void exitEmptyStatement_(PhpParser::EmptyStatement_Context * /*ctx*/) override { }

  virtual void enterBlockStatement(PhpParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(PhpParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(PhpParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(PhpParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseIfStatement(PhpParser::ElseIfStatementContext * /*ctx*/) override { }
  virtual void exitElseIfStatement(PhpParser::ElseIfStatementContext * /*ctx*/) override { }

  virtual void enterElseIfColonStatement(PhpParser::ElseIfColonStatementContext * /*ctx*/) override { }
  virtual void exitElseIfColonStatement(PhpParser::ElseIfColonStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(PhpParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(PhpParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterElseColonStatement(PhpParser::ElseColonStatementContext * /*ctx*/) override { }
  virtual void exitElseColonStatement(PhpParser::ElseColonStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(PhpParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(PhpParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoWhileStatement(PhpParser::DoWhileStatementContext * /*ctx*/) override { }
  virtual void exitDoWhileStatement(PhpParser::DoWhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(PhpParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(PhpParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForInit(PhpParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(PhpParser::ForInitContext * /*ctx*/) override { }

  virtual void enterForUpdate(PhpParser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(PhpParser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(PhpParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(PhpParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterSwitchBlock(PhpParser::SwitchBlockContext * /*ctx*/) override { }
  virtual void exitSwitchBlock(PhpParser::SwitchBlockContext * /*ctx*/) override { }

  virtual void enterBreakStatement(PhpParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(PhpParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(PhpParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(PhpParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(PhpParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(PhpParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(PhpParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(PhpParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterUnsetStatement(PhpParser::UnsetStatementContext * /*ctx*/) override { }
  virtual void exitUnsetStatement(PhpParser::UnsetStatementContext * /*ctx*/) override { }

  virtual void enterForeachStatement(PhpParser::ForeachStatementContext * /*ctx*/) override { }
  virtual void exitForeachStatement(PhpParser::ForeachStatementContext * /*ctx*/) override { }

  virtual void enterTryCatchFinally(PhpParser::TryCatchFinallyContext * /*ctx*/) override { }
  virtual void exitTryCatchFinally(PhpParser::TryCatchFinallyContext * /*ctx*/) override { }

  virtual void enterCatchClause(PhpParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(PhpParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterFinallyStatement(PhpParser::FinallyStatementContext * /*ctx*/) override { }
  virtual void exitFinallyStatement(PhpParser::FinallyStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(PhpParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(PhpParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(PhpParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(PhpParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterDeclareStatement(PhpParser::DeclareStatementContext * /*ctx*/) override { }
  virtual void exitDeclareStatement(PhpParser::DeclareStatementContext * /*ctx*/) override { }

  virtual void enterInlineHtmlStatement(PhpParser::InlineHtmlStatementContext * /*ctx*/) override { }
  virtual void exitInlineHtmlStatement(PhpParser::InlineHtmlStatementContext * /*ctx*/) override { }

  virtual void enterDeclareList(PhpParser::DeclareListContext * /*ctx*/) override { }
  virtual void exitDeclareList(PhpParser::DeclareListContext * /*ctx*/) override { }

  virtual void enterDirective(PhpParser::DirectiveContext * /*ctx*/) override { }
  virtual void exitDirective(PhpParser::DirectiveContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(PhpParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(PhpParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameter(PhpParser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(PhpParser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterTypeHint(PhpParser::TypeHintContext * /*ctx*/) override { }
  virtual void exitTypeHint(PhpParser::TypeHintContext * /*ctx*/) override { }

  virtual void enterGlobalStatement(PhpParser::GlobalStatementContext * /*ctx*/) override { }
  virtual void exitGlobalStatement(PhpParser::GlobalStatementContext * /*ctx*/) override { }

  virtual void enterGlobalVar(PhpParser::GlobalVarContext * /*ctx*/) override { }
  virtual void exitGlobalVar(PhpParser::GlobalVarContext * /*ctx*/) override { }

  virtual void enterEchoStatement(PhpParser::EchoStatementContext * /*ctx*/) override { }
  virtual void exitEchoStatement(PhpParser::EchoStatementContext * /*ctx*/) override { }

  virtual void enterStaticVariableStatement(PhpParser::StaticVariableStatementContext * /*ctx*/) override { }
  virtual void exitStaticVariableStatement(PhpParser::StaticVariableStatementContext * /*ctx*/) override { }

  virtual void enterClassStatement(PhpParser::ClassStatementContext * /*ctx*/) override { }
  virtual void exitClassStatement(PhpParser::ClassStatementContext * /*ctx*/) override { }

  virtual void enterTraitAdaptations(PhpParser::TraitAdaptationsContext * /*ctx*/) override { }
  virtual void exitTraitAdaptations(PhpParser::TraitAdaptationsContext * /*ctx*/) override { }

  virtual void enterTraitAdaptationStatement(PhpParser::TraitAdaptationStatementContext * /*ctx*/) override { }
  virtual void exitTraitAdaptationStatement(PhpParser::TraitAdaptationStatementContext * /*ctx*/) override { }

  virtual void enterTraitPrecedence(PhpParser::TraitPrecedenceContext * /*ctx*/) override { }
  virtual void exitTraitPrecedence(PhpParser::TraitPrecedenceContext * /*ctx*/) override { }

  virtual void enterTraitAlias(PhpParser::TraitAliasContext * /*ctx*/) override { }
  virtual void exitTraitAlias(PhpParser::TraitAliasContext * /*ctx*/) override { }

  virtual void enterTraitMethodReference(PhpParser::TraitMethodReferenceContext * /*ctx*/) override { }
  virtual void exitTraitMethodReference(PhpParser::TraitMethodReferenceContext * /*ctx*/) override { }

  virtual void enterBaseCtorCall(PhpParser::BaseCtorCallContext * /*ctx*/) override { }
  virtual void exitBaseCtorCall(PhpParser::BaseCtorCallContext * /*ctx*/) override { }

  virtual void enterReturnTypeDecl(PhpParser::ReturnTypeDeclContext * /*ctx*/) override { }
  virtual void exitReturnTypeDecl(PhpParser::ReturnTypeDeclContext * /*ctx*/) override { }

  virtual void enterMethodBody(PhpParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(PhpParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterPropertyModifiers(PhpParser::PropertyModifiersContext * /*ctx*/) override { }
  virtual void exitPropertyModifiers(PhpParser::PropertyModifiersContext * /*ctx*/) override { }

  virtual void enterMemberModifiers(PhpParser::MemberModifiersContext * /*ctx*/) override { }
  virtual void exitMemberModifiers(PhpParser::MemberModifiersContext * /*ctx*/) override { }

  virtual void enterVariableInitializer(PhpParser::VariableInitializerContext * /*ctx*/) override { }
  virtual void exitVariableInitializer(PhpParser::VariableInitializerContext * /*ctx*/) override { }

  virtual void enterIdentifierInitializer(PhpParser::IdentifierInitializerContext * /*ctx*/) override { }
  virtual void exitIdentifierInitializer(PhpParser::IdentifierInitializerContext * /*ctx*/) override { }

  virtual void enterGlobalConstantDeclaration(PhpParser::GlobalConstantDeclarationContext * /*ctx*/) override { }
  virtual void exitGlobalConstantDeclaration(PhpParser::GlobalConstantDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(PhpParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(PhpParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumItem(PhpParser::EnumItemContext * /*ctx*/) override { }
  virtual void exitEnumItem(PhpParser::EnumItemContext * /*ctx*/) override { }

  virtual void enterExpressionList(PhpParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(PhpParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterParentheses(PhpParser::ParenthesesContext * /*ctx*/) override { }
  virtual void exitParentheses(PhpParser::ParenthesesContext * /*ctx*/) override { }

  virtual void enterChainExpression(PhpParser::ChainExpressionContext * /*ctx*/) override { }
  virtual void exitChainExpression(PhpParser::ChainExpressionContext * /*ctx*/) override { }

  virtual void enterSpecialWordExpression(PhpParser::SpecialWordExpressionContext * /*ctx*/) override { }
  virtual void exitSpecialWordExpression(PhpParser::SpecialWordExpressionContext * /*ctx*/) override { }

  virtual void enterArrayCreationExpression(PhpParser::ArrayCreationExpressionContext * /*ctx*/) override { }
  virtual void exitArrayCreationExpression(PhpParser::ArrayCreationExpressionContext * /*ctx*/) override { }

  virtual void enterBackQuoteStringExpression(PhpParser::BackQuoteStringExpressionContext * /*ctx*/) override { }
  virtual void exitBackQuoteStringExpression(PhpParser::BackQuoteStringExpressionContext * /*ctx*/) override { }

  virtual void enterMatchExpression(PhpParser::MatchExpressionContext * /*ctx*/) override { }
  virtual void exitMatchExpression(PhpParser::MatchExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(PhpParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(PhpParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterPrintExpression(PhpParser::PrintExpressionContext * /*ctx*/) override { }
  virtual void exitPrintExpression(PhpParser::PrintExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(PhpParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(PhpParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixIncDecExpression(PhpParser::PostfixIncDecExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixIncDecExpression(PhpParser::PostfixIncDecExpressionContext * /*ctx*/) override { }

  virtual void enterCloneExpression(PhpParser::CloneExpressionContext * /*ctx*/) override { }
  virtual void exitCloneExpression(PhpParser::CloneExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperatorExpression(PhpParser::UnaryOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryOperatorExpression(PhpParser::UnaryOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(PhpParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(PhpParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesisExpression(PhpParser::ParenthesisExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesisExpression(PhpParser::ParenthesisExpressionContext * /*ctx*/) override { }

  virtual void enterSpaceshipExpression(PhpParser::SpaceshipExpressionContext * /*ctx*/) override { }
  virtual void exitSpaceshipExpression(PhpParser::SpaceshipExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(PhpParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(PhpParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterNullCoalescingExpression(PhpParser::NullCoalescingExpressionContext * /*ctx*/) override { }
  virtual void exitNullCoalescingExpression(PhpParser::NullCoalescingExpressionContext * /*ctx*/) override { }

  virtual void enterArithmeticExpression(PhpParser::ArithmeticExpressionContext * /*ctx*/) override { }
  virtual void exitArithmeticExpression(PhpParser::ArithmeticExpressionContext * /*ctx*/) override { }

  virtual void enterIndexerExpression(PhpParser::IndexerExpressionContext * /*ctx*/) override { }
  virtual void exitIndexerExpression(PhpParser::IndexerExpressionContext * /*ctx*/) override { }

  virtual void enterScalarExpression(PhpParser::ScalarExpressionContext * /*ctx*/) override { }
  virtual void exitScalarExpression(PhpParser::ScalarExpressionContext * /*ctx*/) override { }

  virtual void enterPrefixIncDecExpression(PhpParser::PrefixIncDecExpressionContext * /*ctx*/) override { }
  virtual void exitPrefixIncDecExpression(PhpParser::PrefixIncDecExpressionContext * /*ctx*/) override { }

  virtual void enterComparisonExpression(PhpParser::ComparisonExpressionContext * /*ctx*/) override { }
  virtual void exitComparisonExpression(PhpParser::ComparisonExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(PhpParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(PhpParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterInstanceOfExpression(PhpParser::InstanceOfExpressionContext * /*ctx*/) override { }
  virtual void exitInstanceOfExpression(PhpParser::InstanceOfExpressionContext * /*ctx*/) override { }

  virtual void enterArrayDestructExpression(PhpParser::ArrayDestructExpressionContext * /*ctx*/) override { }
  virtual void exitArrayDestructExpression(PhpParser::ArrayDestructExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaFunctionExpression(PhpParser::LambdaFunctionExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaFunctionExpression(PhpParser::LambdaFunctionExpressionContext * /*ctx*/) override { }

  virtual void enterBitwiseExpression(PhpParser::BitwiseExpressionContext * /*ctx*/) override { }
  virtual void exitBitwiseExpression(PhpParser::BitwiseExpressionContext * /*ctx*/) override { }

  virtual void enterAssignable(PhpParser::AssignableContext * /*ctx*/) override { }
  virtual void exitAssignable(PhpParser::AssignableContext * /*ctx*/) override { }

  virtual void enterArrayCreation(PhpParser::ArrayCreationContext * /*ctx*/) override { }
  virtual void exitArrayCreation(PhpParser::ArrayCreationContext * /*ctx*/) override { }

  virtual void enterArrayDestructuring(PhpParser::ArrayDestructuringContext * /*ctx*/) override { }
  virtual void exitArrayDestructuring(PhpParser::ArrayDestructuringContext * /*ctx*/) override { }

  virtual void enterIndexedDestructItem(PhpParser::IndexedDestructItemContext * /*ctx*/) override { }
  virtual void exitIndexedDestructItem(PhpParser::IndexedDestructItemContext * /*ctx*/) override { }

  virtual void enterKeyedDestructItem(PhpParser::KeyedDestructItemContext * /*ctx*/) override { }
  virtual void exitKeyedDestructItem(PhpParser::KeyedDestructItemContext * /*ctx*/) override { }

  virtual void enterLambdaFunctionExpr(PhpParser::LambdaFunctionExprContext * /*ctx*/) override { }
  virtual void exitLambdaFunctionExpr(PhpParser::LambdaFunctionExprContext * /*ctx*/) override { }

  virtual void enterMatchExpr(PhpParser::MatchExprContext * /*ctx*/) override { }
  virtual void exitMatchExpr(PhpParser::MatchExprContext * /*ctx*/) override { }

  virtual void enterMatchItem(PhpParser::MatchItemContext * /*ctx*/) override { }
  virtual void exitMatchItem(PhpParser::MatchItemContext * /*ctx*/) override { }

  virtual void enterNewExpr(PhpParser::NewExprContext * /*ctx*/) override { }
  virtual void exitNewExpr(PhpParser::NewExprContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(PhpParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(PhpParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterYieldExpression(PhpParser::YieldExpressionContext * /*ctx*/) override { }
  virtual void exitYieldExpression(PhpParser::YieldExpressionContext * /*ctx*/) override { }

  virtual void enterArrayItemList(PhpParser::ArrayItemListContext * /*ctx*/) override { }
  virtual void exitArrayItemList(PhpParser::ArrayItemListContext * /*ctx*/) override { }

  virtual void enterArrayItem(PhpParser::ArrayItemContext * /*ctx*/) override { }
  virtual void exitArrayItem(PhpParser::ArrayItemContext * /*ctx*/) override { }

  virtual void enterLambdaFunctionUseVars(PhpParser::LambdaFunctionUseVarsContext * /*ctx*/) override { }
  virtual void exitLambdaFunctionUseVars(PhpParser::LambdaFunctionUseVarsContext * /*ctx*/) override { }

  virtual void enterLambdaFunctionUseVar(PhpParser::LambdaFunctionUseVarContext * /*ctx*/) override { }
  virtual void exitLambdaFunctionUseVar(PhpParser::LambdaFunctionUseVarContext * /*ctx*/) override { }

  virtual void enterQualifiedStaticTypeRef(PhpParser::QualifiedStaticTypeRefContext * /*ctx*/) override { }
  virtual void exitQualifiedStaticTypeRef(PhpParser::QualifiedStaticTypeRefContext * /*ctx*/) override { }

  virtual void enterTypeRef(PhpParser::TypeRefContext * /*ctx*/) override { }
  virtual void exitTypeRef(PhpParser::TypeRefContext * /*ctx*/) override { }

  virtual void enterAnonymousClass(PhpParser::AnonymousClassContext * /*ctx*/) override { }
  virtual void exitAnonymousClass(PhpParser::AnonymousClassContext * /*ctx*/) override { }

  virtual void enterIndirectTypeRef(PhpParser::IndirectTypeRefContext * /*ctx*/) override { }
  virtual void exitIndirectTypeRef(PhpParser::IndirectTypeRefContext * /*ctx*/) override { }

  virtual void enterQualifiedNamespaceName(PhpParser::QualifiedNamespaceNameContext * /*ctx*/) override { }
  virtual void exitQualifiedNamespaceName(PhpParser::QualifiedNamespaceNameContext * /*ctx*/) override { }

  virtual void enterNamespaceNameList(PhpParser::NamespaceNameListContext * /*ctx*/) override { }
  virtual void exitNamespaceNameList(PhpParser::NamespaceNameListContext * /*ctx*/) override { }

  virtual void enterNamespaceNameTail(PhpParser::NamespaceNameTailContext * /*ctx*/) override { }
  virtual void exitNamespaceNameTail(PhpParser::NamespaceNameTailContext * /*ctx*/) override { }

  virtual void enterQualifiedNamespaceNameList(PhpParser::QualifiedNamespaceNameListContext * /*ctx*/) override { }
  virtual void exitQualifiedNamespaceNameList(PhpParser::QualifiedNamespaceNameListContext * /*ctx*/) override { }

  virtual void enterArguments(PhpParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(PhpParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterActualArgument(PhpParser::ActualArgumentContext * /*ctx*/) override { }
  virtual void exitActualArgument(PhpParser::ActualArgumentContext * /*ctx*/) override { }

  virtual void enterArgumentName(PhpParser::ArgumentNameContext * /*ctx*/) override { }
  virtual void exitArgumentName(PhpParser::ArgumentNameContext * /*ctx*/) override { }

  virtual void enterConstantInitializer(PhpParser::ConstantInitializerContext * /*ctx*/) override { }
  virtual void exitConstantInitializer(PhpParser::ConstantInitializerContext * /*ctx*/) override { }

  virtual void enterConstant(PhpParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(PhpParser::ConstantContext * /*ctx*/) override { }

  virtual void enterLiteralConstant(PhpParser::LiteralConstantContext * /*ctx*/) override { }
  virtual void exitLiteralConstant(PhpParser::LiteralConstantContext * /*ctx*/) override { }

  virtual void enterNumericConstant(PhpParser::NumericConstantContext * /*ctx*/) override { }
  virtual void exitNumericConstant(PhpParser::NumericConstantContext * /*ctx*/) override { }

  virtual void enterClassConstant(PhpParser::ClassConstantContext * /*ctx*/) override { }
  virtual void exitClassConstant(PhpParser::ClassConstantContext * /*ctx*/) override { }

  virtual void enterStringConstant(PhpParser::StringConstantContext * /*ctx*/) override { }
  virtual void exitStringConstant(PhpParser::StringConstantContext * /*ctx*/) override { }

  virtual void enterString(PhpParser::StringContext * /*ctx*/) override { }
  virtual void exitString(PhpParser::StringContext * /*ctx*/) override { }

  virtual void enterInterpolatedStringPart(PhpParser::InterpolatedStringPartContext * /*ctx*/) override { }
  virtual void exitInterpolatedStringPart(PhpParser::InterpolatedStringPartContext * /*ctx*/) override { }

  virtual void enterChainList(PhpParser::ChainListContext * /*ctx*/) override { }
  virtual void exitChainList(PhpParser::ChainListContext * /*ctx*/) override { }

  virtual void enterChain(PhpParser::ChainContext * /*ctx*/) override { }
  virtual void exitChain(PhpParser::ChainContext * /*ctx*/) override { }

  virtual void enterChainOrigin(PhpParser::ChainOriginContext * /*ctx*/) override { }
  virtual void exitChainOrigin(PhpParser::ChainOriginContext * /*ctx*/) override { }

  virtual void enterMemberAccess(PhpParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(PhpParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterFunctionCall(PhpParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(PhpParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionCallName(PhpParser::FunctionCallNameContext * /*ctx*/) override { }
  virtual void exitFunctionCallName(PhpParser::FunctionCallNameContext * /*ctx*/) override { }

  virtual void enterActualArguments(PhpParser::ActualArgumentsContext * /*ctx*/) override { }
  virtual void exitActualArguments(PhpParser::ActualArgumentsContext * /*ctx*/) override { }

  virtual void enterChainBase(PhpParser::ChainBaseContext * /*ctx*/) override { }
  virtual void exitChainBase(PhpParser::ChainBaseContext * /*ctx*/) override { }

  virtual void enterKeyedFieldName(PhpParser::KeyedFieldNameContext * /*ctx*/) override { }
  virtual void exitKeyedFieldName(PhpParser::KeyedFieldNameContext * /*ctx*/) override { }

  virtual void enterKeyedSimpleFieldName(PhpParser::KeyedSimpleFieldNameContext * /*ctx*/) override { }
  virtual void exitKeyedSimpleFieldName(PhpParser::KeyedSimpleFieldNameContext * /*ctx*/) override { }

  virtual void enterKeyedVariable(PhpParser::KeyedVariableContext * /*ctx*/) override { }
  virtual void exitKeyedVariable(PhpParser::KeyedVariableContext * /*ctx*/) override { }

  virtual void enterSquareCurlyExpression(PhpParser::SquareCurlyExpressionContext * /*ctx*/) override { }
  virtual void exitSquareCurlyExpression(PhpParser::SquareCurlyExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentList(PhpParser::AssignmentListContext * /*ctx*/) override { }
  virtual void exitAssignmentList(PhpParser::AssignmentListContext * /*ctx*/) override { }

  virtual void enterAssignmentListElement(PhpParser::AssignmentListElementContext * /*ctx*/) override { }
  virtual void exitAssignmentListElement(PhpParser::AssignmentListElementContext * /*ctx*/) override { }

  virtual void enterModifier(PhpParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(PhpParser::ModifierContext * /*ctx*/) override { }

  virtual void enterIdentifier(PhpParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(PhpParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterMemberModifier(PhpParser::MemberModifierContext * /*ctx*/) override { }
  virtual void exitMemberModifier(PhpParser::MemberModifierContext * /*ctx*/) override { }

  virtual void enterMagicConstant(PhpParser::MagicConstantContext * /*ctx*/) override { }
  virtual void exitMagicConstant(PhpParser::MagicConstantContext * /*ctx*/) override { }

  virtual void enterMagicMethod(PhpParser::MagicMethodContext * /*ctx*/) override { }
  virtual void exitMagicMethod(PhpParser::MagicMethodContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(PhpParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(PhpParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterCastOperation(PhpParser::CastOperationContext * /*ctx*/) override { }
  virtual void exitCastOperation(PhpParser::CastOperationContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

