
// Generated from VisualBasic6Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "VisualBasic6Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VisualBasic6Parser.
 */
class  VisualBasic6ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(VisualBasic6Parser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(VisualBasic6Parser::StartRuleContext *ctx) = 0;

  virtual void enterModule(VisualBasic6Parser::ModuleContext *ctx) = 0;
  virtual void exitModule(VisualBasic6Parser::ModuleContext *ctx) = 0;

  virtual void enterModuleReferences(VisualBasic6Parser::ModuleReferencesContext *ctx) = 0;
  virtual void exitModuleReferences(VisualBasic6Parser::ModuleReferencesContext *ctx) = 0;

  virtual void enterModuleReference(VisualBasic6Parser::ModuleReferenceContext *ctx) = 0;
  virtual void exitModuleReference(VisualBasic6Parser::ModuleReferenceContext *ctx) = 0;

  virtual void enterModuleReferenceValue(VisualBasic6Parser::ModuleReferenceValueContext *ctx) = 0;
  virtual void exitModuleReferenceValue(VisualBasic6Parser::ModuleReferenceValueContext *ctx) = 0;

  virtual void enterModuleReferenceComponent(VisualBasic6Parser::ModuleReferenceComponentContext *ctx) = 0;
  virtual void exitModuleReferenceComponent(VisualBasic6Parser::ModuleReferenceComponentContext *ctx) = 0;

  virtual void enterModuleHeader(VisualBasic6Parser::ModuleHeaderContext *ctx) = 0;
  virtual void exitModuleHeader(VisualBasic6Parser::ModuleHeaderContext *ctx) = 0;

  virtual void enterModuleConfig(VisualBasic6Parser::ModuleConfigContext *ctx) = 0;
  virtual void exitModuleConfig(VisualBasic6Parser::ModuleConfigContext *ctx) = 0;

  virtual void enterModuleConfigElement(VisualBasic6Parser::ModuleConfigElementContext *ctx) = 0;
  virtual void exitModuleConfigElement(VisualBasic6Parser::ModuleConfigElementContext *ctx) = 0;

  virtual void enterModuleAttributes(VisualBasic6Parser::ModuleAttributesContext *ctx) = 0;
  virtual void exitModuleAttributes(VisualBasic6Parser::ModuleAttributesContext *ctx) = 0;

  virtual void enterModuleOptions(VisualBasic6Parser::ModuleOptionsContext *ctx) = 0;
  virtual void exitModuleOptions(VisualBasic6Parser::ModuleOptionsContext *ctx) = 0;

  virtual void enterOptionBaseStmt(VisualBasic6Parser::OptionBaseStmtContext *ctx) = 0;
  virtual void exitOptionBaseStmt(VisualBasic6Parser::OptionBaseStmtContext *ctx) = 0;

  virtual void enterOptionCompareStmt(VisualBasic6Parser::OptionCompareStmtContext *ctx) = 0;
  virtual void exitOptionCompareStmt(VisualBasic6Parser::OptionCompareStmtContext *ctx) = 0;

  virtual void enterOptionExplicitStmt(VisualBasic6Parser::OptionExplicitStmtContext *ctx) = 0;
  virtual void exitOptionExplicitStmt(VisualBasic6Parser::OptionExplicitStmtContext *ctx) = 0;

  virtual void enterOptionPrivateModuleStmt(VisualBasic6Parser::OptionPrivateModuleStmtContext *ctx) = 0;
  virtual void exitOptionPrivateModuleStmt(VisualBasic6Parser::OptionPrivateModuleStmtContext *ctx) = 0;

  virtual void enterModuleBody(VisualBasic6Parser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(VisualBasic6Parser::ModuleBodyContext *ctx) = 0;

  virtual void enterModuleBodyElement(VisualBasic6Parser::ModuleBodyElementContext *ctx) = 0;
  virtual void exitModuleBodyElement(VisualBasic6Parser::ModuleBodyElementContext *ctx) = 0;

  virtual void enterControlProperties(VisualBasic6Parser::ControlPropertiesContext *ctx) = 0;
  virtual void exitControlProperties(VisualBasic6Parser::ControlPropertiesContext *ctx) = 0;

  virtual void enterCp_Properties(VisualBasic6Parser::Cp_PropertiesContext *ctx) = 0;
  virtual void exitCp_Properties(VisualBasic6Parser::Cp_PropertiesContext *ctx) = 0;

  virtual void enterCp_SingleProperty(VisualBasic6Parser::Cp_SinglePropertyContext *ctx) = 0;
  virtual void exitCp_SingleProperty(VisualBasic6Parser::Cp_SinglePropertyContext *ctx) = 0;

  virtual void enterCp_PropertyName(VisualBasic6Parser::Cp_PropertyNameContext *ctx) = 0;
  virtual void exitCp_PropertyName(VisualBasic6Parser::Cp_PropertyNameContext *ctx) = 0;

  virtual void enterCp_PropertyValue(VisualBasic6Parser::Cp_PropertyValueContext *ctx) = 0;
  virtual void exitCp_PropertyValue(VisualBasic6Parser::Cp_PropertyValueContext *ctx) = 0;

  virtual void enterCp_NestedProperty(VisualBasic6Parser::Cp_NestedPropertyContext *ctx) = 0;
  virtual void exitCp_NestedProperty(VisualBasic6Parser::Cp_NestedPropertyContext *ctx) = 0;

  virtual void enterCp_ControlType(VisualBasic6Parser::Cp_ControlTypeContext *ctx) = 0;
  virtual void exitCp_ControlType(VisualBasic6Parser::Cp_ControlTypeContext *ctx) = 0;

  virtual void enterCp_ControlIdentifier(VisualBasic6Parser::Cp_ControlIdentifierContext *ctx) = 0;
  virtual void exitCp_ControlIdentifier(VisualBasic6Parser::Cp_ControlIdentifierContext *ctx) = 0;

  virtual void enterModuleBlock(VisualBasic6Parser::ModuleBlockContext *ctx) = 0;
  virtual void exitModuleBlock(VisualBasic6Parser::ModuleBlockContext *ctx) = 0;

  virtual void enterAttributeStmt(VisualBasic6Parser::AttributeStmtContext *ctx) = 0;
  virtual void exitAttributeStmt(VisualBasic6Parser::AttributeStmtContext *ctx) = 0;

  virtual void enterBlock(VisualBasic6Parser::BlockContext *ctx) = 0;
  virtual void exitBlock(VisualBasic6Parser::BlockContext *ctx) = 0;

  virtual void enterBlockStmt(VisualBasic6Parser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(VisualBasic6Parser::BlockStmtContext *ctx) = 0;

  virtual void enterAppActivateStmt(VisualBasic6Parser::AppActivateStmtContext *ctx) = 0;
  virtual void exitAppActivateStmt(VisualBasic6Parser::AppActivateStmtContext *ctx) = 0;

  virtual void enterBeepStmt(VisualBasic6Parser::BeepStmtContext *ctx) = 0;
  virtual void exitBeepStmt(VisualBasic6Parser::BeepStmtContext *ctx) = 0;

  virtual void enterChDirStmt(VisualBasic6Parser::ChDirStmtContext *ctx) = 0;
  virtual void exitChDirStmt(VisualBasic6Parser::ChDirStmtContext *ctx) = 0;

  virtual void enterChDriveStmt(VisualBasic6Parser::ChDriveStmtContext *ctx) = 0;
  virtual void exitChDriveStmt(VisualBasic6Parser::ChDriveStmtContext *ctx) = 0;

  virtual void enterCloseStmt(VisualBasic6Parser::CloseStmtContext *ctx) = 0;
  virtual void exitCloseStmt(VisualBasic6Parser::CloseStmtContext *ctx) = 0;

  virtual void enterConstStmt(VisualBasic6Parser::ConstStmtContext *ctx) = 0;
  virtual void exitConstStmt(VisualBasic6Parser::ConstStmtContext *ctx) = 0;

  virtual void enterConstSubStmt(VisualBasic6Parser::ConstSubStmtContext *ctx) = 0;
  virtual void exitConstSubStmt(VisualBasic6Parser::ConstSubStmtContext *ctx) = 0;

  virtual void enterDateStmt(VisualBasic6Parser::DateStmtContext *ctx) = 0;
  virtual void exitDateStmt(VisualBasic6Parser::DateStmtContext *ctx) = 0;

  virtual void enterDeclareStmt(VisualBasic6Parser::DeclareStmtContext *ctx) = 0;
  virtual void exitDeclareStmt(VisualBasic6Parser::DeclareStmtContext *ctx) = 0;

  virtual void enterDeftypeStmt(VisualBasic6Parser::DeftypeStmtContext *ctx) = 0;
  virtual void exitDeftypeStmt(VisualBasic6Parser::DeftypeStmtContext *ctx) = 0;

  virtual void enterDeleteSettingStmt(VisualBasic6Parser::DeleteSettingStmtContext *ctx) = 0;
  virtual void exitDeleteSettingStmt(VisualBasic6Parser::DeleteSettingStmtContext *ctx) = 0;

  virtual void enterDoLoopStmt(VisualBasic6Parser::DoLoopStmtContext *ctx) = 0;
  virtual void exitDoLoopStmt(VisualBasic6Parser::DoLoopStmtContext *ctx) = 0;

  virtual void enterEndStmt(VisualBasic6Parser::EndStmtContext *ctx) = 0;
  virtual void exitEndStmt(VisualBasic6Parser::EndStmtContext *ctx) = 0;

  virtual void enterEnumerationStmt(VisualBasic6Parser::EnumerationStmtContext *ctx) = 0;
  virtual void exitEnumerationStmt(VisualBasic6Parser::EnumerationStmtContext *ctx) = 0;

  virtual void enterEnumerationStmt_Constant(VisualBasic6Parser::EnumerationStmt_ConstantContext *ctx) = 0;
  virtual void exitEnumerationStmt_Constant(VisualBasic6Parser::EnumerationStmt_ConstantContext *ctx) = 0;

  virtual void enterEraseStmt(VisualBasic6Parser::EraseStmtContext *ctx) = 0;
  virtual void exitEraseStmt(VisualBasic6Parser::EraseStmtContext *ctx) = 0;

  virtual void enterErrorStmt(VisualBasic6Parser::ErrorStmtContext *ctx) = 0;
  virtual void exitErrorStmt(VisualBasic6Parser::ErrorStmtContext *ctx) = 0;

  virtual void enterEventStmt(VisualBasic6Parser::EventStmtContext *ctx) = 0;
  virtual void exitEventStmt(VisualBasic6Parser::EventStmtContext *ctx) = 0;

  virtual void enterExitStmt(VisualBasic6Parser::ExitStmtContext *ctx) = 0;
  virtual void exitExitStmt(VisualBasic6Parser::ExitStmtContext *ctx) = 0;

  virtual void enterFilecopyStmt(VisualBasic6Parser::FilecopyStmtContext *ctx) = 0;
  virtual void exitFilecopyStmt(VisualBasic6Parser::FilecopyStmtContext *ctx) = 0;

  virtual void enterForEachStmt(VisualBasic6Parser::ForEachStmtContext *ctx) = 0;
  virtual void exitForEachStmt(VisualBasic6Parser::ForEachStmtContext *ctx) = 0;

  virtual void enterForNextStmt(VisualBasic6Parser::ForNextStmtContext *ctx) = 0;
  virtual void exitForNextStmt(VisualBasic6Parser::ForNextStmtContext *ctx) = 0;

  virtual void enterFunctionStmt(VisualBasic6Parser::FunctionStmtContext *ctx) = 0;
  virtual void exitFunctionStmt(VisualBasic6Parser::FunctionStmtContext *ctx) = 0;

  virtual void enterGetStmt(VisualBasic6Parser::GetStmtContext *ctx) = 0;
  virtual void exitGetStmt(VisualBasic6Parser::GetStmtContext *ctx) = 0;

  virtual void enterGoSubStmt(VisualBasic6Parser::GoSubStmtContext *ctx) = 0;
  virtual void exitGoSubStmt(VisualBasic6Parser::GoSubStmtContext *ctx) = 0;

  virtual void enterGoToStmt(VisualBasic6Parser::GoToStmtContext *ctx) = 0;
  virtual void exitGoToStmt(VisualBasic6Parser::GoToStmtContext *ctx) = 0;

  virtual void enterInlineIfThenElse(VisualBasic6Parser::InlineIfThenElseContext *ctx) = 0;
  virtual void exitInlineIfThenElse(VisualBasic6Parser::InlineIfThenElseContext *ctx) = 0;

  virtual void enterBlockIfThenElse(VisualBasic6Parser::BlockIfThenElseContext *ctx) = 0;
  virtual void exitBlockIfThenElse(VisualBasic6Parser::BlockIfThenElseContext *ctx) = 0;

  virtual void enterIfBlockStmt(VisualBasic6Parser::IfBlockStmtContext *ctx) = 0;
  virtual void exitIfBlockStmt(VisualBasic6Parser::IfBlockStmtContext *ctx) = 0;

  virtual void enterIfConditionStmt(VisualBasic6Parser::IfConditionStmtContext *ctx) = 0;
  virtual void exitIfConditionStmt(VisualBasic6Parser::IfConditionStmtContext *ctx) = 0;

  virtual void enterIfElseIfBlockStmt(VisualBasic6Parser::IfElseIfBlockStmtContext *ctx) = 0;
  virtual void exitIfElseIfBlockStmt(VisualBasic6Parser::IfElseIfBlockStmtContext *ctx) = 0;

  virtual void enterIfElseBlockStmt(VisualBasic6Parser::IfElseBlockStmtContext *ctx) = 0;
  virtual void exitIfElseBlockStmt(VisualBasic6Parser::IfElseBlockStmtContext *ctx) = 0;

  virtual void enterImplementsStmt(VisualBasic6Parser::ImplementsStmtContext *ctx) = 0;
  virtual void exitImplementsStmt(VisualBasic6Parser::ImplementsStmtContext *ctx) = 0;

  virtual void enterInputStmt(VisualBasic6Parser::InputStmtContext *ctx) = 0;
  virtual void exitInputStmt(VisualBasic6Parser::InputStmtContext *ctx) = 0;

  virtual void enterKillStmt(VisualBasic6Parser::KillStmtContext *ctx) = 0;
  virtual void exitKillStmt(VisualBasic6Parser::KillStmtContext *ctx) = 0;

  virtual void enterLetStmt(VisualBasic6Parser::LetStmtContext *ctx) = 0;
  virtual void exitLetStmt(VisualBasic6Parser::LetStmtContext *ctx) = 0;

  virtual void enterLineInputStmt(VisualBasic6Parser::LineInputStmtContext *ctx) = 0;
  virtual void exitLineInputStmt(VisualBasic6Parser::LineInputStmtContext *ctx) = 0;

  virtual void enterLoadStmt(VisualBasic6Parser::LoadStmtContext *ctx) = 0;
  virtual void exitLoadStmt(VisualBasic6Parser::LoadStmtContext *ctx) = 0;

  virtual void enterLockStmt(VisualBasic6Parser::LockStmtContext *ctx) = 0;
  virtual void exitLockStmt(VisualBasic6Parser::LockStmtContext *ctx) = 0;

  virtual void enterLsetStmt(VisualBasic6Parser::LsetStmtContext *ctx) = 0;
  virtual void exitLsetStmt(VisualBasic6Parser::LsetStmtContext *ctx) = 0;

  virtual void enterMacroIfThenElseStmt(VisualBasic6Parser::MacroIfThenElseStmtContext *ctx) = 0;
  virtual void exitMacroIfThenElseStmt(VisualBasic6Parser::MacroIfThenElseStmtContext *ctx) = 0;

  virtual void enterMacroIfBlockStmt(VisualBasic6Parser::MacroIfBlockStmtContext *ctx) = 0;
  virtual void exitMacroIfBlockStmt(VisualBasic6Parser::MacroIfBlockStmtContext *ctx) = 0;

  virtual void enterMacroElseIfBlockStmt(VisualBasic6Parser::MacroElseIfBlockStmtContext *ctx) = 0;
  virtual void exitMacroElseIfBlockStmt(VisualBasic6Parser::MacroElseIfBlockStmtContext *ctx) = 0;

  virtual void enterMacroElseBlockStmt(VisualBasic6Parser::MacroElseBlockStmtContext *ctx) = 0;
  virtual void exitMacroElseBlockStmt(VisualBasic6Parser::MacroElseBlockStmtContext *ctx) = 0;

  virtual void enterMidStmt(VisualBasic6Parser::MidStmtContext *ctx) = 0;
  virtual void exitMidStmt(VisualBasic6Parser::MidStmtContext *ctx) = 0;

  virtual void enterMkdirStmt(VisualBasic6Parser::MkdirStmtContext *ctx) = 0;
  virtual void exitMkdirStmt(VisualBasic6Parser::MkdirStmtContext *ctx) = 0;

  virtual void enterNameStmt(VisualBasic6Parser::NameStmtContext *ctx) = 0;
  virtual void exitNameStmt(VisualBasic6Parser::NameStmtContext *ctx) = 0;

  virtual void enterOnErrorStmt(VisualBasic6Parser::OnErrorStmtContext *ctx) = 0;
  virtual void exitOnErrorStmt(VisualBasic6Parser::OnErrorStmtContext *ctx) = 0;

  virtual void enterOnGoToStmt(VisualBasic6Parser::OnGoToStmtContext *ctx) = 0;
  virtual void exitOnGoToStmt(VisualBasic6Parser::OnGoToStmtContext *ctx) = 0;

  virtual void enterOnGoSubStmt(VisualBasic6Parser::OnGoSubStmtContext *ctx) = 0;
  virtual void exitOnGoSubStmt(VisualBasic6Parser::OnGoSubStmtContext *ctx) = 0;

  virtual void enterOpenStmt(VisualBasic6Parser::OpenStmtContext *ctx) = 0;
  virtual void exitOpenStmt(VisualBasic6Parser::OpenStmtContext *ctx) = 0;

  virtual void enterOutputList(VisualBasic6Parser::OutputListContext *ctx) = 0;
  virtual void exitOutputList(VisualBasic6Parser::OutputListContext *ctx) = 0;

  virtual void enterOutputList_Expression(VisualBasic6Parser::OutputList_ExpressionContext *ctx) = 0;
  virtual void exitOutputList_Expression(VisualBasic6Parser::OutputList_ExpressionContext *ctx) = 0;

  virtual void enterPrintStmt(VisualBasic6Parser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(VisualBasic6Parser::PrintStmtContext *ctx) = 0;

  virtual void enterPropertyGetStmt(VisualBasic6Parser::PropertyGetStmtContext *ctx) = 0;
  virtual void exitPropertyGetStmt(VisualBasic6Parser::PropertyGetStmtContext *ctx) = 0;

  virtual void enterPropertySetStmt(VisualBasic6Parser::PropertySetStmtContext *ctx) = 0;
  virtual void exitPropertySetStmt(VisualBasic6Parser::PropertySetStmtContext *ctx) = 0;

  virtual void enterPropertyLetStmt(VisualBasic6Parser::PropertyLetStmtContext *ctx) = 0;
  virtual void exitPropertyLetStmt(VisualBasic6Parser::PropertyLetStmtContext *ctx) = 0;

  virtual void enterPutStmt(VisualBasic6Parser::PutStmtContext *ctx) = 0;
  virtual void exitPutStmt(VisualBasic6Parser::PutStmtContext *ctx) = 0;

  virtual void enterRaiseEventStmt(VisualBasic6Parser::RaiseEventStmtContext *ctx) = 0;
  virtual void exitRaiseEventStmt(VisualBasic6Parser::RaiseEventStmtContext *ctx) = 0;

  virtual void enterRandomizeStmt(VisualBasic6Parser::RandomizeStmtContext *ctx) = 0;
  virtual void exitRandomizeStmt(VisualBasic6Parser::RandomizeStmtContext *ctx) = 0;

  virtual void enterRedimStmt(VisualBasic6Parser::RedimStmtContext *ctx) = 0;
  virtual void exitRedimStmt(VisualBasic6Parser::RedimStmtContext *ctx) = 0;

  virtual void enterRedimSubStmt(VisualBasic6Parser::RedimSubStmtContext *ctx) = 0;
  virtual void exitRedimSubStmt(VisualBasic6Parser::RedimSubStmtContext *ctx) = 0;

  virtual void enterResetStmt(VisualBasic6Parser::ResetStmtContext *ctx) = 0;
  virtual void exitResetStmt(VisualBasic6Parser::ResetStmtContext *ctx) = 0;

  virtual void enterResumeStmt(VisualBasic6Parser::ResumeStmtContext *ctx) = 0;
  virtual void exitResumeStmt(VisualBasic6Parser::ResumeStmtContext *ctx) = 0;

  virtual void enterReturnStmt(VisualBasic6Parser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(VisualBasic6Parser::ReturnStmtContext *ctx) = 0;

  virtual void enterRmdirStmt(VisualBasic6Parser::RmdirStmtContext *ctx) = 0;
  virtual void exitRmdirStmt(VisualBasic6Parser::RmdirStmtContext *ctx) = 0;

  virtual void enterRsetStmt(VisualBasic6Parser::RsetStmtContext *ctx) = 0;
  virtual void exitRsetStmt(VisualBasic6Parser::RsetStmtContext *ctx) = 0;

  virtual void enterSavepictureStmt(VisualBasic6Parser::SavepictureStmtContext *ctx) = 0;
  virtual void exitSavepictureStmt(VisualBasic6Parser::SavepictureStmtContext *ctx) = 0;

  virtual void enterSaveSettingStmt(VisualBasic6Parser::SaveSettingStmtContext *ctx) = 0;
  virtual void exitSaveSettingStmt(VisualBasic6Parser::SaveSettingStmtContext *ctx) = 0;

  virtual void enterSeekStmt(VisualBasic6Parser::SeekStmtContext *ctx) = 0;
  virtual void exitSeekStmt(VisualBasic6Parser::SeekStmtContext *ctx) = 0;

  virtual void enterSelectCaseStmt(VisualBasic6Parser::SelectCaseStmtContext *ctx) = 0;
  virtual void exitSelectCaseStmt(VisualBasic6Parser::SelectCaseStmtContext *ctx) = 0;

  virtual void enterSC_Case(VisualBasic6Parser::SC_CaseContext *ctx) = 0;
  virtual void exitSC_Case(VisualBasic6Parser::SC_CaseContext *ctx) = 0;

  virtual void enterCaseCondElse(VisualBasic6Parser::CaseCondElseContext *ctx) = 0;
  virtual void exitCaseCondElse(VisualBasic6Parser::CaseCondElseContext *ctx) = 0;

  virtual void enterCaseCondExpr(VisualBasic6Parser::CaseCondExprContext *ctx) = 0;
  virtual void exitCaseCondExpr(VisualBasic6Parser::CaseCondExprContext *ctx) = 0;

  virtual void enterCaseCondExprIs(VisualBasic6Parser::CaseCondExprIsContext *ctx) = 0;
  virtual void exitCaseCondExprIs(VisualBasic6Parser::CaseCondExprIsContext *ctx) = 0;

  virtual void enterCaseCondExprValue(VisualBasic6Parser::CaseCondExprValueContext *ctx) = 0;
  virtual void exitCaseCondExprValue(VisualBasic6Parser::CaseCondExprValueContext *ctx) = 0;

  virtual void enterCaseCondExprTo(VisualBasic6Parser::CaseCondExprToContext *ctx) = 0;
  virtual void exitCaseCondExprTo(VisualBasic6Parser::CaseCondExprToContext *ctx) = 0;

  virtual void enterSendkeysStmt(VisualBasic6Parser::SendkeysStmtContext *ctx) = 0;
  virtual void exitSendkeysStmt(VisualBasic6Parser::SendkeysStmtContext *ctx) = 0;

  virtual void enterSetattrStmt(VisualBasic6Parser::SetattrStmtContext *ctx) = 0;
  virtual void exitSetattrStmt(VisualBasic6Parser::SetattrStmtContext *ctx) = 0;

  virtual void enterSetStmt(VisualBasic6Parser::SetStmtContext *ctx) = 0;
  virtual void exitSetStmt(VisualBasic6Parser::SetStmtContext *ctx) = 0;

  virtual void enterStopStmt(VisualBasic6Parser::StopStmtContext *ctx) = 0;
  virtual void exitStopStmt(VisualBasic6Parser::StopStmtContext *ctx) = 0;

  virtual void enterSubStmt(VisualBasic6Parser::SubStmtContext *ctx) = 0;
  virtual void exitSubStmt(VisualBasic6Parser::SubStmtContext *ctx) = 0;

  virtual void enterTimeStmt(VisualBasic6Parser::TimeStmtContext *ctx) = 0;
  virtual void exitTimeStmt(VisualBasic6Parser::TimeStmtContext *ctx) = 0;

  virtual void enterTypeStmt(VisualBasic6Parser::TypeStmtContext *ctx) = 0;
  virtual void exitTypeStmt(VisualBasic6Parser::TypeStmtContext *ctx) = 0;

  virtual void enterTypeStmt_Element(VisualBasic6Parser::TypeStmt_ElementContext *ctx) = 0;
  virtual void exitTypeStmt_Element(VisualBasic6Parser::TypeStmt_ElementContext *ctx) = 0;

  virtual void enterTypeOfStmt(VisualBasic6Parser::TypeOfStmtContext *ctx) = 0;
  virtual void exitTypeOfStmt(VisualBasic6Parser::TypeOfStmtContext *ctx) = 0;

  virtual void enterUnloadStmt(VisualBasic6Parser::UnloadStmtContext *ctx) = 0;
  virtual void exitUnloadStmt(VisualBasic6Parser::UnloadStmtContext *ctx) = 0;

  virtual void enterUnlockStmt(VisualBasic6Parser::UnlockStmtContext *ctx) = 0;
  virtual void exitUnlockStmt(VisualBasic6Parser::UnlockStmtContext *ctx) = 0;

  virtual void enterVsAssign(VisualBasic6Parser::VsAssignContext *ctx) = 0;
  virtual void exitVsAssign(VisualBasic6Parser::VsAssignContext *ctx) = 0;

  virtual void enterVsNot(VisualBasic6Parser::VsNotContext *ctx) = 0;
  virtual void exitVsNot(VisualBasic6Parser::VsNotContext *ctx) = 0;

  virtual void enterVsStruct(VisualBasic6Parser::VsStructContext *ctx) = 0;
  virtual void exitVsStruct(VisualBasic6Parser::VsStructContext *ctx) = 0;

  virtual void enterVsMultDiv(VisualBasic6Parser::VsMultDivContext *ctx) = 0;
  virtual void exitVsMultDiv(VisualBasic6Parser::VsMultDivContext *ctx) = 0;

  virtual void enterVsTypeOf(VisualBasic6Parser::VsTypeOfContext *ctx) = 0;
  virtual void exitVsTypeOf(VisualBasic6Parser::VsTypeOfContext *ctx) = 0;

  virtual void enterVsICS(VisualBasic6Parser::VsICSContext *ctx) = 0;
  virtual void exitVsICS(VisualBasic6Parser::VsICSContext *ctx) = 0;

  virtual void enterVsXor(VisualBasic6Parser::VsXorContext *ctx) = 0;
  virtual void exitVsXor(VisualBasic6Parser::VsXorContext *ctx) = 0;

  virtual void enterVsAddSub(VisualBasic6Parser::VsAddSubContext *ctx) = 0;
  virtual void exitVsAddSub(VisualBasic6Parser::VsAddSubContext *ctx) = 0;

  virtual void enterVsAnd(VisualBasic6Parser::VsAndContext *ctx) = 0;
  virtual void exitVsAnd(VisualBasic6Parser::VsAndContext *ctx) = 0;

  virtual void enterVsPow(VisualBasic6Parser::VsPowContext *ctx) = 0;
  virtual void exitVsPow(VisualBasic6Parser::VsPowContext *ctx) = 0;

  virtual void enterVsMod(VisualBasic6Parser::VsModContext *ctx) = 0;
  virtual void exitVsMod(VisualBasic6Parser::VsModContext *ctx) = 0;

  virtual void enterVsAmp(VisualBasic6Parser::VsAmpContext *ctx) = 0;
  virtual void exitVsAmp(VisualBasic6Parser::VsAmpContext *ctx) = 0;

  virtual void enterVsAddressOf(VisualBasic6Parser::VsAddressOfContext *ctx) = 0;
  virtual void exitVsAddressOf(VisualBasic6Parser::VsAddressOfContext *ctx) = 0;

  virtual void enterVsNew(VisualBasic6Parser::VsNewContext *ctx) = 0;
  virtual void exitVsNew(VisualBasic6Parser::VsNewContext *ctx) = 0;

  virtual void enterVsPlusMinus(VisualBasic6Parser::VsPlusMinusContext *ctx) = 0;
  virtual void exitVsPlusMinus(VisualBasic6Parser::VsPlusMinusContext *ctx) = 0;

  virtual void enterVsIDiv(VisualBasic6Parser::VsIDivContext *ctx) = 0;
  virtual void exitVsIDiv(VisualBasic6Parser::VsIDivContext *ctx) = 0;

  virtual void enterVsOr(VisualBasic6Parser::VsOrContext *ctx) = 0;
  virtual void exitVsOr(VisualBasic6Parser::VsOrContext *ctx) = 0;

  virtual void enterVsLiteral(VisualBasic6Parser::VsLiteralContext *ctx) = 0;
  virtual void exitVsLiteral(VisualBasic6Parser::VsLiteralContext *ctx) = 0;

  virtual void enterVsEqv(VisualBasic6Parser::VsEqvContext *ctx) = 0;
  virtual void exitVsEqv(VisualBasic6Parser::VsEqvContext *ctx) = 0;

  virtual void enterVsImp(VisualBasic6Parser::VsImpContext *ctx) = 0;
  virtual void exitVsImp(VisualBasic6Parser::VsImpContext *ctx) = 0;

  virtual void enterVsComp(VisualBasic6Parser::VsCompContext *ctx) = 0;
  virtual void exitVsComp(VisualBasic6Parser::VsCompContext *ctx) = 0;

  virtual void enterVsMid(VisualBasic6Parser::VsMidContext *ctx) = 0;
  virtual void exitVsMid(VisualBasic6Parser::VsMidContext *ctx) = 0;

  virtual void enterVariableStmt(VisualBasic6Parser::VariableStmtContext *ctx) = 0;
  virtual void exitVariableStmt(VisualBasic6Parser::VariableStmtContext *ctx) = 0;

  virtual void enterVariableListStmt(VisualBasic6Parser::VariableListStmtContext *ctx) = 0;
  virtual void exitVariableListStmt(VisualBasic6Parser::VariableListStmtContext *ctx) = 0;

  virtual void enterVariableSubStmt(VisualBasic6Parser::VariableSubStmtContext *ctx) = 0;
  virtual void exitVariableSubStmt(VisualBasic6Parser::VariableSubStmtContext *ctx) = 0;

  virtual void enterWhileWendStmt(VisualBasic6Parser::WhileWendStmtContext *ctx) = 0;
  virtual void exitWhileWendStmt(VisualBasic6Parser::WhileWendStmtContext *ctx) = 0;

  virtual void enterWidthStmt(VisualBasic6Parser::WidthStmtContext *ctx) = 0;
  virtual void exitWidthStmt(VisualBasic6Parser::WidthStmtContext *ctx) = 0;

  virtual void enterWithStmt(VisualBasic6Parser::WithStmtContext *ctx) = 0;
  virtual void exitWithStmt(VisualBasic6Parser::WithStmtContext *ctx) = 0;

  virtual void enterWriteStmt(VisualBasic6Parser::WriteStmtContext *ctx) = 0;
  virtual void exitWriteStmt(VisualBasic6Parser::WriteStmtContext *ctx) = 0;

  virtual void enterExplicitCallStmt(VisualBasic6Parser::ExplicitCallStmtContext *ctx) = 0;
  virtual void exitExplicitCallStmt(VisualBasic6Parser::ExplicitCallStmtContext *ctx) = 0;

  virtual void enterECS_ProcedureCall(VisualBasic6Parser::ECS_ProcedureCallContext *ctx) = 0;
  virtual void exitECS_ProcedureCall(VisualBasic6Parser::ECS_ProcedureCallContext *ctx) = 0;

  virtual void enterECS_MemberProcedureCall(VisualBasic6Parser::ECS_MemberProcedureCallContext *ctx) = 0;
  virtual void exitECS_MemberProcedureCall(VisualBasic6Parser::ECS_MemberProcedureCallContext *ctx) = 0;

  virtual void enterImplicitCallStmt_InBlock(VisualBasic6Parser::ImplicitCallStmt_InBlockContext *ctx) = 0;
  virtual void exitImplicitCallStmt_InBlock(VisualBasic6Parser::ImplicitCallStmt_InBlockContext *ctx) = 0;

  virtual void enterICS_B_ProcedureCall(VisualBasic6Parser::ICS_B_ProcedureCallContext *ctx) = 0;
  virtual void exitICS_B_ProcedureCall(VisualBasic6Parser::ICS_B_ProcedureCallContext *ctx) = 0;

  virtual void enterICS_B_MemberProcedureCall(VisualBasic6Parser::ICS_B_MemberProcedureCallContext *ctx) = 0;
  virtual void exitICS_B_MemberProcedureCall(VisualBasic6Parser::ICS_B_MemberProcedureCallContext *ctx) = 0;

  virtual void enterImplicitCallStmt_InStmt(VisualBasic6Parser::ImplicitCallStmt_InStmtContext *ctx) = 0;
  virtual void exitImplicitCallStmt_InStmt(VisualBasic6Parser::ImplicitCallStmt_InStmtContext *ctx) = 0;

  virtual void enterICS_S_VariableOrProcedureCall(VisualBasic6Parser::ICS_S_VariableOrProcedureCallContext *ctx) = 0;
  virtual void exitICS_S_VariableOrProcedureCall(VisualBasic6Parser::ICS_S_VariableOrProcedureCallContext *ctx) = 0;

  virtual void enterICS_S_ProcedureOrArrayCall(VisualBasic6Parser::ICS_S_ProcedureOrArrayCallContext *ctx) = 0;
  virtual void exitICS_S_ProcedureOrArrayCall(VisualBasic6Parser::ICS_S_ProcedureOrArrayCallContext *ctx) = 0;

  virtual void enterICS_S_NestedProcedureCall(VisualBasic6Parser::ICS_S_NestedProcedureCallContext *ctx) = 0;
  virtual void exitICS_S_NestedProcedureCall(VisualBasic6Parser::ICS_S_NestedProcedureCallContext *ctx) = 0;

  virtual void enterICS_S_MembersCall(VisualBasic6Parser::ICS_S_MembersCallContext *ctx) = 0;
  virtual void exitICS_S_MembersCall(VisualBasic6Parser::ICS_S_MembersCallContext *ctx) = 0;

  virtual void enterICS_S_MemberCall(VisualBasic6Parser::ICS_S_MemberCallContext *ctx) = 0;
  virtual void exitICS_S_MemberCall(VisualBasic6Parser::ICS_S_MemberCallContext *ctx) = 0;

  virtual void enterICS_S_DictionaryCall(VisualBasic6Parser::ICS_S_DictionaryCallContext *ctx) = 0;
  virtual void exitICS_S_DictionaryCall(VisualBasic6Parser::ICS_S_DictionaryCallContext *ctx) = 0;

  virtual void enterArgsCall(VisualBasic6Parser::ArgsCallContext *ctx) = 0;
  virtual void exitArgsCall(VisualBasic6Parser::ArgsCallContext *ctx) = 0;

  virtual void enterArgCall(VisualBasic6Parser::ArgCallContext *ctx) = 0;
  virtual void exitArgCall(VisualBasic6Parser::ArgCallContext *ctx) = 0;

  virtual void enterDictionaryCallStmt(VisualBasic6Parser::DictionaryCallStmtContext *ctx) = 0;
  virtual void exitDictionaryCallStmt(VisualBasic6Parser::DictionaryCallStmtContext *ctx) = 0;

  virtual void enterArgList(VisualBasic6Parser::ArgListContext *ctx) = 0;
  virtual void exitArgList(VisualBasic6Parser::ArgListContext *ctx) = 0;

  virtual void enterArg(VisualBasic6Parser::ArgContext *ctx) = 0;
  virtual void exitArg(VisualBasic6Parser::ArgContext *ctx) = 0;

  virtual void enterArgDefaultValue(VisualBasic6Parser::ArgDefaultValueContext *ctx) = 0;
  virtual void exitArgDefaultValue(VisualBasic6Parser::ArgDefaultValueContext *ctx) = 0;

  virtual void enterSubscripts(VisualBasic6Parser::SubscriptsContext *ctx) = 0;
  virtual void exitSubscripts(VisualBasic6Parser::SubscriptsContext *ctx) = 0;

  virtual void enterSubscript_(VisualBasic6Parser::Subscript_Context *ctx) = 0;
  virtual void exitSubscript_(VisualBasic6Parser::Subscript_Context *ctx) = 0;

  virtual void enterAmbiguousIdentifier(VisualBasic6Parser::AmbiguousIdentifierContext *ctx) = 0;
  virtual void exitAmbiguousIdentifier(VisualBasic6Parser::AmbiguousIdentifierContext *ctx) = 0;

  virtual void enterAsTypeClause(VisualBasic6Parser::AsTypeClauseContext *ctx) = 0;
  virtual void exitAsTypeClause(VisualBasic6Parser::AsTypeClauseContext *ctx) = 0;

  virtual void enterBaseType(VisualBasic6Parser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(VisualBasic6Parser::BaseTypeContext *ctx) = 0;

  virtual void enterCertainIdentifier(VisualBasic6Parser::CertainIdentifierContext *ctx) = 0;
  virtual void exitCertainIdentifier(VisualBasic6Parser::CertainIdentifierContext *ctx) = 0;

  virtual void enterComparisonOperator(VisualBasic6Parser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(VisualBasic6Parser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterComplexType(VisualBasic6Parser::ComplexTypeContext *ctx) = 0;
  virtual void exitComplexType(VisualBasic6Parser::ComplexTypeContext *ctx) = 0;

  virtual void enterFieldLength(VisualBasic6Parser::FieldLengthContext *ctx) = 0;
  virtual void exitFieldLength(VisualBasic6Parser::FieldLengthContext *ctx) = 0;

  virtual void enterLetterrange(VisualBasic6Parser::LetterrangeContext *ctx) = 0;
  virtual void exitLetterrange(VisualBasic6Parser::LetterrangeContext *ctx) = 0;

  virtual void enterLineLabel(VisualBasic6Parser::LineLabelContext *ctx) = 0;
  virtual void exitLineLabel(VisualBasic6Parser::LineLabelContext *ctx) = 0;

  virtual void enterLiteral(VisualBasic6Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(VisualBasic6Parser::LiteralContext *ctx) = 0;

  virtual void enterPublicPrivateVisibility(VisualBasic6Parser::PublicPrivateVisibilityContext *ctx) = 0;
  virtual void exitPublicPrivateVisibility(VisualBasic6Parser::PublicPrivateVisibilityContext *ctx) = 0;

  virtual void enterPublicPrivateGlobalVisibility(VisualBasic6Parser::PublicPrivateGlobalVisibilityContext *ctx) = 0;
  virtual void exitPublicPrivateGlobalVisibility(VisualBasic6Parser::PublicPrivateGlobalVisibilityContext *ctx) = 0;

  virtual void enterType_(VisualBasic6Parser::Type_Context *ctx) = 0;
  virtual void exitType_(VisualBasic6Parser::Type_Context *ctx) = 0;

  virtual void enterTypeHint(VisualBasic6Parser::TypeHintContext *ctx) = 0;
  virtual void exitTypeHint(VisualBasic6Parser::TypeHintContext *ctx) = 0;

  virtual void enterVisibility(VisualBasic6Parser::VisibilityContext *ctx) = 0;
  virtual void exitVisibility(VisualBasic6Parser::VisibilityContext *ctx) = 0;

  virtual void enterAmbiguousKeyword(VisualBasic6Parser::AmbiguousKeywordContext *ctx) = 0;
  virtual void exitAmbiguousKeyword(VisualBasic6Parser::AmbiguousKeywordContext *ctx) = 0;

  virtual void enterIntegerLiteral(VisualBasic6Parser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(VisualBasic6Parser::IntegerLiteralContext *ctx) = 0;

  virtual void enterOctalLiteral(VisualBasic6Parser::OctalLiteralContext *ctx) = 0;
  virtual void exitOctalLiteral(VisualBasic6Parser::OctalLiteralContext *ctx) = 0;

  virtual void enterDoubleLiteral(VisualBasic6Parser::DoubleLiteralContext *ctx) = 0;
  virtual void exitDoubleLiteral(VisualBasic6Parser::DoubleLiteralContext *ctx) = 0;


};

