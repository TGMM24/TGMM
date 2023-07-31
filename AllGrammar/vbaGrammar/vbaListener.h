
// Generated from vba.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "vbaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by vbaParser.
 */
class  vbaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(vbaParser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(vbaParser::StartRuleContext *ctx) = 0;

  virtual void enterModule(vbaParser::ModuleContext *ctx) = 0;
  virtual void exitModule(vbaParser::ModuleContext *ctx) = 0;

  virtual void enterModuleHeader(vbaParser::ModuleHeaderContext *ctx) = 0;
  virtual void exitModuleHeader(vbaParser::ModuleHeaderContext *ctx) = 0;

  virtual void enterModuleConfig(vbaParser::ModuleConfigContext *ctx) = 0;
  virtual void exitModuleConfig(vbaParser::ModuleConfigContext *ctx) = 0;

  virtual void enterModuleConfigElement(vbaParser::ModuleConfigElementContext *ctx) = 0;
  virtual void exitModuleConfigElement(vbaParser::ModuleConfigElementContext *ctx) = 0;

  virtual void enterModuleAttributes(vbaParser::ModuleAttributesContext *ctx) = 0;
  virtual void exitModuleAttributes(vbaParser::ModuleAttributesContext *ctx) = 0;

  virtual void enterModuleDeclarations(vbaParser::ModuleDeclarationsContext *ctx) = 0;
  virtual void exitModuleDeclarations(vbaParser::ModuleDeclarationsContext *ctx) = 0;

  virtual void enterOptionBaseStmt(vbaParser::OptionBaseStmtContext *ctx) = 0;
  virtual void exitOptionBaseStmt(vbaParser::OptionBaseStmtContext *ctx) = 0;

  virtual void enterOptionCompareStmt(vbaParser::OptionCompareStmtContext *ctx) = 0;
  virtual void exitOptionCompareStmt(vbaParser::OptionCompareStmtContext *ctx) = 0;

  virtual void enterOptionExplicitStmt(vbaParser::OptionExplicitStmtContext *ctx) = 0;
  virtual void exitOptionExplicitStmt(vbaParser::OptionExplicitStmtContext *ctx) = 0;

  virtual void enterOptionPrivateModuleStmt(vbaParser::OptionPrivateModuleStmtContext *ctx) = 0;
  virtual void exitOptionPrivateModuleStmt(vbaParser::OptionPrivateModuleStmtContext *ctx) = 0;

  virtual void enterModuleDeclarationsElement(vbaParser::ModuleDeclarationsElementContext *ctx) = 0;
  virtual void exitModuleDeclarationsElement(vbaParser::ModuleDeclarationsElementContext *ctx) = 0;

  virtual void enterMacroStmt(vbaParser::MacroStmtContext *ctx) = 0;
  virtual void exitMacroStmt(vbaParser::MacroStmtContext *ctx) = 0;

  virtual void enterModuleBody(vbaParser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(vbaParser::ModuleBodyContext *ctx) = 0;

  virtual void enterModuleBodyElement(vbaParser::ModuleBodyElementContext *ctx) = 0;
  virtual void exitModuleBodyElement(vbaParser::ModuleBodyElementContext *ctx) = 0;

  virtual void enterAttributeStmt(vbaParser::AttributeStmtContext *ctx) = 0;
  virtual void exitAttributeStmt(vbaParser::AttributeStmtContext *ctx) = 0;

  virtual void enterBlock(vbaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(vbaParser::BlockContext *ctx) = 0;

  virtual void enterBlockStmt(vbaParser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(vbaParser::BlockStmtContext *ctx) = 0;

  virtual void enterAppactivateStmt(vbaParser::AppactivateStmtContext *ctx) = 0;
  virtual void exitAppactivateStmt(vbaParser::AppactivateStmtContext *ctx) = 0;

  virtual void enterBeepStmt(vbaParser::BeepStmtContext *ctx) = 0;
  virtual void exitBeepStmt(vbaParser::BeepStmtContext *ctx) = 0;

  virtual void enterChdirStmt(vbaParser::ChdirStmtContext *ctx) = 0;
  virtual void exitChdirStmt(vbaParser::ChdirStmtContext *ctx) = 0;

  virtual void enterChdriveStmt(vbaParser::ChdriveStmtContext *ctx) = 0;
  virtual void exitChdriveStmt(vbaParser::ChdriveStmtContext *ctx) = 0;

  virtual void enterCloseStmt(vbaParser::CloseStmtContext *ctx) = 0;
  virtual void exitCloseStmt(vbaParser::CloseStmtContext *ctx) = 0;

  virtual void enterConstStmt(vbaParser::ConstStmtContext *ctx) = 0;
  virtual void exitConstStmt(vbaParser::ConstStmtContext *ctx) = 0;

  virtual void enterConstSubStmt(vbaParser::ConstSubStmtContext *ctx) = 0;
  virtual void exitConstSubStmt(vbaParser::ConstSubStmtContext *ctx) = 0;

  virtual void enterDateStmt(vbaParser::DateStmtContext *ctx) = 0;
  virtual void exitDateStmt(vbaParser::DateStmtContext *ctx) = 0;

  virtual void enterDeclareStmt(vbaParser::DeclareStmtContext *ctx) = 0;
  virtual void exitDeclareStmt(vbaParser::DeclareStmtContext *ctx) = 0;

  virtual void enterDeftypeStmt(vbaParser::DeftypeStmtContext *ctx) = 0;
  virtual void exitDeftypeStmt(vbaParser::DeftypeStmtContext *ctx) = 0;

  virtual void enterDeleteSettingStmt(vbaParser::DeleteSettingStmtContext *ctx) = 0;
  virtual void exitDeleteSettingStmt(vbaParser::DeleteSettingStmtContext *ctx) = 0;

  virtual void enterDoLoopStmt(vbaParser::DoLoopStmtContext *ctx) = 0;
  virtual void exitDoLoopStmt(vbaParser::DoLoopStmtContext *ctx) = 0;

  virtual void enterEndStmt(vbaParser::EndStmtContext *ctx) = 0;
  virtual void exitEndStmt(vbaParser::EndStmtContext *ctx) = 0;

  virtual void enterEnumerationStmt(vbaParser::EnumerationStmtContext *ctx) = 0;
  virtual void exitEnumerationStmt(vbaParser::EnumerationStmtContext *ctx) = 0;

  virtual void enterEnumerationStmt_Constant(vbaParser::EnumerationStmt_ConstantContext *ctx) = 0;
  virtual void exitEnumerationStmt_Constant(vbaParser::EnumerationStmt_ConstantContext *ctx) = 0;

  virtual void enterEraseStmt(vbaParser::EraseStmtContext *ctx) = 0;
  virtual void exitEraseStmt(vbaParser::EraseStmtContext *ctx) = 0;

  virtual void enterErrorStmt(vbaParser::ErrorStmtContext *ctx) = 0;
  virtual void exitErrorStmt(vbaParser::ErrorStmtContext *ctx) = 0;

  virtual void enterEventStmt(vbaParser::EventStmtContext *ctx) = 0;
  virtual void exitEventStmt(vbaParser::EventStmtContext *ctx) = 0;

  virtual void enterExitStmt(vbaParser::ExitStmtContext *ctx) = 0;
  virtual void exitExitStmt(vbaParser::ExitStmtContext *ctx) = 0;

  virtual void enterFilecopyStmt(vbaParser::FilecopyStmtContext *ctx) = 0;
  virtual void exitFilecopyStmt(vbaParser::FilecopyStmtContext *ctx) = 0;

  virtual void enterForEachStmt(vbaParser::ForEachStmtContext *ctx) = 0;
  virtual void exitForEachStmt(vbaParser::ForEachStmtContext *ctx) = 0;

  virtual void enterForNextStmt(vbaParser::ForNextStmtContext *ctx) = 0;
  virtual void exitForNextStmt(vbaParser::ForNextStmtContext *ctx) = 0;

  virtual void enterFunctionStmt(vbaParser::FunctionStmtContext *ctx) = 0;
  virtual void exitFunctionStmt(vbaParser::FunctionStmtContext *ctx) = 0;

  virtual void enterGetStmt(vbaParser::GetStmtContext *ctx) = 0;
  virtual void exitGetStmt(vbaParser::GetStmtContext *ctx) = 0;

  virtual void enterGoSubStmt(vbaParser::GoSubStmtContext *ctx) = 0;
  virtual void exitGoSubStmt(vbaParser::GoSubStmtContext *ctx) = 0;

  virtual void enterGoToStmt(vbaParser::GoToStmtContext *ctx) = 0;
  virtual void exitGoToStmt(vbaParser::GoToStmtContext *ctx) = 0;

  virtual void enterInlineIfThenElse(vbaParser::InlineIfThenElseContext *ctx) = 0;
  virtual void exitInlineIfThenElse(vbaParser::InlineIfThenElseContext *ctx) = 0;

  virtual void enterBlockIfThenElse(vbaParser::BlockIfThenElseContext *ctx) = 0;
  virtual void exitBlockIfThenElse(vbaParser::BlockIfThenElseContext *ctx) = 0;

  virtual void enterIfBlockStmt(vbaParser::IfBlockStmtContext *ctx) = 0;
  virtual void exitIfBlockStmt(vbaParser::IfBlockStmtContext *ctx) = 0;

  virtual void enterIfConditionStmt(vbaParser::IfConditionStmtContext *ctx) = 0;
  virtual void exitIfConditionStmt(vbaParser::IfConditionStmtContext *ctx) = 0;

  virtual void enterIfElseIfBlockStmt(vbaParser::IfElseIfBlockStmtContext *ctx) = 0;
  virtual void exitIfElseIfBlockStmt(vbaParser::IfElseIfBlockStmtContext *ctx) = 0;

  virtual void enterIfElseBlockStmt(vbaParser::IfElseBlockStmtContext *ctx) = 0;
  virtual void exitIfElseBlockStmt(vbaParser::IfElseBlockStmtContext *ctx) = 0;

  virtual void enterImplementsStmt(vbaParser::ImplementsStmtContext *ctx) = 0;
  virtual void exitImplementsStmt(vbaParser::ImplementsStmtContext *ctx) = 0;

  virtual void enterInputStmt(vbaParser::InputStmtContext *ctx) = 0;
  virtual void exitInputStmt(vbaParser::InputStmtContext *ctx) = 0;

  virtual void enterKillStmt(vbaParser::KillStmtContext *ctx) = 0;
  virtual void exitKillStmt(vbaParser::KillStmtContext *ctx) = 0;

  virtual void enterLetStmt(vbaParser::LetStmtContext *ctx) = 0;
  virtual void exitLetStmt(vbaParser::LetStmtContext *ctx) = 0;

  virtual void enterLineInputStmt(vbaParser::LineInputStmtContext *ctx) = 0;
  virtual void exitLineInputStmt(vbaParser::LineInputStmtContext *ctx) = 0;

  virtual void enterLoadStmt(vbaParser::LoadStmtContext *ctx) = 0;
  virtual void exitLoadStmt(vbaParser::LoadStmtContext *ctx) = 0;

  virtual void enterLockStmt(vbaParser::LockStmtContext *ctx) = 0;
  virtual void exitLockStmt(vbaParser::LockStmtContext *ctx) = 0;

  virtual void enterLsetStmt(vbaParser::LsetStmtContext *ctx) = 0;
  virtual void exitLsetStmt(vbaParser::LsetStmtContext *ctx) = 0;

  virtual void enterMacroConstStmt(vbaParser::MacroConstStmtContext *ctx) = 0;
  virtual void exitMacroConstStmt(vbaParser::MacroConstStmtContext *ctx) = 0;

  virtual void enterMacroIfThenElseStmt(vbaParser::MacroIfThenElseStmtContext *ctx) = 0;
  virtual void exitMacroIfThenElseStmt(vbaParser::MacroIfThenElseStmtContext *ctx) = 0;

  virtual void enterMacroIfBlockStmt(vbaParser::MacroIfBlockStmtContext *ctx) = 0;
  virtual void exitMacroIfBlockStmt(vbaParser::MacroIfBlockStmtContext *ctx) = 0;

  virtual void enterMacroElseIfBlockStmt(vbaParser::MacroElseIfBlockStmtContext *ctx) = 0;
  virtual void exitMacroElseIfBlockStmt(vbaParser::MacroElseIfBlockStmtContext *ctx) = 0;

  virtual void enterMacroElseBlockStmt(vbaParser::MacroElseBlockStmtContext *ctx) = 0;
  virtual void exitMacroElseBlockStmt(vbaParser::MacroElseBlockStmtContext *ctx) = 0;

  virtual void enterMidStmt(vbaParser::MidStmtContext *ctx) = 0;
  virtual void exitMidStmt(vbaParser::MidStmtContext *ctx) = 0;

  virtual void enterMkdirStmt(vbaParser::MkdirStmtContext *ctx) = 0;
  virtual void exitMkdirStmt(vbaParser::MkdirStmtContext *ctx) = 0;

  virtual void enterNameStmt(vbaParser::NameStmtContext *ctx) = 0;
  virtual void exitNameStmt(vbaParser::NameStmtContext *ctx) = 0;

  virtual void enterOnErrorStmt(vbaParser::OnErrorStmtContext *ctx) = 0;
  virtual void exitOnErrorStmt(vbaParser::OnErrorStmtContext *ctx) = 0;

  virtual void enterOnGoToStmt(vbaParser::OnGoToStmtContext *ctx) = 0;
  virtual void exitOnGoToStmt(vbaParser::OnGoToStmtContext *ctx) = 0;

  virtual void enterOnGoSubStmt(vbaParser::OnGoSubStmtContext *ctx) = 0;
  virtual void exitOnGoSubStmt(vbaParser::OnGoSubStmtContext *ctx) = 0;

  virtual void enterOpenStmt(vbaParser::OpenStmtContext *ctx) = 0;
  virtual void exitOpenStmt(vbaParser::OpenStmtContext *ctx) = 0;

  virtual void enterOutputList(vbaParser::OutputListContext *ctx) = 0;
  virtual void exitOutputList(vbaParser::OutputListContext *ctx) = 0;

  virtual void enterOutputList_Expression(vbaParser::OutputList_ExpressionContext *ctx) = 0;
  virtual void exitOutputList_Expression(vbaParser::OutputList_ExpressionContext *ctx) = 0;

  virtual void enterPrintStmt(vbaParser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(vbaParser::PrintStmtContext *ctx) = 0;

  virtual void enterPropertyGetStmt(vbaParser::PropertyGetStmtContext *ctx) = 0;
  virtual void exitPropertyGetStmt(vbaParser::PropertyGetStmtContext *ctx) = 0;

  virtual void enterPropertySetStmt(vbaParser::PropertySetStmtContext *ctx) = 0;
  virtual void exitPropertySetStmt(vbaParser::PropertySetStmtContext *ctx) = 0;

  virtual void enterPropertyLetStmt(vbaParser::PropertyLetStmtContext *ctx) = 0;
  virtual void exitPropertyLetStmt(vbaParser::PropertyLetStmtContext *ctx) = 0;

  virtual void enterPutStmt(vbaParser::PutStmtContext *ctx) = 0;
  virtual void exitPutStmt(vbaParser::PutStmtContext *ctx) = 0;

  virtual void enterRaiseEventStmt(vbaParser::RaiseEventStmtContext *ctx) = 0;
  virtual void exitRaiseEventStmt(vbaParser::RaiseEventStmtContext *ctx) = 0;

  virtual void enterRandomizeStmt(vbaParser::RandomizeStmtContext *ctx) = 0;
  virtual void exitRandomizeStmt(vbaParser::RandomizeStmtContext *ctx) = 0;

  virtual void enterRedimStmt(vbaParser::RedimStmtContext *ctx) = 0;
  virtual void exitRedimStmt(vbaParser::RedimStmtContext *ctx) = 0;

  virtual void enterRedimSubStmt(vbaParser::RedimSubStmtContext *ctx) = 0;
  virtual void exitRedimSubStmt(vbaParser::RedimSubStmtContext *ctx) = 0;

  virtual void enterResetStmt(vbaParser::ResetStmtContext *ctx) = 0;
  virtual void exitResetStmt(vbaParser::ResetStmtContext *ctx) = 0;

  virtual void enterResumeStmt(vbaParser::ResumeStmtContext *ctx) = 0;
  virtual void exitResumeStmt(vbaParser::ResumeStmtContext *ctx) = 0;

  virtual void enterReturnStmt(vbaParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(vbaParser::ReturnStmtContext *ctx) = 0;

  virtual void enterRmdirStmt(vbaParser::RmdirStmtContext *ctx) = 0;
  virtual void exitRmdirStmt(vbaParser::RmdirStmtContext *ctx) = 0;

  virtual void enterRsetStmt(vbaParser::RsetStmtContext *ctx) = 0;
  virtual void exitRsetStmt(vbaParser::RsetStmtContext *ctx) = 0;

  virtual void enterSavepictureStmt(vbaParser::SavepictureStmtContext *ctx) = 0;
  virtual void exitSavepictureStmt(vbaParser::SavepictureStmtContext *ctx) = 0;

  virtual void enterSaveSettingStmt(vbaParser::SaveSettingStmtContext *ctx) = 0;
  virtual void exitSaveSettingStmt(vbaParser::SaveSettingStmtContext *ctx) = 0;

  virtual void enterSeekStmt(vbaParser::SeekStmtContext *ctx) = 0;
  virtual void exitSeekStmt(vbaParser::SeekStmtContext *ctx) = 0;

  virtual void enterSelectCaseStmt(vbaParser::SelectCaseStmtContext *ctx) = 0;
  virtual void exitSelectCaseStmt(vbaParser::SelectCaseStmtContext *ctx) = 0;

  virtual void enterCaseCondIs(vbaParser::CaseCondIsContext *ctx) = 0;
  virtual void exitCaseCondIs(vbaParser::CaseCondIsContext *ctx) = 0;

  virtual void enterCaseCondTo(vbaParser::CaseCondToContext *ctx) = 0;
  virtual void exitCaseCondTo(vbaParser::CaseCondToContext *ctx) = 0;

  virtual void enterCaseCondValue(vbaParser::CaseCondValueContext *ctx) = 0;
  virtual void exitCaseCondValue(vbaParser::CaseCondValueContext *ctx) = 0;

  virtual void enterSC_Case(vbaParser::SC_CaseContext *ctx) = 0;
  virtual void exitSC_Case(vbaParser::SC_CaseContext *ctx) = 0;

  virtual void enterCaseCondElse(vbaParser::CaseCondElseContext *ctx) = 0;
  virtual void exitCaseCondElse(vbaParser::CaseCondElseContext *ctx) = 0;

  virtual void enterCaseCondSelection(vbaParser::CaseCondSelectionContext *ctx) = 0;
  virtual void exitCaseCondSelection(vbaParser::CaseCondSelectionContext *ctx) = 0;

  virtual void enterSendkeysStmt(vbaParser::SendkeysStmtContext *ctx) = 0;
  virtual void exitSendkeysStmt(vbaParser::SendkeysStmtContext *ctx) = 0;

  virtual void enterSetattrStmt(vbaParser::SetattrStmtContext *ctx) = 0;
  virtual void exitSetattrStmt(vbaParser::SetattrStmtContext *ctx) = 0;

  virtual void enterSetStmt(vbaParser::SetStmtContext *ctx) = 0;
  virtual void exitSetStmt(vbaParser::SetStmtContext *ctx) = 0;

  virtual void enterStopStmt(vbaParser::StopStmtContext *ctx) = 0;
  virtual void exitStopStmt(vbaParser::StopStmtContext *ctx) = 0;

  virtual void enterSubStmt(vbaParser::SubStmtContext *ctx) = 0;
  virtual void exitSubStmt(vbaParser::SubStmtContext *ctx) = 0;

  virtual void enterTimeStmt(vbaParser::TimeStmtContext *ctx) = 0;
  virtual void exitTimeStmt(vbaParser::TimeStmtContext *ctx) = 0;

  virtual void enterTypeStmt(vbaParser::TypeStmtContext *ctx) = 0;
  virtual void exitTypeStmt(vbaParser::TypeStmtContext *ctx) = 0;

  virtual void enterTypeStmt_Element(vbaParser::TypeStmt_ElementContext *ctx) = 0;
  virtual void exitTypeStmt_Element(vbaParser::TypeStmt_ElementContext *ctx) = 0;

  virtual void enterTypeOfStmt(vbaParser::TypeOfStmtContext *ctx) = 0;
  virtual void exitTypeOfStmt(vbaParser::TypeOfStmtContext *ctx) = 0;

  virtual void enterUnloadStmt(vbaParser::UnloadStmtContext *ctx) = 0;
  virtual void exitUnloadStmt(vbaParser::UnloadStmtContext *ctx) = 0;

  virtual void enterUnlockStmt(vbaParser::UnlockStmtContext *ctx) = 0;
  virtual void exitUnlockStmt(vbaParser::UnlockStmtContext *ctx) = 0;

  virtual void enterVsAssign(vbaParser::VsAssignContext *ctx) = 0;
  virtual void exitVsAssign(vbaParser::VsAssignContext *ctx) = 0;

  virtual void enterVsPlus(vbaParser::VsPlusContext *ctx) = 0;
  virtual void exitVsPlus(vbaParser::VsPlusContext *ctx) = 0;

  virtual void enterVsNot(vbaParser::VsNotContext *ctx) = 0;
  virtual void exitVsNot(vbaParser::VsNotContext *ctx) = 0;

  virtual void enterVsStruct(vbaParser::VsStructContext *ctx) = 0;
  virtual void exitVsStruct(vbaParser::VsStructContext *ctx) = 0;

  virtual void enterVsTypeOf(vbaParser::VsTypeOfContext *ctx) = 0;
  virtual void exitVsTypeOf(vbaParser::VsTypeOfContext *ctx) = 0;

  virtual void enterVsICS(vbaParser::VsICSContext *ctx) = 0;
  virtual void exitVsICS(vbaParser::VsICSContext *ctx) = 0;

  virtual void enterVsRelational(vbaParser::VsRelationalContext *ctx) = 0;
  virtual void exitVsRelational(vbaParser::VsRelationalContext *ctx) = 0;

  virtual void enterVsAddMinus(vbaParser::VsAddMinusContext *ctx) = 0;
  virtual void exitVsAddMinus(vbaParser::VsAddMinusContext *ctx) = 0;

  virtual void enterVsXor(vbaParser::VsXorContext *ctx) = 0;
  virtual void exitVsXor(vbaParser::VsXorContext *ctx) = 0;

  virtual void enterVsDivMult(vbaParser::VsDivMultContext *ctx) = 0;
  virtual void exitVsDivMult(vbaParser::VsDivMultContext *ctx) = 0;

  virtual void enterVsAnd(vbaParser::VsAndContext *ctx) = 0;
  virtual void exitVsAnd(vbaParser::VsAndContext *ctx) = 0;

  virtual void enterVsPow(vbaParser::VsPowContext *ctx) = 0;
  virtual void exitVsPow(vbaParser::VsPowContext *ctx) = 0;

  virtual void enterVsMod(vbaParser::VsModContext *ctx) = 0;
  virtual void exitVsMod(vbaParser::VsModContext *ctx) = 0;

  virtual void enterVsAmp(vbaParser::VsAmpContext *ctx) = 0;
  virtual void exitVsAmp(vbaParser::VsAmpContext *ctx) = 0;

  virtual void enterVsAddressOf(vbaParser::VsAddressOfContext *ctx) = 0;
  virtual void exitVsAddressOf(vbaParser::VsAddressOfContext *ctx) = 0;

  virtual void enterVsNew(vbaParser::VsNewContext *ctx) = 0;
  virtual void exitVsNew(vbaParser::VsNewContext *ctx) = 0;

  virtual void enterVsOr(vbaParser::VsOrContext *ctx) = 0;
  virtual void exitVsOr(vbaParser::VsOrContext *ctx) = 0;

  virtual void enterVsLiteral(vbaParser::VsLiteralContext *ctx) = 0;
  virtual void exitVsLiteral(vbaParser::VsLiteralContext *ctx) = 0;

  virtual void enterVsEqv(vbaParser::VsEqvContext *ctx) = 0;
  virtual void exitVsEqv(vbaParser::VsEqvContext *ctx) = 0;

  virtual void enterVsNegation(vbaParser::VsNegationContext *ctx) = 0;
  virtual void exitVsNegation(vbaParser::VsNegationContext *ctx) = 0;

  virtual void enterVsImp(vbaParser::VsImpContext *ctx) = 0;
  virtual void exitVsImp(vbaParser::VsImpContext *ctx) = 0;

  virtual void enterVsMid(vbaParser::VsMidContext *ctx) = 0;
  virtual void exitVsMid(vbaParser::VsMidContext *ctx) = 0;

  virtual void enterVariableStmt(vbaParser::VariableStmtContext *ctx) = 0;
  virtual void exitVariableStmt(vbaParser::VariableStmtContext *ctx) = 0;

  virtual void enterVariableListStmt(vbaParser::VariableListStmtContext *ctx) = 0;
  virtual void exitVariableListStmt(vbaParser::VariableListStmtContext *ctx) = 0;

  virtual void enterVariableSubStmt(vbaParser::VariableSubStmtContext *ctx) = 0;
  virtual void exitVariableSubStmt(vbaParser::VariableSubStmtContext *ctx) = 0;

  virtual void enterWhileWendStmt(vbaParser::WhileWendStmtContext *ctx) = 0;
  virtual void exitWhileWendStmt(vbaParser::WhileWendStmtContext *ctx) = 0;

  virtual void enterWidthStmt(vbaParser::WidthStmtContext *ctx) = 0;
  virtual void exitWidthStmt(vbaParser::WidthStmtContext *ctx) = 0;

  virtual void enterWithStmt(vbaParser::WithStmtContext *ctx) = 0;
  virtual void exitWithStmt(vbaParser::WithStmtContext *ctx) = 0;

  virtual void enterWriteStmt(vbaParser::WriteStmtContext *ctx) = 0;
  virtual void exitWriteStmt(vbaParser::WriteStmtContext *ctx) = 0;

  virtual void enterFileNumber(vbaParser::FileNumberContext *ctx) = 0;
  virtual void exitFileNumber(vbaParser::FileNumberContext *ctx) = 0;

  virtual void enterExplicitCallStmt(vbaParser::ExplicitCallStmtContext *ctx) = 0;
  virtual void exitExplicitCallStmt(vbaParser::ExplicitCallStmtContext *ctx) = 0;

  virtual void enterECS_ProcedureCall(vbaParser::ECS_ProcedureCallContext *ctx) = 0;
  virtual void exitECS_ProcedureCall(vbaParser::ECS_ProcedureCallContext *ctx) = 0;

  virtual void enterECS_MemberProcedureCall(vbaParser::ECS_MemberProcedureCallContext *ctx) = 0;
  virtual void exitECS_MemberProcedureCall(vbaParser::ECS_MemberProcedureCallContext *ctx) = 0;

  virtual void enterImplicitCallStmt_InBlock(vbaParser::ImplicitCallStmt_InBlockContext *ctx) = 0;
  virtual void exitImplicitCallStmt_InBlock(vbaParser::ImplicitCallStmt_InBlockContext *ctx) = 0;

  virtual void enterICS_B_MemberProcedureCall(vbaParser::ICS_B_MemberProcedureCallContext *ctx) = 0;
  virtual void exitICS_B_MemberProcedureCall(vbaParser::ICS_B_MemberProcedureCallContext *ctx) = 0;

  virtual void enterICS_B_ProcedureCall(vbaParser::ICS_B_ProcedureCallContext *ctx) = 0;
  virtual void exitICS_B_ProcedureCall(vbaParser::ICS_B_ProcedureCallContext *ctx) = 0;

  virtual void enterImplicitCallStmt_InStmt(vbaParser::ImplicitCallStmt_InStmtContext *ctx) = 0;
  virtual void exitImplicitCallStmt_InStmt(vbaParser::ImplicitCallStmt_InStmtContext *ctx) = 0;

  virtual void enterICS_S_VariableOrProcedureCall(vbaParser::ICS_S_VariableOrProcedureCallContext *ctx) = 0;
  virtual void exitICS_S_VariableOrProcedureCall(vbaParser::ICS_S_VariableOrProcedureCallContext *ctx) = 0;

  virtual void enterICS_S_ProcedureOrArrayCall(vbaParser::ICS_S_ProcedureOrArrayCallContext *ctx) = 0;
  virtual void exitICS_S_ProcedureOrArrayCall(vbaParser::ICS_S_ProcedureOrArrayCallContext *ctx) = 0;

  virtual void enterICS_S_MembersCall(vbaParser::ICS_S_MembersCallContext *ctx) = 0;
  virtual void exitICS_S_MembersCall(vbaParser::ICS_S_MembersCallContext *ctx) = 0;

  virtual void enterICS_S_MemberCall(vbaParser::ICS_S_MemberCallContext *ctx) = 0;
  virtual void exitICS_S_MemberCall(vbaParser::ICS_S_MemberCallContext *ctx) = 0;

  virtual void enterICS_S_DictionaryCall(vbaParser::ICS_S_DictionaryCallContext *ctx) = 0;
  virtual void exitICS_S_DictionaryCall(vbaParser::ICS_S_DictionaryCallContext *ctx) = 0;

  virtual void enterArgsCall(vbaParser::ArgsCallContext *ctx) = 0;
  virtual void exitArgsCall(vbaParser::ArgsCallContext *ctx) = 0;

  virtual void enterArgCall(vbaParser::ArgCallContext *ctx) = 0;
  virtual void exitArgCall(vbaParser::ArgCallContext *ctx) = 0;

  virtual void enterDictionaryCallStmt(vbaParser::DictionaryCallStmtContext *ctx) = 0;
  virtual void exitDictionaryCallStmt(vbaParser::DictionaryCallStmtContext *ctx) = 0;

  virtual void enterArgList(vbaParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(vbaParser::ArgListContext *ctx) = 0;

  virtual void enterArg(vbaParser::ArgContext *ctx) = 0;
  virtual void exitArg(vbaParser::ArgContext *ctx) = 0;

  virtual void enterArgDefaultValue(vbaParser::ArgDefaultValueContext *ctx) = 0;
  virtual void exitArgDefaultValue(vbaParser::ArgDefaultValueContext *ctx) = 0;

  virtual void enterSubscripts(vbaParser::SubscriptsContext *ctx) = 0;
  virtual void exitSubscripts(vbaParser::SubscriptsContext *ctx) = 0;

  virtual void enterSubscript_(vbaParser::Subscript_Context *ctx) = 0;
  virtual void exitSubscript_(vbaParser::Subscript_Context *ctx) = 0;

  virtual void enterAmbiguousIdentifier(vbaParser::AmbiguousIdentifierContext *ctx) = 0;
  virtual void exitAmbiguousIdentifier(vbaParser::AmbiguousIdentifierContext *ctx) = 0;

  virtual void enterAsTypeClause(vbaParser::AsTypeClauseContext *ctx) = 0;
  virtual void exitAsTypeClause(vbaParser::AsTypeClauseContext *ctx) = 0;

  virtual void enterBaseType(vbaParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(vbaParser::BaseTypeContext *ctx) = 0;

  virtual void enterCertainIdentifier(vbaParser::CertainIdentifierContext *ctx) = 0;
  virtual void exitCertainIdentifier(vbaParser::CertainIdentifierContext *ctx) = 0;

  virtual void enterComparisonOperator(vbaParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(vbaParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterComplexType(vbaParser::ComplexTypeContext *ctx) = 0;
  virtual void exitComplexType(vbaParser::ComplexTypeContext *ctx) = 0;

  virtual void enterFieldLength(vbaParser::FieldLengthContext *ctx) = 0;
  virtual void exitFieldLength(vbaParser::FieldLengthContext *ctx) = 0;

  virtual void enterLetterrange(vbaParser::LetterrangeContext *ctx) = 0;
  virtual void exitLetterrange(vbaParser::LetterrangeContext *ctx) = 0;

  virtual void enterLineLabel(vbaParser::LineLabelContext *ctx) = 0;
  virtual void exitLineLabel(vbaParser::LineLabelContext *ctx) = 0;

  virtual void enterLiteral(vbaParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(vbaParser::LiteralContext *ctx) = 0;

  virtual void enterType_(vbaParser::Type_Context *ctx) = 0;
  virtual void exitType_(vbaParser::Type_Context *ctx) = 0;

  virtual void enterTypeHint(vbaParser::TypeHintContext *ctx) = 0;
  virtual void exitTypeHint(vbaParser::TypeHintContext *ctx) = 0;

  virtual void enterVisibility(vbaParser::VisibilityContext *ctx) = 0;
  virtual void exitVisibility(vbaParser::VisibilityContext *ctx) = 0;

  virtual void enterAmbiguousKeyword(vbaParser::AmbiguousKeywordContext *ctx) = 0;
  virtual void exitAmbiguousKeyword(vbaParser::AmbiguousKeywordContext *ctx) = 0;

  virtual void enterRemComment(vbaParser::RemCommentContext *ctx) = 0;
  virtual void exitRemComment(vbaParser::RemCommentContext *ctx) = 0;

  virtual void enterComment(vbaParser::CommentContext *ctx) = 0;
  virtual void exitComment(vbaParser::CommentContext *ctx) = 0;

  virtual void enterEndOfLine(vbaParser::EndOfLineContext *ctx) = 0;
  virtual void exitEndOfLine(vbaParser::EndOfLineContext *ctx) = 0;

  virtual void enterEndOfStatement(vbaParser::EndOfStatementContext *ctx) = 0;
  virtual void exitEndOfStatement(vbaParser::EndOfStatementContext *ctx) = 0;


};

