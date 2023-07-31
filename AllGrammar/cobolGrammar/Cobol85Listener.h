
// Generated from Cobol85.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Cobol85Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Cobol85Parser.
 */
class  Cobol85Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(Cobol85Parser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(Cobol85Parser::StartRuleContext *ctx) = 0;

  virtual void enterCompilationUnit(Cobol85Parser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(Cobol85Parser::CompilationUnitContext *ctx) = 0;

  virtual void enterProgramUnit(Cobol85Parser::ProgramUnitContext *ctx) = 0;
  virtual void exitProgramUnit(Cobol85Parser::ProgramUnitContext *ctx) = 0;

  virtual void enterEndProgramStatement(Cobol85Parser::EndProgramStatementContext *ctx) = 0;
  virtual void exitEndProgramStatement(Cobol85Parser::EndProgramStatementContext *ctx) = 0;

  virtual void enterIdentificationDivision(Cobol85Parser::IdentificationDivisionContext *ctx) = 0;
  virtual void exitIdentificationDivision(Cobol85Parser::IdentificationDivisionContext *ctx) = 0;

  virtual void enterIdentificationDivisionBody(Cobol85Parser::IdentificationDivisionBodyContext *ctx) = 0;
  virtual void exitIdentificationDivisionBody(Cobol85Parser::IdentificationDivisionBodyContext *ctx) = 0;

  virtual void enterProgramIdParagraph(Cobol85Parser::ProgramIdParagraphContext *ctx) = 0;
  virtual void exitProgramIdParagraph(Cobol85Parser::ProgramIdParagraphContext *ctx) = 0;

  virtual void enterAuthorParagraph(Cobol85Parser::AuthorParagraphContext *ctx) = 0;
  virtual void exitAuthorParagraph(Cobol85Parser::AuthorParagraphContext *ctx) = 0;

  virtual void enterInstallationParagraph(Cobol85Parser::InstallationParagraphContext *ctx) = 0;
  virtual void exitInstallationParagraph(Cobol85Parser::InstallationParagraphContext *ctx) = 0;

  virtual void enterDateWrittenParagraph(Cobol85Parser::DateWrittenParagraphContext *ctx) = 0;
  virtual void exitDateWrittenParagraph(Cobol85Parser::DateWrittenParagraphContext *ctx) = 0;

  virtual void enterDateCompiledParagraph(Cobol85Parser::DateCompiledParagraphContext *ctx) = 0;
  virtual void exitDateCompiledParagraph(Cobol85Parser::DateCompiledParagraphContext *ctx) = 0;

  virtual void enterSecurityParagraph(Cobol85Parser::SecurityParagraphContext *ctx) = 0;
  virtual void exitSecurityParagraph(Cobol85Parser::SecurityParagraphContext *ctx) = 0;

  virtual void enterRemarksParagraph(Cobol85Parser::RemarksParagraphContext *ctx) = 0;
  virtual void exitRemarksParagraph(Cobol85Parser::RemarksParagraphContext *ctx) = 0;

  virtual void enterEnvironmentDivision(Cobol85Parser::EnvironmentDivisionContext *ctx) = 0;
  virtual void exitEnvironmentDivision(Cobol85Parser::EnvironmentDivisionContext *ctx) = 0;

  virtual void enterEnvironmentDivisionBody(Cobol85Parser::EnvironmentDivisionBodyContext *ctx) = 0;
  virtual void exitEnvironmentDivisionBody(Cobol85Parser::EnvironmentDivisionBodyContext *ctx) = 0;

  virtual void enterConfigurationSection(Cobol85Parser::ConfigurationSectionContext *ctx) = 0;
  virtual void exitConfigurationSection(Cobol85Parser::ConfigurationSectionContext *ctx) = 0;

  virtual void enterConfigurationSectionParagraph(Cobol85Parser::ConfigurationSectionParagraphContext *ctx) = 0;
  virtual void exitConfigurationSectionParagraph(Cobol85Parser::ConfigurationSectionParagraphContext *ctx) = 0;

  virtual void enterSourceComputerParagraph(Cobol85Parser::SourceComputerParagraphContext *ctx) = 0;
  virtual void exitSourceComputerParagraph(Cobol85Parser::SourceComputerParagraphContext *ctx) = 0;

  virtual void enterObjectComputerParagraph(Cobol85Parser::ObjectComputerParagraphContext *ctx) = 0;
  virtual void exitObjectComputerParagraph(Cobol85Parser::ObjectComputerParagraphContext *ctx) = 0;

  virtual void enterObjectComputerClause(Cobol85Parser::ObjectComputerClauseContext *ctx) = 0;
  virtual void exitObjectComputerClause(Cobol85Parser::ObjectComputerClauseContext *ctx) = 0;

  virtual void enterMemorySizeClause(Cobol85Parser::MemorySizeClauseContext *ctx) = 0;
  virtual void exitMemorySizeClause(Cobol85Parser::MemorySizeClauseContext *ctx) = 0;

  virtual void enterDiskSizeClause(Cobol85Parser::DiskSizeClauseContext *ctx) = 0;
  virtual void exitDiskSizeClause(Cobol85Parser::DiskSizeClauseContext *ctx) = 0;

  virtual void enterCollatingSequenceClause(Cobol85Parser::CollatingSequenceClauseContext *ctx) = 0;
  virtual void exitCollatingSequenceClause(Cobol85Parser::CollatingSequenceClauseContext *ctx) = 0;

  virtual void enterCollatingSequenceClauseAlphanumeric(Cobol85Parser::CollatingSequenceClauseAlphanumericContext *ctx) = 0;
  virtual void exitCollatingSequenceClauseAlphanumeric(Cobol85Parser::CollatingSequenceClauseAlphanumericContext *ctx) = 0;

  virtual void enterCollatingSequenceClauseNational(Cobol85Parser::CollatingSequenceClauseNationalContext *ctx) = 0;
  virtual void exitCollatingSequenceClauseNational(Cobol85Parser::CollatingSequenceClauseNationalContext *ctx) = 0;

  virtual void enterSegmentLimitClause(Cobol85Parser::SegmentLimitClauseContext *ctx) = 0;
  virtual void exitSegmentLimitClause(Cobol85Parser::SegmentLimitClauseContext *ctx) = 0;

  virtual void enterCharacterSetClause(Cobol85Parser::CharacterSetClauseContext *ctx) = 0;
  virtual void exitCharacterSetClause(Cobol85Parser::CharacterSetClauseContext *ctx) = 0;

  virtual void enterSpecialNamesParagraph(Cobol85Parser::SpecialNamesParagraphContext *ctx) = 0;
  virtual void exitSpecialNamesParagraph(Cobol85Parser::SpecialNamesParagraphContext *ctx) = 0;

  virtual void enterSpecialNameClause(Cobol85Parser::SpecialNameClauseContext *ctx) = 0;
  virtual void exitSpecialNameClause(Cobol85Parser::SpecialNameClauseContext *ctx) = 0;

  virtual void enterAlphabetClause(Cobol85Parser::AlphabetClauseContext *ctx) = 0;
  virtual void exitAlphabetClause(Cobol85Parser::AlphabetClauseContext *ctx) = 0;

  virtual void enterAlphabetClauseFormat1(Cobol85Parser::AlphabetClauseFormat1Context *ctx) = 0;
  virtual void exitAlphabetClauseFormat1(Cobol85Parser::AlphabetClauseFormat1Context *ctx) = 0;

  virtual void enterAlphabetLiterals(Cobol85Parser::AlphabetLiteralsContext *ctx) = 0;
  virtual void exitAlphabetLiterals(Cobol85Parser::AlphabetLiteralsContext *ctx) = 0;

  virtual void enterAlphabetThrough(Cobol85Parser::AlphabetThroughContext *ctx) = 0;
  virtual void exitAlphabetThrough(Cobol85Parser::AlphabetThroughContext *ctx) = 0;

  virtual void enterAlphabetAlso(Cobol85Parser::AlphabetAlsoContext *ctx) = 0;
  virtual void exitAlphabetAlso(Cobol85Parser::AlphabetAlsoContext *ctx) = 0;

  virtual void enterAlphabetClauseFormat2(Cobol85Parser::AlphabetClauseFormat2Context *ctx) = 0;
  virtual void exitAlphabetClauseFormat2(Cobol85Parser::AlphabetClauseFormat2Context *ctx) = 0;

  virtual void enterChannelClause(Cobol85Parser::ChannelClauseContext *ctx) = 0;
  virtual void exitChannelClause(Cobol85Parser::ChannelClauseContext *ctx) = 0;

  virtual void enterClassClause(Cobol85Parser::ClassClauseContext *ctx) = 0;
  virtual void exitClassClause(Cobol85Parser::ClassClauseContext *ctx) = 0;

  virtual void enterClassClauseThrough(Cobol85Parser::ClassClauseThroughContext *ctx) = 0;
  virtual void exitClassClauseThrough(Cobol85Parser::ClassClauseThroughContext *ctx) = 0;

  virtual void enterClassClauseFrom(Cobol85Parser::ClassClauseFromContext *ctx) = 0;
  virtual void exitClassClauseFrom(Cobol85Parser::ClassClauseFromContext *ctx) = 0;

  virtual void enterClassClauseTo(Cobol85Parser::ClassClauseToContext *ctx) = 0;
  virtual void exitClassClauseTo(Cobol85Parser::ClassClauseToContext *ctx) = 0;

  virtual void enterCurrencySignClause(Cobol85Parser::CurrencySignClauseContext *ctx) = 0;
  virtual void exitCurrencySignClause(Cobol85Parser::CurrencySignClauseContext *ctx) = 0;

  virtual void enterDecimalPointClause(Cobol85Parser::DecimalPointClauseContext *ctx) = 0;
  virtual void exitDecimalPointClause(Cobol85Parser::DecimalPointClauseContext *ctx) = 0;

  virtual void enterDefaultComputationalSignClause(Cobol85Parser::DefaultComputationalSignClauseContext *ctx) = 0;
  virtual void exitDefaultComputationalSignClause(Cobol85Parser::DefaultComputationalSignClauseContext *ctx) = 0;

  virtual void enterDefaultDisplaySignClause(Cobol85Parser::DefaultDisplaySignClauseContext *ctx) = 0;
  virtual void exitDefaultDisplaySignClause(Cobol85Parser::DefaultDisplaySignClauseContext *ctx) = 0;

  virtual void enterEnvironmentSwitchNameClause(Cobol85Parser::EnvironmentSwitchNameClauseContext *ctx) = 0;
  virtual void exitEnvironmentSwitchNameClause(Cobol85Parser::EnvironmentSwitchNameClauseContext *ctx) = 0;

  virtual void enterEnvironmentSwitchNameSpecialNamesStatusPhrase(Cobol85Parser::EnvironmentSwitchNameSpecialNamesStatusPhraseContext *ctx) = 0;
  virtual void exitEnvironmentSwitchNameSpecialNamesStatusPhrase(Cobol85Parser::EnvironmentSwitchNameSpecialNamesStatusPhraseContext *ctx) = 0;

  virtual void enterOdtClause(Cobol85Parser::OdtClauseContext *ctx) = 0;
  virtual void exitOdtClause(Cobol85Parser::OdtClauseContext *ctx) = 0;

  virtual void enterReserveNetworkClause(Cobol85Parser::ReserveNetworkClauseContext *ctx) = 0;
  virtual void exitReserveNetworkClause(Cobol85Parser::ReserveNetworkClauseContext *ctx) = 0;

  virtual void enterSymbolicCharactersClause(Cobol85Parser::SymbolicCharactersClauseContext *ctx) = 0;
  virtual void exitSymbolicCharactersClause(Cobol85Parser::SymbolicCharactersClauseContext *ctx) = 0;

  virtual void enterSymbolicCharacters(Cobol85Parser::SymbolicCharactersContext *ctx) = 0;
  virtual void exitSymbolicCharacters(Cobol85Parser::SymbolicCharactersContext *ctx) = 0;

  virtual void enterInputOutputSection(Cobol85Parser::InputOutputSectionContext *ctx) = 0;
  virtual void exitInputOutputSection(Cobol85Parser::InputOutputSectionContext *ctx) = 0;

  virtual void enterInputOutputSectionParagraph(Cobol85Parser::InputOutputSectionParagraphContext *ctx) = 0;
  virtual void exitInputOutputSectionParagraph(Cobol85Parser::InputOutputSectionParagraphContext *ctx) = 0;

  virtual void enterFileControlParagraph(Cobol85Parser::FileControlParagraphContext *ctx) = 0;
  virtual void exitFileControlParagraph(Cobol85Parser::FileControlParagraphContext *ctx) = 0;

  virtual void enterFileControlEntry(Cobol85Parser::FileControlEntryContext *ctx) = 0;
  virtual void exitFileControlEntry(Cobol85Parser::FileControlEntryContext *ctx) = 0;

  virtual void enterSelectClause(Cobol85Parser::SelectClauseContext *ctx) = 0;
  virtual void exitSelectClause(Cobol85Parser::SelectClauseContext *ctx) = 0;

  virtual void enterFileControlClause(Cobol85Parser::FileControlClauseContext *ctx) = 0;
  virtual void exitFileControlClause(Cobol85Parser::FileControlClauseContext *ctx) = 0;

  virtual void enterAssignClause(Cobol85Parser::AssignClauseContext *ctx) = 0;
  virtual void exitAssignClause(Cobol85Parser::AssignClauseContext *ctx) = 0;

  virtual void enterReserveClause(Cobol85Parser::ReserveClauseContext *ctx) = 0;
  virtual void exitReserveClause(Cobol85Parser::ReserveClauseContext *ctx) = 0;

  virtual void enterOrganizationClause(Cobol85Parser::OrganizationClauseContext *ctx) = 0;
  virtual void exitOrganizationClause(Cobol85Parser::OrganizationClauseContext *ctx) = 0;

  virtual void enterPaddingCharacterClause(Cobol85Parser::PaddingCharacterClauseContext *ctx) = 0;
  virtual void exitPaddingCharacterClause(Cobol85Parser::PaddingCharacterClauseContext *ctx) = 0;

  virtual void enterRecordDelimiterClause(Cobol85Parser::RecordDelimiterClauseContext *ctx) = 0;
  virtual void exitRecordDelimiterClause(Cobol85Parser::RecordDelimiterClauseContext *ctx) = 0;

  virtual void enterAccessModeClause(Cobol85Parser::AccessModeClauseContext *ctx) = 0;
  virtual void exitAccessModeClause(Cobol85Parser::AccessModeClauseContext *ctx) = 0;

  virtual void enterRecordKeyClause(Cobol85Parser::RecordKeyClauseContext *ctx) = 0;
  virtual void exitRecordKeyClause(Cobol85Parser::RecordKeyClauseContext *ctx) = 0;

  virtual void enterAlternateRecordKeyClause(Cobol85Parser::AlternateRecordKeyClauseContext *ctx) = 0;
  virtual void exitAlternateRecordKeyClause(Cobol85Parser::AlternateRecordKeyClauseContext *ctx) = 0;

  virtual void enterPasswordClause(Cobol85Parser::PasswordClauseContext *ctx) = 0;
  virtual void exitPasswordClause(Cobol85Parser::PasswordClauseContext *ctx) = 0;

  virtual void enterFileStatusClause(Cobol85Parser::FileStatusClauseContext *ctx) = 0;
  virtual void exitFileStatusClause(Cobol85Parser::FileStatusClauseContext *ctx) = 0;

  virtual void enterRelativeKeyClause(Cobol85Parser::RelativeKeyClauseContext *ctx) = 0;
  virtual void exitRelativeKeyClause(Cobol85Parser::RelativeKeyClauseContext *ctx) = 0;

  virtual void enterIoControlParagraph(Cobol85Parser::IoControlParagraphContext *ctx) = 0;
  virtual void exitIoControlParagraph(Cobol85Parser::IoControlParagraphContext *ctx) = 0;

  virtual void enterIoControlClause(Cobol85Parser::IoControlClauseContext *ctx) = 0;
  virtual void exitIoControlClause(Cobol85Parser::IoControlClauseContext *ctx) = 0;

  virtual void enterRerunClause(Cobol85Parser::RerunClauseContext *ctx) = 0;
  virtual void exitRerunClause(Cobol85Parser::RerunClauseContext *ctx) = 0;

  virtual void enterRerunEveryRecords(Cobol85Parser::RerunEveryRecordsContext *ctx) = 0;
  virtual void exitRerunEveryRecords(Cobol85Parser::RerunEveryRecordsContext *ctx) = 0;

  virtual void enterRerunEveryOf(Cobol85Parser::RerunEveryOfContext *ctx) = 0;
  virtual void exitRerunEveryOf(Cobol85Parser::RerunEveryOfContext *ctx) = 0;

  virtual void enterRerunEveryClock(Cobol85Parser::RerunEveryClockContext *ctx) = 0;
  virtual void exitRerunEveryClock(Cobol85Parser::RerunEveryClockContext *ctx) = 0;

  virtual void enterSameClause(Cobol85Parser::SameClauseContext *ctx) = 0;
  virtual void exitSameClause(Cobol85Parser::SameClauseContext *ctx) = 0;

  virtual void enterMultipleFileClause(Cobol85Parser::MultipleFileClauseContext *ctx) = 0;
  virtual void exitMultipleFileClause(Cobol85Parser::MultipleFileClauseContext *ctx) = 0;

  virtual void enterMultipleFilePosition(Cobol85Parser::MultipleFilePositionContext *ctx) = 0;
  virtual void exitMultipleFilePosition(Cobol85Parser::MultipleFilePositionContext *ctx) = 0;

  virtual void enterCommitmentControlClause(Cobol85Parser::CommitmentControlClauseContext *ctx) = 0;
  virtual void exitCommitmentControlClause(Cobol85Parser::CommitmentControlClauseContext *ctx) = 0;

  virtual void enterDataDivision(Cobol85Parser::DataDivisionContext *ctx) = 0;
  virtual void exitDataDivision(Cobol85Parser::DataDivisionContext *ctx) = 0;

  virtual void enterDataDivisionSection(Cobol85Parser::DataDivisionSectionContext *ctx) = 0;
  virtual void exitDataDivisionSection(Cobol85Parser::DataDivisionSectionContext *ctx) = 0;

  virtual void enterFileSection(Cobol85Parser::FileSectionContext *ctx) = 0;
  virtual void exitFileSection(Cobol85Parser::FileSectionContext *ctx) = 0;

  virtual void enterFileDescriptionEntry(Cobol85Parser::FileDescriptionEntryContext *ctx) = 0;
  virtual void exitFileDescriptionEntry(Cobol85Parser::FileDescriptionEntryContext *ctx) = 0;

  virtual void enterFileDescriptionEntryClause(Cobol85Parser::FileDescriptionEntryClauseContext *ctx) = 0;
  virtual void exitFileDescriptionEntryClause(Cobol85Parser::FileDescriptionEntryClauseContext *ctx) = 0;

  virtual void enterExternalClause(Cobol85Parser::ExternalClauseContext *ctx) = 0;
  virtual void exitExternalClause(Cobol85Parser::ExternalClauseContext *ctx) = 0;

  virtual void enterGlobalClause(Cobol85Parser::GlobalClauseContext *ctx) = 0;
  virtual void exitGlobalClause(Cobol85Parser::GlobalClauseContext *ctx) = 0;

  virtual void enterBlockContainsClause(Cobol85Parser::BlockContainsClauseContext *ctx) = 0;
  virtual void exitBlockContainsClause(Cobol85Parser::BlockContainsClauseContext *ctx) = 0;

  virtual void enterBlockContainsTo(Cobol85Parser::BlockContainsToContext *ctx) = 0;
  virtual void exitBlockContainsTo(Cobol85Parser::BlockContainsToContext *ctx) = 0;

  virtual void enterRecordContainsClause(Cobol85Parser::RecordContainsClauseContext *ctx) = 0;
  virtual void exitRecordContainsClause(Cobol85Parser::RecordContainsClauseContext *ctx) = 0;

  virtual void enterRecordContainsClauseFormat1(Cobol85Parser::RecordContainsClauseFormat1Context *ctx) = 0;
  virtual void exitRecordContainsClauseFormat1(Cobol85Parser::RecordContainsClauseFormat1Context *ctx) = 0;

  virtual void enterRecordContainsClauseFormat2(Cobol85Parser::RecordContainsClauseFormat2Context *ctx) = 0;
  virtual void exitRecordContainsClauseFormat2(Cobol85Parser::RecordContainsClauseFormat2Context *ctx) = 0;

  virtual void enterRecordContainsClauseFormat3(Cobol85Parser::RecordContainsClauseFormat3Context *ctx) = 0;
  virtual void exitRecordContainsClauseFormat3(Cobol85Parser::RecordContainsClauseFormat3Context *ctx) = 0;

  virtual void enterRecordContainsTo(Cobol85Parser::RecordContainsToContext *ctx) = 0;
  virtual void exitRecordContainsTo(Cobol85Parser::RecordContainsToContext *ctx) = 0;

  virtual void enterLabelRecordsClause(Cobol85Parser::LabelRecordsClauseContext *ctx) = 0;
  virtual void exitLabelRecordsClause(Cobol85Parser::LabelRecordsClauseContext *ctx) = 0;

  virtual void enterValueOfClause(Cobol85Parser::ValueOfClauseContext *ctx) = 0;
  virtual void exitValueOfClause(Cobol85Parser::ValueOfClauseContext *ctx) = 0;

  virtual void enterValuePair(Cobol85Parser::ValuePairContext *ctx) = 0;
  virtual void exitValuePair(Cobol85Parser::ValuePairContext *ctx) = 0;

  virtual void enterDataRecordsClause(Cobol85Parser::DataRecordsClauseContext *ctx) = 0;
  virtual void exitDataRecordsClause(Cobol85Parser::DataRecordsClauseContext *ctx) = 0;

  virtual void enterLinageClause(Cobol85Parser::LinageClauseContext *ctx) = 0;
  virtual void exitLinageClause(Cobol85Parser::LinageClauseContext *ctx) = 0;

  virtual void enterLinageAt(Cobol85Parser::LinageAtContext *ctx) = 0;
  virtual void exitLinageAt(Cobol85Parser::LinageAtContext *ctx) = 0;

  virtual void enterLinageFootingAt(Cobol85Parser::LinageFootingAtContext *ctx) = 0;
  virtual void exitLinageFootingAt(Cobol85Parser::LinageFootingAtContext *ctx) = 0;

  virtual void enterLinageLinesAtTop(Cobol85Parser::LinageLinesAtTopContext *ctx) = 0;
  virtual void exitLinageLinesAtTop(Cobol85Parser::LinageLinesAtTopContext *ctx) = 0;

  virtual void enterLinageLinesAtBottom(Cobol85Parser::LinageLinesAtBottomContext *ctx) = 0;
  virtual void exitLinageLinesAtBottom(Cobol85Parser::LinageLinesAtBottomContext *ctx) = 0;

  virtual void enterRecordingModeClause(Cobol85Parser::RecordingModeClauseContext *ctx) = 0;
  virtual void exitRecordingModeClause(Cobol85Parser::RecordingModeClauseContext *ctx) = 0;

  virtual void enterModeStatement(Cobol85Parser::ModeStatementContext *ctx) = 0;
  virtual void exitModeStatement(Cobol85Parser::ModeStatementContext *ctx) = 0;

  virtual void enterCodeSetClause(Cobol85Parser::CodeSetClauseContext *ctx) = 0;
  virtual void exitCodeSetClause(Cobol85Parser::CodeSetClauseContext *ctx) = 0;

  virtual void enterReportClause(Cobol85Parser::ReportClauseContext *ctx) = 0;
  virtual void exitReportClause(Cobol85Parser::ReportClauseContext *ctx) = 0;

  virtual void enterDataBaseSection(Cobol85Parser::DataBaseSectionContext *ctx) = 0;
  virtual void exitDataBaseSection(Cobol85Parser::DataBaseSectionContext *ctx) = 0;

  virtual void enterDataBaseSectionEntry(Cobol85Parser::DataBaseSectionEntryContext *ctx) = 0;
  virtual void exitDataBaseSectionEntry(Cobol85Parser::DataBaseSectionEntryContext *ctx) = 0;

  virtual void enterWorkingStorageSection(Cobol85Parser::WorkingStorageSectionContext *ctx) = 0;
  virtual void exitWorkingStorageSection(Cobol85Parser::WorkingStorageSectionContext *ctx) = 0;

  virtual void enterLinkageSection(Cobol85Parser::LinkageSectionContext *ctx) = 0;
  virtual void exitLinkageSection(Cobol85Parser::LinkageSectionContext *ctx) = 0;

  virtual void enterCommunicationSection(Cobol85Parser::CommunicationSectionContext *ctx) = 0;
  virtual void exitCommunicationSection(Cobol85Parser::CommunicationSectionContext *ctx) = 0;

  virtual void enterCommunicationDescriptionEntry(Cobol85Parser::CommunicationDescriptionEntryContext *ctx) = 0;
  virtual void exitCommunicationDescriptionEntry(Cobol85Parser::CommunicationDescriptionEntryContext *ctx) = 0;

  virtual void enterCommunicationDescriptionEntryFormat1(Cobol85Parser::CommunicationDescriptionEntryFormat1Context *ctx) = 0;
  virtual void exitCommunicationDescriptionEntryFormat1(Cobol85Parser::CommunicationDescriptionEntryFormat1Context *ctx) = 0;

  virtual void enterCommunicationDescriptionEntryFormat2(Cobol85Parser::CommunicationDescriptionEntryFormat2Context *ctx) = 0;
  virtual void exitCommunicationDescriptionEntryFormat2(Cobol85Parser::CommunicationDescriptionEntryFormat2Context *ctx) = 0;

  virtual void enterCommunicationDescriptionEntryFormat3(Cobol85Parser::CommunicationDescriptionEntryFormat3Context *ctx) = 0;
  virtual void exitCommunicationDescriptionEntryFormat3(Cobol85Parser::CommunicationDescriptionEntryFormat3Context *ctx) = 0;

  virtual void enterDestinationCountClause(Cobol85Parser::DestinationCountClauseContext *ctx) = 0;
  virtual void exitDestinationCountClause(Cobol85Parser::DestinationCountClauseContext *ctx) = 0;

  virtual void enterDestinationTableClause(Cobol85Parser::DestinationTableClauseContext *ctx) = 0;
  virtual void exitDestinationTableClause(Cobol85Parser::DestinationTableClauseContext *ctx) = 0;

  virtual void enterEndKeyClause(Cobol85Parser::EndKeyClauseContext *ctx) = 0;
  virtual void exitEndKeyClause(Cobol85Parser::EndKeyClauseContext *ctx) = 0;

  virtual void enterErrorKeyClause(Cobol85Parser::ErrorKeyClauseContext *ctx) = 0;
  virtual void exitErrorKeyClause(Cobol85Parser::ErrorKeyClauseContext *ctx) = 0;

  virtual void enterMessageCountClause(Cobol85Parser::MessageCountClauseContext *ctx) = 0;
  virtual void exitMessageCountClause(Cobol85Parser::MessageCountClauseContext *ctx) = 0;

  virtual void enterMessageDateClause(Cobol85Parser::MessageDateClauseContext *ctx) = 0;
  virtual void exitMessageDateClause(Cobol85Parser::MessageDateClauseContext *ctx) = 0;

  virtual void enterMessageTimeClause(Cobol85Parser::MessageTimeClauseContext *ctx) = 0;
  virtual void exitMessageTimeClause(Cobol85Parser::MessageTimeClauseContext *ctx) = 0;

  virtual void enterStatusKeyClause(Cobol85Parser::StatusKeyClauseContext *ctx) = 0;
  virtual void exitStatusKeyClause(Cobol85Parser::StatusKeyClauseContext *ctx) = 0;

  virtual void enterSymbolicDestinationClause(Cobol85Parser::SymbolicDestinationClauseContext *ctx) = 0;
  virtual void exitSymbolicDestinationClause(Cobol85Parser::SymbolicDestinationClauseContext *ctx) = 0;

  virtual void enterSymbolicQueueClause(Cobol85Parser::SymbolicQueueClauseContext *ctx) = 0;
  virtual void exitSymbolicQueueClause(Cobol85Parser::SymbolicQueueClauseContext *ctx) = 0;

  virtual void enterSymbolicSourceClause(Cobol85Parser::SymbolicSourceClauseContext *ctx) = 0;
  virtual void exitSymbolicSourceClause(Cobol85Parser::SymbolicSourceClauseContext *ctx) = 0;

  virtual void enterSymbolicTerminalClause(Cobol85Parser::SymbolicTerminalClauseContext *ctx) = 0;
  virtual void exitSymbolicTerminalClause(Cobol85Parser::SymbolicTerminalClauseContext *ctx) = 0;

  virtual void enterSymbolicSubQueueClause(Cobol85Parser::SymbolicSubQueueClauseContext *ctx) = 0;
  virtual void exitSymbolicSubQueueClause(Cobol85Parser::SymbolicSubQueueClauseContext *ctx) = 0;

  virtual void enterTextLengthClause(Cobol85Parser::TextLengthClauseContext *ctx) = 0;
  virtual void exitTextLengthClause(Cobol85Parser::TextLengthClauseContext *ctx) = 0;

  virtual void enterLocalStorageSection(Cobol85Parser::LocalStorageSectionContext *ctx) = 0;
  virtual void exitLocalStorageSection(Cobol85Parser::LocalStorageSectionContext *ctx) = 0;

  virtual void enterScreenSection(Cobol85Parser::ScreenSectionContext *ctx) = 0;
  virtual void exitScreenSection(Cobol85Parser::ScreenSectionContext *ctx) = 0;

  virtual void enterScreenDescriptionEntry(Cobol85Parser::ScreenDescriptionEntryContext *ctx) = 0;
  virtual void exitScreenDescriptionEntry(Cobol85Parser::ScreenDescriptionEntryContext *ctx) = 0;

  virtual void enterScreenDescriptionBlankClause(Cobol85Parser::ScreenDescriptionBlankClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionBlankClause(Cobol85Parser::ScreenDescriptionBlankClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionBellClause(Cobol85Parser::ScreenDescriptionBellClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionBellClause(Cobol85Parser::ScreenDescriptionBellClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionBlinkClause(Cobol85Parser::ScreenDescriptionBlinkClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionBlinkClause(Cobol85Parser::ScreenDescriptionBlinkClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionEraseClause(Cobol85Parser::ScreenDescriptionEraseClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionEraseClause(Cobol85Parser::ScreenDescriptionEraseClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionLightClause(Cobol85Parser::ScreenDescriptionLightClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionLightClause(Cobol85Parser::ScreenDescriptionLightClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionGridClause(Cobol85Parser::ScreenDescriptionGridClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionGridClause(Cobol85Parser::ScreenDescriptionGridClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionReverseVideoClause(Cobol85Parser::ScreenDescriptionReverseVideoClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionReverseVideoClause(Cobol85Parser::ScreenDescriptionReverseVideoClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionUnderlineClause(Cobol85Parser::ScreenDescriptionUnderlineClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionUnderlineClause(Cobol85Parser::ScreenDescriptionUnderlineClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionSizeClause(Cobol85Parser::ScreenDescriptionSizeClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionSizeClause(Cobol85Parser::ScreenDescriptionSizeClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionLineClause(Cobol85Parser::ScreenDescriptionLineClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionLineClause(Cobol85Parser::ScreenDescriptionLineClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionColumnClause(Cobol85Parser::ScreenDescriptionColumnClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionColumnClause(Cobol85Parser::ScreenDescriptionColumnClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionForegroundColorClause(Cobol85Parser::ScreenDescriptionForegroundColorClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionForegroundColorClause(Cobol85Parser::ScreenDescriptionForegroundColorClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionBackgroundColorClause(Cobol85Parser::ScreenDescriptionBackgroundColorClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionBackgroundColorClause(Cobol85Parser::ScreenDescriptionBackgroundColorClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionControlClause(Cobol85Parser::ScreenDescriptionControlClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionControlClause(Cobol85Parser::ScreenDescriptionControlClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionValueClause(Cobol85Parser::ScreenDescriptionValueClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionValueClause(Cobol85Parser::ScreenDescriptionValueClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionPictureClause(Cobol85Parser::ScreenDescriptionPictureClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionPictureClause(Cobol85Parser::ScreenDescriptionPictureClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionFromClause(Cobol85Parser::ScreenDescriptionFromClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionFromClause(Cobol85Parser::ScreenDescriptionFromClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionToClause(Cobol85Parser::ScreenDescriptionToClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionToClause(Cobol85Parser::ScreenDescriptionToClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionUsingClause(Cobol85Parser::ScreenDescriptionUsingClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionUsingClause(Cobol85Parser::ScreenDescriptionUsingClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionUsageClause(Cobol85Parser::ScreenDescriptionUsageClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionUsageClause(Cobol85Parser::ScreenDescriptionUsageClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionBlankWhenZeroClause(Cobol85Parser::ScreenDescriptionBlankWhenZeroClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionBlankWhenZeroClause(Cobol85Parser::ScreenDescriptionBlankWhenZeroClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionJustifiedClause(Cobol85Parser::ScreenDescriptionJustifiedClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionJustifiedClause(Cobol85Parser::ScreenDescriptionJustifiedClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionSignClause(Cobol85Parser::ScreenDescriptionSignClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionSignClause(Cobol85Parser::ScreenDescriptionSignClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionAutoClause(Cobol85Parser::ScreenDescriptionAutoClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionAutoClause(Cobol85Parser::ScreenDescriptionAutoClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionSecureClause(Cobol85Parser::ScreenDescriptionSecureClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionSecureClause(Cobol85Parser::ScreenDescriptionSecureClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionRequiredClause(Cobol85Parser::ScreenDescriptionRequiredClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionRequiredClause(Cobol85Parser::ScreenDescriptionRequiredClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionPromptClause(Cobol85Parser::ScreenDescriptionPromptClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionPromptClause(Cobol85Parser::ScreenDescriptionPromptClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionPromptOccursClause(Cobol85Parser::ScreenDescriptionPromptOccursClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionPromptOccursClause(Cobol85Parser::ScreenDescriptionPromptOccursClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionFullClause(Cobol85Parser::ScreenDescriptionFullClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionFullClause(Cobol85Parser::ScreenDescriptionFullClauseContext *ctx) = 0;

  virtual void enterScreenDescriptionZeroFillClause(Cobol85Parser::ScreenDescriptionZeroFillClauseContext *ctx) = 0;
  virtual void exitScreenDescriptionZeroFillClause(Cobol85Parser::ScreenDescriptionZeroFillClauseContext *ctx) = 0;

  virtual void enterReportSection(Cobol85Parser::ReportSectionContext *ctx) = 0;
  virtual void exitReportSection(Cobol85Parser::ReportSectionContext *ctx) = 0;

  virtual void enterReportDescription(Cobol85Parser::ReportDescriptionContext *ctx) = 0;
  virtual void exitReportDescription(Cobol85Parser::ReportDescriptionContext *ctx) = 0;

  virtual void enterReportDescriptionEntry(Cobol85Parser::ReportDescriptionEntryContext *ctx) = 0;
  virtual void exitReportDescriptionEntry(Cobol85Parser::ReportDescriptionEntryContext *ctx) = 0;

  virtual void enterReportDescriptionGlobalClause(Cobol85Parser::ReportDescriptionGlobalClauseContext *ctx) = 0;
  virtual void exitReportDescriptionGlobalClause(Cobol85Parser::ReportDescriptionGlobalClauseContext *ctx) = 0;

  virtual void enterReportDescriptionPageLimitClause(Cobol85Parser::ReportDescriptionPageLimitClauseContext *ctx) = 0;
  virtual void exitReportDescriptionPageLimitClause(Cobol85Parser::ReportDescriptionPageLimitClauseContext *ctx) = 0;

  virtual void enterReportDescriptionHeadingClause(Cobol85Parser::ReportDescriptionHeadingClauseContext *ctx) = 0;
  virtual void exitReportDescriptionHeadingClause(Cobol85Parser::ReportDescriptionHeadingClauseContext *ctx) = 0;

  virtual void enterReportDescriptionFirstDetailClause(Cobol85Parser::ReportDescriptionFirstDetailClauseContext *ctx) = 0;
  virtual void exitReportDescriptionFirstDetailClause(Cobol85Parser::ReportDescriptionFirstDetailClauseContext *ctx) = 0;

  virtual void enterReportDescriptionLastDetailClause(Cobol85Parser::ReportDescriptionLastDetailClauseContext *ctx) = 0;
  virtual void exitReportDescriptionLastDetailClause(Cobol85Parser::ReportDescriptionLastDetailClauseContext *ctx) = 0;

  virtual void enterReportDescriptionFootingClause(Cobol85Parser::ReportDescriptionFootingClauseContext *ctx) = 0;
  virtual void exitReportDescriptionFootingClause(Cobol85Parser::ReportDescriptionFootingClauseContext *ctx) = 0;

  virtual void enterReportGroupDescriptionEntry(Cobol85Parser::ReportGroupDescriptionEntryContext *ctx) = 0;
  virtual void exitReportGroupDescriptionEntry(Cobol85Parser::ReportGroupDescriptionEntryContext *ctx) = 0;

  virtual void enterReportGroupDescriptionEntryFormat1(Cobol85Parser::ReportGroupDescriptionEntryFormat1Context *ctx) = 0;
  virtual void exitReportGroupDescriptionEntryFormat1(Cobol85Parser::ReportGroupDescriptionEntryFormat1Context *ctx) = 0;

  virtual void enterReportGroupDescriptionEntryFormat2(Cobol85Parser::ReportGroupDescriptionEntryFormat2Context *ctx) = 0;
  virtual void exitReportGroupDescriptionEntryFormat2(Cobol85Parser::ReportGroupDescriptionEntryFormat2Context *ctx) = 0;

  virtual void enterReportGroupDescriptionEntryFormat3(Cobol85Parser::ReportGroupDescriptionEntryFormat3Context *ctx) = 0;
  virtual void exitReportGroupDescriptionEntryFormat3(Cobol85Parser::ReportGroupDescriptionEntryFormat3Context *ctx) = 0;

  virtual void enterReportGroupBlankWhenZeroClause(Cobol85Parser::ReportGroupBlankWhenZeroClauseContext *ctx) = 0;
  virtual void exitReportGroupBlankWhenZeroClause(Cobol85Parser::ReportGroupBlankWhenZeroClauseContext *ctx) = 0;

  virtual void enterReportGroupColumnNumberClause(Cobol85Parser::ReportGroupColumnNumberClauseContext *ctx) = 0;
  virtual void exitReportGroupColumnNumberClause(Cobol85Parser::ReportGroupColumnNumberClauseContext *ctx) = 0;

  virtual void enterReportGroupIndicateClause(Cobol85Parser::ReportGroupIndicateClauseContext *ctx) = 0;
  virtual void exitReportGroupIndicateClause(Cobol85Parser::ReportGroupIndicateClauseContext *ctx) = 0;

  virtual void enterReportGroupJustifiedClause(Cobol85Parser::ReportGroupJustifiedClauseContext *ctx) = 0;
  virtual void exitReportGroupJustifiedClause(Cobol85Parser::ReportGroupJustifiedClauseContext *ctx) = 0;

  virtual void enterReportGroupLineNumberClause(Cobol85Parser::ReportGroupLineNumberClauseContext *ctx) = 0;
  virtual void exitReportGroupLineNumberClause(Cobol85Parser::ReportGroupLineNumberClauseContext *ctx) = 0;

  virtual void enterReportGroupLineNumberNextPage(Cobol85Parser::ReportGroupLineNumberNextPageContext *ctx) = 0;
  virtual void exitReportGroupLineNumberNextPage(Cobol85Parser::ReportGroupLineNumberNextPageContext *ctx) = 0;

  virtual void enterReportGroupLineNumberPlus(Cobol85Parser::ReportGroupLineNumberPlusContext *ctx) = 0;
  virtual void exitReportGroupLineNumberPlus(Cobol85Parser::ReportGroupLineNumberPlusContext *ctx) = 0;

  virtual void enterReportGroupNextGroupClause(Cobol85Parser::ReportGroupNextGroupClauseContext *ctx) = 0;
  virtual void exitReportGroupNextGroupClause(Cobol85Parser::ReportGroupNextGroupClauseContext *ctx) = 0;

  virtual void enterReportGroupNextGroupPlus(Cobol85Parser::ReportGroupNextGroupPlusContext *ctx) = 0;
  virtual void exitReportGroupNextGroupPlus(Cobol85Parser::ReportGroupNextGroupPlusContext *ctx) = 0;

  virtual void enterReportGroupNextGroupNextPage(Cobol85Parser::ReportGroupNextGroupNextPageContext *ctx) = 0;
  virtual void exitReportGroupNextGroupNextPage(Cobol85Parser::ReportGroupNextGroupNextPageContext *ctx) = 0;

  virtual void enterReportGroupPictureClause(Cobol85Parser::ReportGroupPictureClauseContext *ctx) = 0;
  virtual void exitReportGroupPictureClause(Cobol85Parser::ReportGroupPictureClauseContext *ctx) = 0;

  virtual void enterReportGroupResetClause(Cobol85Parser::ReportGroupResetClauseContext *ctx) = 0;
  virtual void exitReportGroupResetClause(Cobol85Parser::ReportGroupResetClauseContext *ctx) = 0;

  virtual void enterReportGroupSignClause(Cobol85Parser::ReportGroupSignClauseContext *ctx) = 0;
  virtual void exitReportGroupSignClause(Cobol85Parser::ReportGroupSignClauseContext *ctx) = 0;

  virtual void enterReportGroupSourceClause(Cobol85Parser::ReportGroupSourceClauseContext *ctx) = 0;
  virtual void exitReportGroupSourceClause(Cobol85Parser::ReportGroupSourceClauseContext *ctx) = 0;

  virtual void enterReportGroupSumClause(Cobol85Parser::ReportGroupSumClauseContext *ctx) = 0;
  virtual void exitReportGroupSumClause(Cobol85Parser::ReportGroupSumClauseContext *ctx) = 0;

  virtual void enterReportGroupTypeClause(Cobol85Parser::ReportGroupTypeClauseContext *ctx) = 0;
  virtual void exitReportGroupTypeClause(Cobol85Parser::ReportGroupTypeClauseContext *ctx) = 0;

  virtual void enterReportGroupTypeReportHeading(Cobol85Parser::ReportGroupTypeReportHeadingContext *ctx) = 0;
  virtual void exitReportGroupTypeReportHeading(Cobol85Parser::ReportGroupTypeReportHeadingContext *ctx) = 0;

  virtual void enterReportGroupTypePageHeading(Cobol85Parser::ReportGroupTypePageHeadingContext *ctx) = 0;
  virtual void exitReportGroupTypePageHeading(Cobol85Parser::ReportGroupTypePageHeadingContext *ctx) = 0;

  virtual void enterReportGroupTypeControlHeading(Cobol85Parser::ReportGroupTypeControlHeadingContext *ctx) = 0;
  virtual void exitReportGroupTypeControlHeading(Cobol85Parser::ReportGroupTypeControlHeadingContext *ctx) = 0;

  virtual void enterReportGroupTypeDetail(Cobol85Parser::ReportGroupTypeDetailContext *ctx) = 0;
  virtual void exitReportGroupTypeDetail(Cobol85Parser::ReportGroupTypeDetailContext *ctx) = 0;

  virtual void enterReportGroupTypeControlFooting(Cobol85Parser::ReportGroupTypeControlFootingContext *ctx) = 0;
  virtual void exitReportGroupTypeControlFooting(Cobol85Parser::ReportGroupTypeControlFootingContext *ctx) = 0;

  virtual void enterReportGroupUsageClause(Cobol85Parser::ReportGroupUsageClauseContext *ctx) = 0;
  virtual void exitReportGroupUsageClause(Cobol85Parser::ReportGroupUsageClauseContext *ctx) = 0;

  virtual void enterReportGroupTypePageFooting(Cobol85Parser::ReportGroupTypePageFootingContext *ctx) = 0;
  virtual void exitReportGroupTypePageFooting(Cobol85Parser::ReportGroupTypePageFootingContext *ctx) = 0;

  virtual void enterReportGroupTypeReportFooting(Cobol85Parser::ReportGroupTypeReportFootingContext *ctx) = 0;
  virtual void exitReportGroupTypeReportFooting(Cobol85Parser::ReportGroupTypeReportFootingContext *ctx) = 0;

  virtual void enterReportGroupValueClause(Cobol85Parser::ReportGroupValueClauseContext *ctx) = 0;
  virtual void exitReportGroupValueClause(Cobol85Parser::ReportGroupValueClauseContext *ctx) = 0;

  virtual void enterProgramLibrarySection(Cobol85Parser::ProgramLibrarySectionContext *ctx) = 0;
  virtual void exitProgramLibrarySection(Cobol85Parser::ProgramLibrarySectionContext *ctx) = 0;

  virtual void enterLibraryDescriptionEntry(Cobol85Parser::LibraryDescriptionEntryContext *ctx) = 0;
  virtual void exitLibraryDescriptionEntry(Cobol85Parser::LibraryDescriptionEntryContext *ctx) = 0;

  virtual void enterLibraryDescriptionEntryFormat1(Cobol85Parser::LibraryDescriptionEntryFormat1Context *ctx) = 0;
  virtual void exitLibraryDescriptionEntryFormat1(Cobol85Parser::LibraryDescriptionEntryFormat1Context *ctx) = 0;

  virtual void enterLibraryDescriptionEntryFormat2(Cobol85Parser::LibraryDescriptionEntryFormat2Context *ctx) = 0;
  virtual void exitLibraryDescriptionEntryFormat2(Cobol85Parser::LibraryDescriptionEntryFormat2Context *ctx) = 0;

  virtual void enterLibraryAttributeClauseFormat1(Cobol85Parser::LibraryAttributeClauseFormat1Context *ctx) = 0;
  virtual void exitLibraryAttributeClauseFormat1(Cobol85Parser::LibraryAttributeClauseFormat1Context *ctx) = 0;

  virtual void enterLibraryAttributeClauseFormat2(Cobol85Parser::LibraryAttributeClauseFormat2Context *ctx) = 0;
  virtual void exitLibraryAttributeClauseFormat2(Cobol85Parser::LibraryAttributeClauseFormat2Context *ctx) = 0;

  virtual void enterLibraryAttributeFunction(Cobol85Parser::LibraryAttributeFunctionContext *ctx) = 0;
  virtual void exitLibraryAttributeFunction(Cobol85Parser::LibraryAttributeFunctionContext *ctx) = 0;

  virtual void enterLibraryAttributeParameter(Cobol85Parser::LibraryAttributeParameterContext *ctx) = 0;
  virtual void exitLibraryAttributeParameter(Cobol85Parser::LibraryAttributeParameterContext *ctx) = 0;

  virtual void enterLibraryAttributeTitle(Cobol85Parser::LibraryAttributeTitleContext *ctx) = 0;
  virtual void exitLibraryAttributeTitle(Cobol85Parser::LibraryAttributeTitleContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureClauseFormat1(Cobol85Parser::LibraryEntryProcedureClauseFormat1Context *ctx) = 0;
  virtual void exitLibraryEntryProcedureClauseFormat1(Cobol85Parser::LibraryEntryProcedureClauseFormat1Context *ctx) = 0;

  virtual void enterLibraryEntryProcedureClauseFormat2(Cobol85Parser::LibraryEntryProcedureClauseFormat2Context *ctx) = 0;
  virtual void exitLibraryEntryProcedureClauseFormat2(Cobol85Parser::LibraryEntryProcedureClauseFormat2Context *ctx) = 0;

  virtual void enterLibraryEntryProcedureForClause(Cobol85Parser::LibraryEntryProcedureForClauseContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureForClause(Cobol85Parser::LibraryEntryProcedureForClauseContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureGivingClause(Cobol85Parser::LibraryEntryProcedureGivingClauseContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureGivingClause(Cobol85Parser::LibraryEntryProcedureGivingClauseContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureUsingClause(Cobol85Parser::LibraryEntryProcedureUsingClauseContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureUsingClause(Cobol85Parser::LibraryEntryProcedureUsingClauseContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureUsingName(Cobol85Parser::LibraryEntryProcedureUsingNameContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureUsingName(Cobol85Parser::LibraryEntryProcedureUsingNameContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureWithClause(Cobol85Parser::LibraryEntryProcedureWithClauseContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureWithClause(Cobol85Parser::LibraryEntryProcedureWithClauseContext *ctx) = 0;

  virtual void enterLibraryEntryProcedureWithName(Cobol85Parser::LibraryEntryProcedureWithNameContext *ctx) = 0;
  virtual void exitLibraryEntryProcedureWithName(Cobol85Parser::LibraryEntryProcedureWithNameContext *ctx) = 0;

  virtual void enterLibraryIsCommonClause(Cobol85Parser::LibraryIsCommonClauseContext *ctx) = 0;
  virtual void exitLibraryIsCommonClause(Cobol85Parser::LibraryIsCommonClauseContext *ctx) = 0;

  virtual void enterLibraryIsGlobalClause(Cobol85Parser::LibraryIsGlobalClauseContext *ctx) = 0;
  virtual void exitLibraryIsGlobalClause(Cobol85Parser::LibraryIsGlobalClauseContext *ctx) = 0;

  virtual void enterDataDescriptionEntry(Cobol85Parser::DataDescriptionEntryContext *ctx) = 0;
  virtual void exitDataDescriptionEntry(Cobol85Parser::DataDescriptionEntryContext *ctx) = 0;

  virtual void enterDataDescriptionEntryFormat1(Cobol85Parser::DataDescriptionEntryFormat1Context *ctx) = 0;
  virtual void exitDataDescriptionEntryFormat1(Cobol85Parser::DataDescriptionEntryFormat1Context *ctx) = 0;

  virtual void enterDataDescriptionEntryFormat2(Cobol85Parser::DataDescriptionEntryFormat2Context *ctx) = 0;
  virtual void exitDataDescriptionEntryFormat2(Cobol85Parser::DataDescriptionEntryFormat2Context *ctx) = 0;

  virtual void enterDataDescriptionEntryFormat3(Cobol85Parser::DataDescriptionEntryFormat3Context *ctx) = 0;
  virtual void exitDataDescriptionEntryFormat3(Cobol85Parser::DataDescriptionEntryFormat3Context *ctx) = 0;

  virtual void enterDataDescriptionEntryExecSql(Cobol85Parser::DataDescriptionEntryExecSqlContext *ctx) = 0;
  virtual void exitDataDescriptionEntryExecSql(Cobol85Parser::DataDescriptionEntryExecSqlContext *ctx) = 0;

  virtual void enterDataAlignedClause(Cobol85Parser::DataAlignedClauseContext *ctx) = 0;
  virtual void exitDataAlignedClause(Cobol85Parser::DataAlignedClauseContext *ctx) = 0;

  virtual void enterDataBlankWhenZeroClause(Cobol85Parser::DataBlankWhenZeroClauseContext *ctx) = 0;
  virtual void exitDataBlankWhenZeroClause(Cobol85Parser::DataBlankWhenZeroClauseContext *ctx) = 0;

  virtual void enterDataCommonOwnLocalClause(Cobol85Parser::DataCommonOwnLocalClauseContext *ctx) = 0;
  virtual void exitDataCommonOwnLocalClause(Cobol85Parser::DataCommonOwnLocalClauseContext *ctx) = 0;

  virtual void enterDataExternalClause(Cobol85Parser::DataExternalClauseContext *ctx) = 0;
  virtual void exitDataExternalClause(Cobol85Parser::DataExternalClauseContext *ctx) = 0;

  virtual void enterDataGlobalClause(Cobol85Parser::DataGlobalClauseContext *ctx) = 0;
  virtual void exitDataGlobalClause(Cobol85Parser::DataGlobalClauseContext *ctx) = 0;

  virtual void enterDataIntegerStringClause(Cobol85Parser::DataIntegerStringClauseContext *ctx) = 0;
  virtual void exitDataIntegerStringClause(Cobol85Parser::DataIntegerStringClauseContext *ctx) = 0;

  virtual void enterDataJustifiedClause(Cobol85Parser::DataJustifiedClauseContext *ctx) = 0;
  virtual void exitDataJustifiedClause(Cobol85Parser::DataJustifiedClauseContext *ctx) = 0;

  virtual void enterDataOccursClause(Cobol85Parser::DataOccursClauseContext *ctx) = 0;
  virtual void exitDataOccursClause(Cobol85Parser::DataOccursClauseContext *ctx) = 0;

  virtual void enterDataOccursTo(Cobol85Parser::DataOccursToContext *ctx) = 0;
  virtual void exitDataOccursTo(Cobol85Parser::DataOccursToContext *ctx) = 0;

  virtual void enterDataOccursSort(Cobol85Parser::DataOccursSortContext *ctx) = 0;
  virtual void exitDataOccursSort(Cobol85Parser::DataOccursSortContext *ctx) = 0;

  virtual void enterDataPictureClause(Cobol85Parser::DataPictureClauseContext *ctx) = 0;
  virtual void exitDataPictureClause(Cobol85Parser::DataPictureClauseContext *ctx) = 0;

  virtual void enterPictureString(Cobol85Parser::PictureStringContext *ctx) = 0;
  virtual void exitPictureString(Cobol85Parser::PictureStringContext *ctx) = 0;

  virtual void enterPictureChars(Cobol85Parser::PictureCharsContext *ctx) = 0;
  virtual void exitPictureChars(Cobol85Parser::PictureCharsContext *ctx) = 0;

  virtual void enterPictureCardinality(Cobol85Parser::PictureCardinalityContext *ctx) = 0;
  virtual void exitPictureCardinality(Cobol85Parser::PictureCardinalityContext *ctx) = 0;

  virtual void enterDataReceivedByClause(Cobol85Parser::DataReceivedByClauseContext *ctx) = 0;
  virtual void exitDataReceivedByClause(Cobol85Parser::DataReceivedByClauseContext *ctx) = 0;

  virtual void enterDataRecordAreaClause(Cobol85Parser::DataRecordAreaClauseContext *ctx) = 0;
  virtual void exitDataRecordAreaClause(Cobol85Parser::DataRecordAreaClauseContext *ctx) = 0;

  virtual void enterDataRedefinesClause(Cobol85Parser::DataRedefinesClauseContext *ctx) = 0;
  virtual void exitDataRedefinesClause(Cobol85Parser::DataRedefinesClauseContext *ctx) = 0;

  virtual void enterDataRenamesClause(Cobol85Parser::DataRenamesClauseContext *ctx) = 0;
  virtual void exitDataRenamesClause(Cobol85Parser::DataRenamesClauseContext *ctx) = 0;

  virtual void enterDataSignClause(Cobol85Parser::DataSignClauseContext *ctx) = 0;
  virtual void exitDataSignClause(Cobol85Parser::DataSignClauseContext *ctx) = 0;

  virtual void enterDataSynchronizedClause(Cobol85Parser::DataSynchronizedClauseContext *ctx) = 0;
  virtual void exitDataSynchronizedClause(Cobol85Parser::DataSynchronizedClauseContext *ctx) = 0;

  virtual void enterDataThreadLocalClause(Cobol85Parser::DataThreadLocalClauseContext *ctx) = 0;
  virtual void exitDataThreadLocalClause(Cobol85Parser::DataThreadLocalClauseContext *ctx) = 0;

  virtual void enterDataTypeClause(Cobol85Parser::DataTypeClauseContext *ctx) = 0;
  virtual void exitDataTypeClause(Cobol85Parser::DataTypeClauseContext *ctx) = 0;

  virtual void enterDataTypeDefClause(Cobol85Parser::DataTypeDefClauseContext *ctx) = 0;
  virtual void exitDataTypeDefClause(Cobol85Parser::DataTypeDefClauseContext *ctx) = 0;

  virtual void enterDataUsageClause(Cobol85Parser::DataUsageClauseContext *ctx) = 0;
  virtual void exitDataUsageClause(Cobol85Parser::DataUsageClauseContext *ctx) = 0;

  virtual void enterDataUsingClause(Cobol85Parser::DataUsingClauseContext *ctx) = 0;
  virtual void exitDataUsingClause(Cobol85Parser::DataUsingClauseContext *ctx) = 0;

  virtual void enterDataValueClause(Cobol85Parser::DataValueClauseContext *ctx) = 0;
  virtual void exitDataValueClause(Cobol85Parser::DataValueClauseContext *ctx) = 0;

  virtual void enterDataValueInterval(Cobol85Parser::DataValueIntervalContext *ctx) = 0;
  virtual void exitDataValueInterval(Cobol85Parser::DataValueIntervalContext *ctx) = 0;

  virtual void enterDataValueIntervalFrom(Cobol85Parser::DataValueIntervalFromContext *ctx) = 0;
  virtual void exitDataValueIntervalFrom(Cobol85Parser::DataValueIntervalFromContext *ctx) = 0;

  virtual void enterDataValueIntervalTo(Cobol85Parser::DataValueIntervalToContext *ctx) = 0;
  virtual void exitDataValueIntervalTo(Cobol85Parser::DataValueIntervalToContext *ctx) = 0;

  virtual void enterDataWithLowerBoundsClause(Cobol85Parser::DataWithLowerBoundsClauseContext *ctx) = 0;
  virtual void exitDataWithLowerBoundsClause(Cobol85Parser::DataWithLowerBoundsClauseContext *ctx) = 0;

  virtual void enterProcedureDivision(Cobol85Parser::ProcedureDivisionContext *ctx) = 0;
  virtual void exitProcedureDivision(Cobol85Parser::ProcedureDivisionContext *ctx) = 0;

  virtual void enterProcedureDivisionUsingClause(Cobol85Parser::ProcedureDivisionUsingClauseContext *ctx) = 0;
  virtual void exitProcedureDivisionUsingClause(Cobol85Parser::ProcedureDivisionUsingClauseContext *ctx) = 0;

  virtual void enterProcedureDivisionGivingClause(Cobol85Parser::ProcedureDivisionGivingClauseContext *ctx) = 0;
  virtual void exitProcedureDivisionGivingClause(Cobol85Parser::ProcedureDivisionGivingClauseContext *ctx) = 0;

  virtual void enterProcedureDivisionUsingParameter(Cobol85Parser::ProcedureDivisionUsingParameterContext *ctx) = 0;
  virtual void exitProcedureDivisionUsingParameter(Cobol85Parser::ProcedureDivisionUsingParameterContext *ctx) = 0;

  virtual void enterProcedureDivisionByReferencePhrase(Cobol85Parser::ProcedureDivisionByReferencePhraseContext *ctx) = 0;
  virtual void exitProcedureDivisionByReferencePhrase(Cobol85Parser::ProcedureDivisionByReferencePhraseContext *ctx) = 0;

  virtual void enterProcedureDivisionByReference(Cobol85Parser::ProcedureDivisionByReferenceContext *ctx) = 0;
  virtual void exitProcedureDivisionByReference(Cobol85Parser::ProcedureDivisionByReferenceContext *ctx) = 0;

  virtual void enterProcedureDivisionByValuePhrase(Cobol85Parser::ProcedureDivisionByValuePhraseContext *ctx) = 0;
  virtual void exitProcedureDivisionByValuePhrase(Cobol85Parser::ProcedureDivisionByValuePhraseContext *ctx) = 0;

  virtual void enterProcedureDivisionByValue(Cobol85Parser::ProcedureDivisionByValueContext *ctx) = 0;
  virtual void exitProcedureDivisionByValue(Cobol85Parser::ProcedureDivisionByValueContext *ctx) = 0;

  virtual void enterProcedureDeclaratives(Cobol85Parser::ProcedureDeclarativesContext *ctx) = 0;
  virtual void exitProcedureDeclaratives(Cobol85Parser::ProcedureDeclarativesContext *ctx) = 0;

  virtual void enterProcedureDeclarative(Cobol85Parser::ProcedureDeclarativeContext *ctx) = 0;
  virtual void exitProcedureDeclarative(Cobol85Parser::ProcedureDeclarativeContext *ctx) = 0;

  virtual void enterProcedureSectionHeader(Cobol85Parser::ProcedureSectionHeaderContext *ctx) = 0;
  virtual void exitProcedureSectionHeader(Cobol85Parser::ProcedureSectionHeaderContext *ctx) = 0;

  virtual void enterProcedureDivisionBody(Cobol85Parser::ProcedureDivisionBodyContext *ctx) = 0;
  virtual void exitProcedureDivisionBody(Cobol85Parser::ProcedureDivisionBodyContext *ctx) = 0;

  virtual void enterProcedureSection(Cobol85Parser::ProcedureSectionContext *ctx) = 0;
  virtual void exitProcedureSection(Cobol85Parser::ProcedureSectionContext *ctx) = 0;

  virtual void enterParagraphs(Cobol85Parser::ParagraphsContext *ctx) = 0;
  virtual void exitParagraphs(Cobol85Parser::ParagraphsContext *ctx) = 0;

  virtual void enterParagraph(Cobol85Parser::ParagraphContext *ctx) = 0;
  virtual void exitParagraph(Cobol85Parser::ParagraphContext *ctx) = 0;

  virtual void enterSentence(Cobol85Parser::SentenceContext *ctx) = 0;
  virtual void exitSentence(Cobol85Parser::SentenceContext *ctx) = 0;

  virtual void enterStatement(Cobol85Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(Cobol85Parser::StatementContext *ctx) = 0;

  virtual void enterAcceptStatement(Cobol85Parser::AcceptStatementContext *ctx) = 0;
  virtual void exitAcceptStatement(Cobol85Parser::AcceptStatementContext *ctx) = 0;

  virtual void enterAcceptFromDateStatement(Cobol85Parser::AcceptFromDateStatementContext *ctx) = 0;
  virtual void exitAcceptFromDateStatement(Cobol85Parser::AcceptFromDateStatementContext *ctx) = 0;

  virtual void enterAcceptFromMnemonicStatement(Cobol85Parser::AcceptFromMnemonicStatementContext *ctx) = 0;
  virtual void exitAcceptFromMnemonicStatement(Cobol85Parser::AcceptFromMnemonicStatementContext *ctx) = 0;

  virtual void enterAcceptFromEscapeKeyStatement(Cobol85Parser::AcceptFromEscapeKeyStatementContext *ctx) = 0;
  virtual void exitAcceptFromEscapeKeyStatement(Cobol85Parser::AcceptFromEscapeKeyStatementContext *ctx) = 0;

  virtual void enterAcceptMessageCountStatement(Cobol85Parser::AcceptMessageCountStatementContext *ctx) = 0;
  virtual void exitAcceptMessageCountStatement(Cobol85Parser::AcceptMessageCountStatementContext *ctx) = 0;

  virtual void enterAddStatement(Cobol85Parser::AddStatementContext *ctx) = 0;
  virtual void exitAddStatement(Cobol85Parser::AddStatementContext *ctx) = 0;

  virtual void enterAddToStatement(Cobol85Parser::AddToStatementContext *ctx) = 0;
  virtual void exitAddToStatement(Cobol85Parser::AddToStatementContext *ctx) = 0;

  virtual void enterAddToGivingStatement(Cobol85Parser::AddToGivingStatementContext *ctx) = 0;
  virtual void exitAddToGivingStatement(Cobol85Parser::AddToGivingStatementContext *ctx) = 0;

  virtual void enterAddCorrespondingStatement(Cobol85Parser::AddCorrespondingStatementContext *ctx) = 0;
  virtual void exitAddCorrespondingStatement(Cobol85Parser::AddCorrespondingStatementContext *ctx) = 0;

  virtual void enterAddFrom(Cobol85Parser::AddFromContext *ctx) = 0;
  virtual void exitAddFrom(Cobol85Parser::AddFromContext *ctx) = 0;

  virtual void enterAddTo(Cobol85Parser::AddToContext *ctx) = 0;
  virtual void exitAddTo(Cobol85Parser::AddToContext *ctx) = 0;

  virtual void enterAddToGiving(Cobol85Parser::AddToGivingContext *ctx) = 0;
  virtual void exitAddToGiving(Cobol85Parser::AddToGivingContext *ctx) = 0;

  virtual void enterAddGiving(Cobol85Parser::AddGivingContext *ctx) = 0;
  virtual void exitAddGiving(Cobol85Parser::AddGivingContext *ctx) = 0;

  virtual void enterAlteredGoTo(Cobol85Parser::AlteredGoToContext *ctx) = 0;
  virtual void exitAlteredGoTo(Cobol85Parser::AlteredGoToContext *ctx) = 0;

  virtual void enterAlterStatement(Cobol85Parser::AlterStatementContext *ctx) = 0;
  virtual void exitAlterStatement(Cobol85Parser::AlterStatementContext *ctx) = 0;

  virtual void enterAlterProceedTo(Cobol85Parser::AlterProceedToContext *ctx) = 0;
  virtual void exitAlterProceedTo(Cobol85Parser::AlterProceedToContext *ctx) = 0;

  virtual void enterCallStatement(Cobol85Parser::CallStatementContext *ctx) = 0;
  virtual void exitCallStatement(Cobol85Parser::CallStatementContext *ctx) = 0;

  virtual void enterCallUsingPhrase(Cobol85Parser::CallUsingPhraseContext *ctx) = 0;
  virtual void exitCallUsingPhrase(Cobol85Parser::CallUsingPhraseContext *ctx) = 0;

  virtual void enterCallUsingParameter(Cobol85Parser::CallUsingParameterContext *ctx) = 0;
  virtual void exitCallUsingParameter(Cobol85Parser::CallUsingParameterContext *ctx) = 0;

  virtual void enterCallByReferencePhrase(Cobol85Parser::CallByReferencePhraseContext *ctx) = 0;
  virtual void exitCallByReferencePhrase(Cobol85Parser::CallByReferencePhraseContext *ctx) = 0;

  virtual void enterCallByReference(Cobol85Parser::CallByReferenceContext *ctx) = 0;
  virtual void exitCallByReference(Cobol85Parser::CallByReferenceContext *ctx) = 0;

  virtual void enterCallByValuePhrase(Cobol85Parser::CallByValuePhraseContext *ctx) = 0;
  virtual void exitCallByValuePhrase(Cobol85Parser::CallByValuePhraseContext *ctx) = 0;

  virtual void enterCallByValue(Cobol85Parser::CallByValueContext *ctx) = 0;
  virtual void exitCallByValue(Cobol85Parser::CallByValueContext *ctx) = 0;

  virtual void enterCallByContentPhrase(Cobol85Parser::CallByContentPhraseContext *ctx) = 0;
  virtual void exitCallByContentPhrase(Cobol85Parser::CallByContentPhraseContext *ctx) = 0;

  virtual void enterCallByContent(Cobol85Parser::CallByContentContext *ctx) = 0;
  virtual void exitCallByContent(Cobol85Parser::CallByContentContext *ctx) = 0;

  virtual void enterCallGivingPhrase(Cobol85Parser::CallGivingPhraseContext *ctx) = 0;
  virtual void exitCallGivingPhrase(Cobol85Parser::CallGivingPhraseContext *ctx) = 0;

  virtual void enterCancelStatement(Cobol85Parser::CancelStatementContext *ctx) = 0;
  virtual void exitCancelStatement(Cobol85Parser::CancelStatementContext *ctx) = 0;

  virtual void enterCancelCall(Cobol85Parser::CancelCallContext *ctx) = 0;
  virtual void exitCancelCall(Cobol85Parser::CancelCallContext *ctx) = 0;

  virtual void enterCloseStatement(Cobol85Parser::CloseStatementContext *ctx) = 0;
  virtual void exitCloseStatement(Cobol85Parser::CloseStatementContext *ctx) = 0;

  virtual void enterCloseFile(Cobol85Parser::CloseFileContext *ctx) = 0;
  virtual void exitCloseFile(Cobol85Parser::CloseFileContext *ctx) = 0;

  virtual void enterCloseReelUnitStatement(Cobol85Parser::CloseReelUnitStatementContext *ctx) = 0;
  virtual void exitCloseReelUnitStatement(Cobol85Parser::CloseReelUnitStatementContext *ctx) = 0;

  virtual void enterCloseRelativeStatement(Cobol85Parser::CloseRelativeStatementContext *ctx) = 0;
  virtual void exitCloseRelativeStatement(Cobol85Parser::CloseRelativeStatementContext *ctx) = 0;

  virtual void enterClosePortFileIOStatement(Cobol85Parser::ClosePortFileIOStatementContext *ctx) = 0;
  virtual void exitClosePortFileIOStatement(Cobol85Parser::ClosePortFileIOStatementContext *ctx) = 0;

  virtual void enterClosePortFileIOUsing(Cobol85Parser::ClosePortFileIOUsingContext *ctx) = 0;
  virtual void exitClosePortFileIOUsing(Cobol85Parser::ClosePortFileIOUsingContext *ctx) = 0;

  virtual void enterClosePortFileIOUsingCloseDisposition(Cobol85Parser::ClosePortFileIOUsingCloseDispositionContext *ctx) = 0;
  virtual void exitClosePortFileIOUsingCloseDisposition(Cobol85Parser::ClosePortFileIOUsingCloseDispositionContext *ctx) = 0;

  virtual void enterClosePortFileIOUsingAssociatedData(Cobol85Parser::ClosePortFileIOUsingAssociatedDataContext *ctx) = 0;
  virtual void exitClosePortFileIOUsingAssociatedData(Cobol85Parser::ClosePortFileIOUsingAssociatedDataContext *ctx) = 0;

  virtual void enterClosePortFileIOUsingAssociatedDataLength(Cobol85Parser::ClosePortFileIOUsingAssociatedDataLengthContext *ctx) = 0;
  virtual void exitClosePortFileIOUsingAssociatedDataLength(Cobol85Parser::ClosePortFileIOUsingAssociatedDataLengthContext *ctx) = 0;

  virtual void enterComputeStatement(Cobol85Parser::ComputeStatementContext *ctx) = 0;
  virtual void exitComputeStatement(Cobol85Parser::ComputeStatementContext *ctx) = 0;

  virtual void enterComputeStore(Cobol85Parser::ComputeStoreContext *ctx) = 0;
  virtual void exitComputeStore(Cobol85Parser::ComputeStoreContext *ctx) = 0;

  virtual void enterContinueStatement(Cobol85Parser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(Cobol85Parser::ContinueStatementContext *ctx) = 0;

  virtual void enterDeleteStatement(Cobol85Parser::DeleteStatementContext *ctx) = 0;
  virtual void exitDeleteStatement(Cobol85Parser::DeleteStatementContext *ctx) = 0;

  virtual void enterDisableStatement(Cobol85Parser::DisableStatementContext *ctx) = 0;
  virtual void exitDisableStatement(Cobol85Parser::DisableStatementContext *ctx) = 0;

  virtual void enterDisplayStatement(Cobol85Parser::DisplayStatementContext *ctx) = 0;
  virtual void exitDisplayStatement(Cobol85Parser::DisplayStatementContext *ctx) = 0;

  virtual void enterDisplayOperand(Cobol85Parser::DisplayOperandContext *ctx) = 0;
  virtual void exitDisplayOperand(Cobol85Parser::DisplayOperandContext *ctx) = 0;

  virtual void enterDisplayAt(Cobol85Parser::DisplayAtContext *ctx) = 0;
  virtual void exitDisplayAt(Cobol85Parser::DisplayAtContext *ctx) = 0;

  virtual void enterDisplayUpon(Cobol85Parser::DisplayUponContext *ctx) = 0;
  virtual void exitDisplayUpon(Cobol85Parser::DisplayUponContext *ctx) = 0;

  virtual void enterDisplayWith(Cobol85Parser::DisplayWithContext *ctx) = 0;
  virtual void exitDisplayWith(Cobol85Parser::DisplayWithContext *ctx) = 0;

  virtual void enterDivideStatement(Cobol85Parser::DivideStatementContext *ctx) = 0;
  virtual void exitDivideStatement(Cobol85Parser::DivideStatementContext *ctx) = 0;

  virtual void enterDivideIntoStatement(Cobol85Parser::DivideIntoStatementContext *ctx) = 0;
  virtual void exitDivideIntoStatement(Cobol85Parser::DivideIntoStatementContext *ctx) = 0;

  virtual void enterDivideIntoGivingStatement(Cobol85Parser::DivideIntoGivingStatementContext *ctx) = 0;
  virtual void exitDivideIntoGivingStatement(Cobol85Parser::DivideIntoGivingStatementContext *ctx) = 0;

  virtual void enterDivideByGivingStatement(Cobol85Parser::DivideByGivingStatementContext *ctx) = 0;
  virtual void exitDivideByGivingStatement(Cobol85Parser::DivideByGivingStatementContext *ctx) = 0;

  virtual void enterDivideGivingPhrase(Cobol85Parser::DivideGivingPhraseContext *ctx) = 0;
  virtual void exitDivideGivingPhrase(Cobol85Parser::DivideGivingPhraseContext *ctx) = 0;

  virtual void enterDivideInto(Cobol85Parser::DivideIntoContext *ctx) = 0;
  virtual void exitDivideInto(Cobol85Parser::DivideIntoContext *ctx) = 0;

  virtual void enterDivideGiving(Cobol85Parser::DivideGivingContext *ctx) = 0;
  virtual void exitDivideGiving(Cobol85Parser::DivideGivingContext *ctx) = 0;

  virtual void enterDivideRemainder(Cobol85Parser::DivideRemainderContext *ctx) = 0;
  virtual void exitDivideRemainder(Cobol85Parser::DivideRemainderContext *ctx) = 0;

  virtual void enterEnableStatement(Cobol85Parser::EnableStatementContext *ctx) = 0;
  virtual void exitEnableStatement(Cobol85Parser::EnableStatementContext *ctx) = 0;

  virtual void enterEntryStatement(Cobol85Parser::EntryStatementContext *ctx) = 0;
  virtual void exitEntryStatement(Cobol85Parser::EntryStatementContext *ctx) = 0;

  virtual void enterEvaluateStatement(Cobol85Parser::EvaluateStatementContext *ctx) = 0;
  virtual void exitEvaluateStatement(Cobol85Parser::EvaluateStatementContext *ctx) = 0;

  virtual void enterEvaluateSelect(Cobol85Parser::EvaluateSelectContext *ctx) = 0;
  virtual void exitEvaluateSelect(Cobol85Parser::EvaluateSelectContext *ctx) = 0;

  virtual void enterEvaluateAlsoSelect(Cobol85Parser::EvaluateAlsoSelectContext *ctx) = 0;
  virtual void exitEvaluateAlsoSelect(Cobol85Parser::EvaluateAlsoSelectContext *ctx) = 0;

  virtual void enterEvaluateWhenPhrase(Cobol85Parser::EvaluateWhenPhraseContext *ctx) = 0;
  virtual void exitEvaluateWhenPhrase(Cobol85Parser::EvaluateWhenPhraseContext *ctx) = 0;

  virtual void enterEvaluateWhen(Cobol85Parser::EvaluateWhenContext *ctx) = 0;
  virtual void exitEvaluateWhen(Cobol85Parser::EvaluateWhenContext *ctx) = 0;

  virtual void enterEvaluateCondition(Cobol85Parser::EvaluateConditionContext *ctx) = 0;
  virtual void exitEvaluateCondition(Cobol85Parser::EvaluateConditionContext *ctx) = 0;

  virtual void enterEvaluateThrough(Cobol85Parser::EvaluateThroughContext *ctx) = 0;
  virtual void exitEvaluateThrough(Cobol85Parser::EvaluateThroughContext *ctx) = 0;

  virtual void enterEvaluateAlsoCondition(Cobol85Parser::EvaluateAlsoConditionContext *ctx) = 0;
  virtual void exitEvaluateAlsoCondition(Cobol85Parser::EvaluateAlsoConditionContext *ctx) = 0;

  virtual void enterEvaluateWhenOther(Cobol85Parser::EvaluateWhenOtherContext *ctx) = 0;
  virtual void exitEvaluateWhenOther(Cobol85Parser::EvaluateWhenOtherContext *ctx) = 0;

  virtual void enterEvaluateValue(Cobol85Parser::EvaluateValueContext *ctx) = 0;
  virtual void exitEvaluateValue(Cobol85Parser::EvaluateValueContext *ctx) = 0;

  virtual void enterExecCicsStatement(Cobol85Parser::ExecCicsStatementContext *ctx) = 0;
  virtual void exitExecCicsStatement(Cobol85Parser::ExecCicsStatementContext *ctx) = 0;

  virtual void enterExecSqlStatement(Cobol85Parser::ExecSqlStatementContext *ctx) = 0;
  virtual void exitExecSqlStatement(Cobol85Parser::ExecSqlStatementContext *ctx) = 0;

  virtual void enterExecSqlImsStatement(Cobol85Parser::ExecSqlImsStatementContext *ctx) = 0;
  virtual void exitExecSqlImsStatement(Cobol85Parser::ExecSqlImsStatementContext *ctx) = 0;

  virtual void enterExhibitStatement(Cobol85Parser::ExhibitStatementContext *ctx) = 0;
  virtual void exitExhibitStatement(Cobol85Parser::ExhibitStatementContext *ctx) = 0;

  virtual void enterExhibitOperand(Cobol85Parser::ExhibitOperandContext *ctx) = 0;
  virtual void exitExhibitOperand(Cobol85Parser::ExhibitOperandContext *ctx) = 0;

  virtual void enterExitStatement(Cobol85Parser::ExitStatementContext *ctx) = 0;
  virtual void exitExitStatement(Cobol85Parser::ExitStatementContext *ctx) = 0;

  virtual void enterGenerateStatement(Cobol85Parser::GenerateStatementContext *ctx) = 0;
  virtual void exitGenerateStatement(Cobol85Parser::GenerateStatementContext *ctx) = 0;

  virtual void enterGobackStatement(Cobol85Parser::GobackStatementContext *ctx) = 0;
  virtual void exitGobackStatement(Cobol85Parser::GobackStatementContext *ctx) = 0;

  virtual void enterGoToStatement(Cobol85Parser::GoToStatementContext *ctx) = 0;
  virtual void exitGoToStatement(Cobol85Parser::GoToStatementContext *ctx) = 0;

  virtual void enterGoToStatementSimple(Cobol85Parser::GoToStatementSimpleContext *ctx) = 0;
  virtual void exitGoToStatementSimple(Cobol85Parser::GoToStatementSimpleContext *ctx) = 0;

  virtual void enterGoToDependingOnStatement(Cobol85Parser::GoToDependingOnStatementContext *ctx) = 0;
  virtual void exitGoToDependingOnStatement(Cobol85Parser::GoToDependingOnStatementContext *ctx) = 0;

  virtual void enterIfStatement(Cobol85Parser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(Cobol85Parser::IfStatementContext *ctx) = 0;

  virtual void enterIfThen(Cobol85Parser::IfThenContext *ctx) = 0;
  virtual void exitIfThen(Cobol85Parser::IfThenContext *ctx) = 0;

  virtual void enterIfElse(Cobol85Parser::IfElseContext *ctx) = 0;
  virtual void exitIfElse(Cobol85Parser::IfElseContext *ctx) = 0;

  virtual void enterInitializeStatement(Cobol85Parser::InitializeStatementContext *ctx) = 0;
  virtual void exitInitializeStatement(Cobol85Parser::InitializeStatementContext *ctx) = 0;

  virtual void enterInitializeReplacingPhrase(Cobol85Parser::InitializeReplacingPhraseContext *ctx) = 0;
  virtual void exitInitializeReplacingPhrase(Cobol85Parser::InitializeReplacingPhraseContext *ctx) = 0;

  virtual void enterInitializeReplacingBy(Cobol85Parser::InitializeReplacingByContext *ctx) = 0;
  virtual void exitInitializeReplacingBy(Cobol85Parser::InitializeReplacingByContext *ctx) = 0;

  virtual void enterInitiateStatement(Cobol85Parser::InitiateStatementContext *ctx) = 0;
  virtual void exitInitiateStatement(Cobol85Parser::InitiateStatementContext *ctx) = 0;

  virtual void enterInspectStatement(Cobol85Parser::InspectStatementContext *ctx) = 0;
  virtual void exitInspectStatement(Cobol85Parser::InspectStatementContext *ctx) = 0;

  virtual void enterInspectTallyingPhrase(Cobol85Parser::InspectTallyingPhraseContext *ctx) = 0;
  virtual void exitInspectTallyingPhrase(Cobol85Parser::InspectTallyingPhraseContext *ctx) = 0;

  virtual void enterInspectReplacingPhrase(Cobol85Parser::InspectReplacingPhraseContext *ctx) = 0;
  virtual void exitInspectReplacingPhrase(Cobol85Parser::InspectReplacingPhraseContext *ctx) = 0;

  virtual void enterInspectTallyingReplacingPhrase(Cobol85Parser::InspectTallyingReplacingPhraseContext *ctx) = 0;
  virtual void exitInspectTallyingReplacingPhrase(Cobol85Parser::InspectTallyingReplacingPhraseContext *ctx) = 0;

  virtual void enterInspectConvertingPhrase(Cobol85Parser::InspectConvertingPhraseContext *ctx) = 0;
  virtual void exitInspectConvertingPhrase(Cobol85Parser::InspectConvertingPhraseContext *ctx) = 0;

  virtual void enterInspectFor(Cobol85Parser::InspectForContext *ctx) = 0;
  virtual void exitInspectFor(Cobol85Parser::InspectForContext *ctx) = 0;

  virtual void enterInspectCharacters(Cobol85Parser::InspectCharactersContext *ctx) = 0;
  virtual void exitInspectCharacters(Cobol85Parser::InspectCharactersContext *ctx) = 0;

  virtual void enterInspectReplacingCharacters(Cobol85Parser::InspectReplacingCharactersContext *ctx) = 0;
  virtual void exitInspectReplacingCharacters(Cobol85Parser::InspectReplacingCharactersContext *ctx) = 0;

  virtual void enterInspectAllLeadings(Cobol85Parser::InspectAllLeadingsContext *ctx) = 0;
  virtual void exitInspectAllLeadings(Cobol85Parser::InspectAllLeadingsContext *ctx) = 0;

  virtual void enterInspectReplacingAllLeadings(Cobol85Parser::InspectReplacingAllLeadingsContext *ctx) = 0;
  virtual void exitInspectReplacingAllLeadings(Cobol85Parser::InspectReplacingAllLeadingsContext *ctx) = 0;

  virtual void enterInspectAllLeading(Cobol85Parser::InspectAllLeadingContext *ctx) = 0;
  virtual void exitInspectAllLeading(Cobol85Parser::InspectAllLeadingContext *ctx) = 0;

  virtual void enterInspectReplacingAllLeading(Cobol85Parser::InspectReplacingAllLeadingContext *ctx) = 0;
  virtual void exitInspectReplacingAllLeading(Cobol85Parser::InspectReplacingAllLeadingContext *ctx) = 0;

  virtual void enterInspectBy(Cobol85Parser::InspectByContext *ctx) = 0;
  virtual void exitInspectBy(Cobol85Parser::InspectByContext *ctx) = 0;

  virtual void enterInspectTo(Cobol85Parser::InspectToContext *ctx) = 0;
  virtual void exitInspectTo(Cobol85Parser::InspectToContext *ctx) = 0;

  virtual void enterInspectBeforeAfter(Cobol85Parser::InspectBeforeAfterContext *ctx) = 0;
  virtual void exitInspectBeforeAfter(Cobol85Parser::InspectBeforeAfterContext *ctx) = 0;

  virtual void enterMergeStatement(Cobol85Parser::MergeStatementContext *ctx) = 0;
  virtual void exitMergeStatement(Cobol85Parser::MergeStatementContext *ctx) = 0;

  virtual void enterMergeOnKeyClause(Cobol85Parser::MergeOnKeyClauseContext *ctx) = 0;
  virtual void exitMergeOnKeyClause(Cobol85Parser::MergeOnKeyClauseContext *ctx) = 0;

  virtual void enterMergeCollatingSequencePhrase(Cobol85Parser::MergeCollatingSequencePhraseContext *ctx) = 0;
  virtual void exitMergeCollatingSequencePhrase(Cobol85Parser::MergeCollatingSequencePhraseContext *ctx) = 0;

  virtual void enterMergeCollatingAlphanumeric(Cobol85Parser::MergeCollatingAlphanumericContext *ctx) = 0;
  virtual void exitMergeCollatingAlphanumeric(Cobol85Parser::MergeCollatingAlphanumericContext *ctx) = 0;

  virtual void enterMergeCollatingNational(Cobol85Parser::MergeCollatingNationalContext *ctx) = 0;
  virtual void exitMergeCollatingNational(Cobol85Parser::MergeCollatingNationalContext *ctx) = 0;

  virtual void enterMergeUsing(Cobol85Parser::MergeUsingContext *ctx) = 0;
  virtual void exitMergeUsing(Cobol85Parser::MergeUsingContext *ctx) = 0;

  virtual void enterMergeOutputProcedurePhrase(Cobol85Parser::MergeOutputProcedurePhraseContext *ctx) = 0;
  virtual void exitMergeOutputProcedurePhrase(Cobol85Parser::MergeOutputProcedurePhraseContext *ctx) = 0;

  virtual void enterMergeOutputThrough(Cobol85Parser::MergeOutputThroughContext *ctx) = 0;
  virtual void exitMergeOutputThrough(Cobol85Parser::MergeOutputThroughContext *ctx) = 0;

  virtual void enterMergeGivingPhrase(Cobol85Parser::MergeGivingPhraseContext *ctx) = 0;
  virtual void exitMergeGivingPhrase(Cobol85Parser::MergeGivingPhraseContext *ctx) = 0;

  virtual void enterMergeGiving(Cobol85Parser::MergeGivingContext *ctx) = 0;
  virtual void exitMergeGiving(Cobol85Parser::MergeGivingContext *ctx) = 0;

  virtual void enterMoveStatement(Cobol85Parser::MoveStatementContext *ctx) = 0;
  virtual void exitMoveStatement(Cobol85Parser::MoveStatementContext *ctx) = 0;

  virtual void enterMoveToStatement(Cobol85Parser::MoveToStatementContext *ctx) = 0;
  virtual void exitMoveToStatement(Cobol85Parser::MoveToStatementContext *ctx) = 0;

  virtual void enterMoveToSendingArea(Cobol85Parser::MoveToSendingAreaContext *ctx) = 0;
  virtual void exitMoveToSendingArea(Cobol85Parser::MoveToSendingAreaContext *ctx) = 0;

  virtual void enterMoveCorrespondingToStatement(Cobol85Parser::MoveCorrespondingToStatementContext *ctx) = 0;
  virtual void exitMoveCorrespondingToStatement(Cobol85Parser::MoveCorrespondingToStatementContext *ctx) = 0;

  virtual void enterMoveCorrespondingToSendingArea(Cobol85Parser::MoveCorrespondingToSendingAreaContext *ctx) = 0;
  virtual void exitMoveCorrespondingToSendingArea(Cobol85Parser::MoveCorrespondingToSendingAreaContext *ctx) = 0;

  virtual void enterMultiplyStatement(Cobol85Parser::MultiplyStatementContext *ctx) = 0;
  virtual void exitMultiplyStatement(Cobol85Parser::MultiplyStatementContext *ctx) = 0;

  virtual void enterMultiplyRegular(Cobol85Parser::MultiplyRegularContext *ctx) = 0;
  virtual void exitMultiplyRegular(Cobol85Parser::MultiplyRegularContext *ctx) = 0;

  virtual void enterMultiplyRegularOperand(Cobol85Parser::MultiplyRegularOperandContext *ctx) = 0;
  virtual void exitMultiplyRegularOperand(Cobol85Parser::MultiplyRegularOperandContext *ctx) = 0;

  virtual void enterMultiplyGiving(Cobol85Parser::MultiplyGivingContext *ctx) = 0;
  virtual void exitMultiplyGiving(Cobol85Parser::MultiplyGivingContext *ctx) = 0;

  virtual void enterMultiplyGivingOperand(Cobol85Parser::MultiplyGivingOperandContext *ctx) = 0;
  virtual void exitMultiplyGivingOperand(Cobol85Parser::MultiplyGivingOperandContext *ctx) = 0;

  virtual void enterMultiplyGivingResult(Cobol85Parser::MultiplyGivingResultContext *ctx) = 0;
  virtual void exitMultiplyGivingResult(Cobol85Parser::MultiplyGivingResultContext *ctx) = 0;

  virtual void enterOpenStatement(Cobol85Parser::OpenStatementContext *ctx) = 0;
  virtual void exitOpenStatement(Cobol85Parser::OpenStatementContext *ctx) = 0;

  virtual void enterOpenInputStatement(Cobol85Parser::OpenInputStatementContext *ctx) = 0;
  virtual void exitOpenInputStatement(Cobol85Parser::OpenInputStatementContext *ctx) = 0;

  virtual void enterOpenInput(Cobol85Parser::OpenInputContext *ctx) = 0;
  virtual void exitOpenInput(Cobol85Parser::OpenInputContext *ctx) = 0;

  virtual void enterOpenOutputStatement(Cobol85Parser::OpenOutputStatementContext *ctx) = 0;
  virtual void exitOpenOutputStatement(Cobol85Parser::OpenOutputStatementContext *ctx) = 0;

  virtual void enterOpenOutput(Cobol85Parser::OpenOutputContext *ctx) = 0;
  virtual void exitOpenOutput(Cobol85Parser::OpenOutputContext *ctx) = 0;

  virtual void enterOpenIOStatement(Cobol85Parser::OpenIOStatementContext *ctx) = 0;
  virtual void exitOpenIOStatement(Cobol85Parser::OpenIOStatementContext *ctx) = 0;

  virtual void enterOpenExtendStatement(Cobol85Parser::OpenExtendStatementContext *ctx) = 0;
  virtual void exitOpenExtendStatement(Cobol85Parser::OpenExtendStatementContext *ctx) = 0;

  virtual void enterPerformStatement(Cobol85Parser::PerformStatementContext *ctx) = 0;
  virtual void exitPerformStatement(Cobol85Parser::PerformStatementContext *ctx) = 0;

  virtual void enterPerformInlineStatement(Cobol85Parser::PerformInlineStatementContext *ctx) = 0;
  virtual void exitPerformInlineStatement(Cobol85Parser::PerformInlineStatementContext *ctx) = 0;

  virtual void enterPerformProcedureStatement(Cobol85Parser::PerformProcedureStatementContext *ctx) = 0;
  virtual void exitPerformProcedureStatement(Cobol85Parser::PerformProcedureStatementContext *ctx) = 0;

  virtual void enterPerformType(Cobol85Parser::PerformTypeContext *ctx) = 0;
  virtual void exitPerformType(Cobol85Parser::PerformTypeContext *ctx) = 0;

  virtual void enterPerformTimes(Cobol85Parser::PerformTimesContext *ctx) = 0;
  virtual void exitPerformTimes(Cobol85Parser::PerformTimesContext *ctx) = 0;

  virtual void enterPerformUntil(Cobol85Parser::PerformUntilContext *ctx) = 0;
  virtual void exitPerformUntil(Cobol85Parser::PerformUntilContext *ctx) = 0;

  virtual void enterPerformVarying(Cobol85Parser::PerformVaryingContext *ctx) = 0;
  virtual void exitPerformVarying(Cobol85Parser::PerformVaryingContext *ctx) = 0;

  virtual void enterPerformVaryingClause(Cobol85Parser::PerformVaryingClauseContext *ctx) = 0;
  virtual void exitPerformVaryingClause(Cobol85Parser::PerformVaryingClauseContext *ctx) = 0;

  virtual void enterPerformVaryingPhrase(Cobol85Parser::PerformVaryingPhraseContext *ctx) = 0;
  virtual void exitPerformVaryingPhrase(Cobol85Parser::PerformVaryingPhraseContext *ctx) = 0;

  virtual void enterPerformAfter(Cobol85Parser::PerformAfterContext *ctx) = 0;
  virtual void exitPerformAfter(Cobol85Parser::PerformAfterContext *ctx) = 0;

  virtual void enterPerformFrom(Cobol85Parser::PerformFromContext *ctx) = 0;
  virtual void exitPerformFrom(Cobol85Parser::PerformFromContext *ctx) = 0;

  virtual void enterPerformBy(Cobol85Parser::PerformByContext *ctx) = 0;
  virtual void exitPerformBy(Cobol85Parser::PerformByContext *ctx) = 0;

  virtual void enterPerformTestClause(Cobol85Parser::PerformTestClauseContext *ctx) = 0;
  virtual void exitPerformTestClause(Cobol85Parser::PerformTestClauseContext *ctx) = 0;

  virtual void enterPurgeStatement(Cobol85Parser::PurgeStatementContext *ctx) = 0;
  virtual void exitPurgeStatement(Cobol85Parser::PurgeStatementContext *ctx) = 0;

  virtual void enterReadStatement(Cobol85Parser::ReadStatementContext *ctx) = 0;
  virtual void exitReadStatement(Cobol85Parser::ReadStatementContext *ctx) = 0;

  virtual void enterReadInto(Cobol85Parser::ReadIntoContext *ctx) = 0;
  virtual void exitReadInto(Cobol85Parser::ReadIntoContext *ctx) = 0;

  virtual void enterReadWith(Cobol85Parser::ReadWithContext *ctx) = 0;
  virtual void exitReadWith(Cobol85Parser::ReadWithContext *ctx) = 0;

  virtual void enterReadKey(Cobol85Parser::ReadKeyContext *ctx) = 0;
  virtual void exitReadKey(Cobol85Parser::ReadKeyContext *ctx) = 0;

  virtual void enterReceiveStatement(Cobol85Parser::ReceiveStatementContext *ctx) = 0;
  virtual void exitReceiveStatement(Cobol85Parser::ReceiveStatementContext *ctx) = 0;

  virtual void enterReceiveFromStatement(Cobol85Parser::ReceiveFromStatementContext *ctx) = 0;
  virtual void exitReceiveFromStatement(Cobol85Parser::ReceiveFromStatementContext *ctx) = 0;

  virtual void enterReceiveFrom(Cobol85Parser::ReceiveFromContext *ctx) = 0;
  virtual void exitReceiveFrom(Cobol85Parser::ReceiveFromContext *ctx) = 0;

  virtual void enterReceiveIntoStatement(Cobol85Parser::ReceiveIntoStatementContext *ctx) = 0;
  virtual void exitReceiveIntoStatement(Cobol85Parser::ReceiveIntoStatementContext *ctx) = 0;

  virtual void enterReceiveNoData(Cobol85Parser::ReceiveNoDataContext *ctx) = 0;
  virtual void exitReceiveNoData(Cobol85Parser::ReceiveNoDataContext *ctx) = 0;

  virtual void enterReceiveWithData(Cobol85Parser::ReceiveWithDataContext *ctx) = 0;
  virtual void exitReceiveWithData(Cobol85Parser::ReceiveWithDataContext *ctx) = 0;

  virtual void enterReceiveBefore(Cobol85Parser::ReceiveBeforeContext *ctx) = 0;
  virtual void exitReceiveBefore(Cobol85Parser::ReceiveBeforeContext *ctx) = 0;

  virtual void enterReceiveWith(Cobol85Parser::ReceiveWithContext *ctx) = 0;
  virtual void exitReceiveWith(Cobol85Parser::ReceiveWithContext *ctx) = 0;

  virtual void enterReceiveThread(Cobol85Parser::ReceiveThreadContext *ctx) = 0;
  virtual void exitReceiveThread(Cobol85Parser::ReceiveThreadContext *ctx) = 0;

  virtual void enterReceiveSize(Cobol85Parser::ReceiveSizeContext *ctx) = 0;
  virtual void exitReceiveSize(Cobol85Parser::ReceiveSizeContext *ctx) = 0;

  virtual void enterReceiveStatus(Cobol85Parser::ReceiveStatusContext *ctx) = 0;
  virtual void exitReceiveStatus(Cobol85Parser::ReceiveStatusContext *ctx) = 0;

  virtual void enterReleaseStatement(Cobol85Parser::ReleaseStatementContext *ctx) = 0;
  virtual void exitReleaseStatement(Cobol85Parser::ReleaseStatementContext *ctx) = 0;

  virtual void enterReturnStatement(Cobol85Parser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(Cobol85Parser::ReturnStatementContext *ctx) = 0;

  virtual void enterReturnInto(Cobol85Parser::ReturnIntoContext *ctx) = 0;
  virtual void exitReturnInto(Cobol85Parser::ReturnIntoContext *ctx) = 0;

  virtual void enterRewriteStatement(Cobol85Parser::RewriteStatementContext *ctx) = 0;
  virtual void exitRewriteStatement(Cobol85Parser::RewriteStatementContext *ctx) = 0;

  virtual void enterRewriteFrom(Cobol85Parser::RewriteFromContext *ctx) = 0;
  virtual void exitRewriteFrom(Cobol85Parser::RewriteFromContext *ctx) = 0;

  virtual void enterSearchStatement(Cobol85Parser::SearchStatementContext *ctx) = 0;
  virtual void exitSearchStatement(Cobol85Parser::SearchStatementContext *ctx) = 0;

  virtual void enterSearchVarying(Cobol85Parser::SearchVaryingContext *ctx) = 0;
  virtual void exitSearchVarying(Cobol85Parser::SearchVaryingContext *ctx) = 0;

  virtual void enterSearchWhen(Cobol85Parser::SearchWhenContext *ctx) = 0;
  virtual void exitSearchWhen(Cobol85Parser::SearchWhenContext *ctx) = 0;

  virtual void enterSendStatement(Cobol85Parser::SendStatementContext *ctx) = 0;
  virtual void exitSendStatement(Cobol85Parser::SendStatementContext *ctx) = 0;

  virtual void enterSendStatementSync(Cobol85Parser::SendStatementSyncContext *ctx) = 0;
  virtual void exitSendStatementSync(Cobol85Parser::SendStatementSyncContext *ctx) = 0;

  virtual void enterSendStatementAsync(Cobol85Parser::SendStatementAsyncContext *ctx) = 0;
  virtual void exitSendStatementAsync(Cobol85Parser::SendStatementAsyncContext *ctx) = 0;

  virtual void enterSendFromPhrase(Cobol85Parser::SendFromPhraseContext *ctx) = 0;
  virtual void exitSendFromPhrase(Cobol85Parser::SendFromPhraseContext *ctx) = 0;

  virtual void enterSendWithPhrase(Cobol85Parser::SendWithPhraseContext *ctx) = 0;
  virtual void exitSendWithPhrase(Cobol85Parser::SendWithPhraseContext *ctx) = 0;

  virtual void enterSendReplacingPhrase(Cobol85Parser::SendReplacingPhraseContext *ctx) = 0;
  virtual void exitSendReplacingPhrase(Cobol85Parser::SendReplacingPhraseContext *ctx) = 0;

  virtual void enterSendAdvancingPhrase(Cobol85Parser::SendAdvancingPhraseContext *ctx) = 0;
  virtual void exitSendAdvancingPhrase(Cobol85Parser::SendAdvancingPhraseContext *ctx) = 0;

  virtual void enterSendAdvancingPage(Cobol85Parser::SendAdvancingPageContext *ctx) = 0;
  virtual void exitSendAdvancingPage(Cobol85Parser::SendAdvancingPageContext *ctx) = 0;

  virtual void enterSendAdvancingLines(Cobol85Parser::SendAdvancingLinesContext *ctx) = 0;
  virtual void exitSendAdvancingLines(Cobol85Parser::SendAdvancingLinesContext *ctx) = 0;

  virtual void enterSendAdvancingMnemonic(Cobol85Parser::SendAdvancingMnemonicContext *ctx) = 0;
  virtual void exitSendAdvancingMnemonic(Cobol85Parser::SendAdvancingMnemonicContext *ctx) = 0;

  virtual void enterSetStatement(Cobol85Parser::SetStatementContext *ctx) = 0;
  virtual void exitSetStatement(Cobol85Parser::SetStatementContext *ctx) = 0;

  virtual void enterSetToStatement(Cobol85Parser::SetToStatementContext *ctx) = 0;
  virtual void exitSetToStatement(Cobol85Parser::SetToStatementContext *ctx) = 0;

  virtual void enterSetUpDownByStatement(Cobol85Parser::SetUpDownByStatementContext *ctx) = 0;
  virtual void exitSetUpDownByStatement(Cobol85Parser::SetUpDownByStatementContext *ctx) = 0;

  virtual void enterSetTo(Cobol85Parser::SetToContext *ctx) = 0;
  virtual void exitSetTo(Cobol85Parser::SetToContext *ctx) = 0;

  virtual void enterSetToValue(Cobol85Parser::SetToValueContext *ctx) = 0;
  virtual void exitSetToValue(Cobol85Parser::SetToValueContext *ctx) = 0;

  virtual void enterSetByValue(Cobol85Parser::SetByValueContext *ctx) = 0;
  virtual void exitSetByValue(Cobol85Parser::SetByValueContext *ctx) = 0;

  virtual void enterSortStatement(Cobol85Parser::SortStatementContext *ctx) = 0;
  virtual void exitSortStatement(Cobol85Parser::SortStatementContext *ctx) = 0;

  virtual void enterSortOnKeyClause(Cobol85Parser::SortOnKeyClauseContext *ctx) = 0;
  virtual void exitSortOnKeyClause(Cobol85Parser::SortOnKeyClauseContext *ctx) = 0;

  virtual void enterSortDuplicatesPhrase(Cobol85Parser::SortDuplicatesPhraseContext *ctx) = 0;
  virtual void exitSortDuplicatesPhrase(Cobol85Parser::SortDuplicatesPhraseContext *ctx) = 0;

  virtual void enterSortCollatingSequencePhrase(Cobol85Parser::SortCollatingSequencePhraseContext *ctx) = 0;
  virtual void exitSortCollatingSequencePhrase(Cobol85Parser::SortCollatingSequencePhraseContext *ctx) = 0;

  virtual void enterSortCollatingAlphanumeric(Cobol85Parser::SortCollatingAlphanumericContext *ctx) = 0;
  virtual void exitSortCollatingAlphanumeric(Cobol85Parser::SortCollatingAlphanumericContext *ctx) = 0;

  virtual void enterSortCollatingNational(Cobol85Parser::SortCollatingNationalContext *ctx) = 0;
  virtual void exitSortCollatingNational(Cobol85Parser::SortCollatingNationalContext *ctx) = 0;

  virtual void enterSortInputProcedurePhrase(Cobol85Parser::SortInputProcedurePhraseContext *ctx) = 0;
  virtual void exitSortInputProcedurePhrase(Cobol85Parser::SortInputProcedurePhraseContext *ctx) = 0;

  virtual void enterSortInputThrough(Cobol85Parser::SortInputThroughContext *ctx) = 0;
  virtual void exitSortInputThrough(Cobol85Parser::SortInputThroughContext *ctx) = 0;

  virtual void enterSortUsing(Cobol85Parser::SortUsingContext *ctx) = 0;
  virtual void exitSortUsing(Cobol85Parser::SortUsingContext *ctx) = 0;

  virtual void enterSortOutputProcedurePhrase(Cobol85Parser::SortOutputProcedurePhraseContext *ctx) = 0;
  virtual void exitSortOutputProcedurePhrase(Cobol85Parser::SortOutputProcedurePhraseContext *ctx) = 0;

  virtual void enterSortOutputThrough(Cobol85Parser::SortOutputThroughContext *ctx) = 0;
  virtual void exitSortOutputThrough(Cobol85Parser::SortOutputThroughContext *ctx) = 0;

  virtual void enterSortGivingPhrase(Cobol85Parser::SortGivingPhraseContext *ctx) = 0;
  virtual void exitSortGivingPhrase(Cobol85Parser::SortGivingPhraseContext *ctx) = 0;

  virtual void enterSortGiving(Cobol85Parser::SortGivingContext *ctx) = 0;
  virtual void exitSortGiving(Cobol85Parser::SortGivingContext *ctx) = 0;

  virtual void enterStartStatement(Cobol85Parser::StartStatementContext *ctx) = 0;
  virtual void exitStartStatement(Cobol85Parser::StartStatementContext *ctx) = 0;

  virtual void enterStartKey(Cobol85Parser::StartKeyContext *ctx) = 0;
  virtual void exitStartKey(Cobol85Parser::StartKeyContext *ctx) = 0;

  virtual void enterStopStatement(Cobol85Parser::StopStatementContext *ctx) = 0;
  virtual void exitStopStatement(Cobol85Parser::StopStatementContext *ctx) = 0;

  virtual void enterStringStatement(Cobol85Parser::StringStatementContext *ctx) = 0;
  virtual void exitStringStatement(Cobol85Parser::StringStatementContext *ctx) = 0;

  virtual void enterStringSendingPhrase(Cobol85Parser::StringSendingPhraseContext *ctx) = 0;
  virtual void exitStringSendingPhrase(Cobol85Parser::StringSendingPhraseContext *ctx) = 0;

  virtual void enterStringSending(Cobol85Parser::StringSendingContext *ctx) = 0;
  virtual void exitStringSending(Cobol85Parser::StringSendingContext *ctx) = 0;

  virtual void enterStringDelimitedByPhrase(Cobol85Parser::StringDelimitedByPhraseContext *ctx) = 0;
  virtual void exitStringDelimitedByPhrase(Cobol85Parser::StringDelimitedByPhraseContext *ctx) = 0;

  virtual void enterStringForPhrase(Cobol85Parser::StringForPhraseContext *ctx) = 0;
  virtual void exitStringForPhrase(Cobol85Parser::StringForPhraseContext *ctx) = 0;

  virtual void enterStringIntoPhrase(Cobol85Parser::StringIntoPhraseContext *ctx) = 0;
  virtual void exitStringIntoPhrase(Cobol85Parser::StringIntoPhraseContext *ctx) = 0;

  virtual void enterStringWithPointerPhrase(Cobol85Parser::StringWithPointerPhraseContext *ctx) = 0;
  virtual void exitStringWithPointerPhrase(Cobol85Parser::StringWithPointerPhraseContext *ctx) = 0;

  virtual void enterSubtractStatement(Cobol85Parser::SubtractStatementContext *ctx) = 0;
  virtual void exitSubtractStatement(Cobol85Parser::SubtractStatementContext *ctx) = 0;

  virtual void enterSubtractFromStatement(Cobol85Parser::SubtractFromStatementContext *ctx) = 0;
  virtual void exitSubtractFromStatement(Cobol85Parser::SubtractFromStatementContext *ctx) = 0;

  virtual void enterSubtractFromGivingStatement(Cobol85Parser::SubtractFromGivingStatementContext *ctx) = 0;
  virtual void exitSubtractFromGivingStatement(Cobol85Parser::SubtractFromGivingStatementContext *ctx) = 0;

  virtual void enterSubtractCorrespondingStatement(Cobol85Parser::SubtractCorrespondingStatementContext *ctx) = 0;
  virtual void exitSubtractCorrespondingStatement(Cobol85Parser::SubtractCorrespondingStatementContext *ctx) = 0;

  virtual void enterSubtractSubtrahend(Cobol85Parser::SubtractSubtrahendContext *ctx) = 0;
  virtual void exitSubtractSubtrahend(Cobol85Parser::SubtractSubtrahendContext *ctx) = 0;

  virtual void enterSubtractMinuend(Cobol85Parser::SubtractMinuendContext *ctx) = 0;
  virtual void exitSubtractMinuend(Cobol85Parser::SubtractMinuendContext *ctx) = 0;

  virtual void enterSubtractMinuendGiving(Cobol85Parser::SubtractMinuendGivingContext *ctx) = 0;
  virtual void exitSubtractMinuendGiving(Cobol85Parser::SubtractMinuendGivingContext *ctx) = 0;

  virtual void enterSubtractGiving(Cobol85Parser::SubtractGivingContext *ctx) = 0;
  virtual void exitSubtractGiving(Cobol85Parser::SubtractGivingContext *ctx) = 0;

  virtual void enterSubtractMinuendCorresponding(Cobol85Parser::SubtractMinuendCorrespondingContext *ctx) = 0;
  virtual void exitSubtractMinuendCorresponding(Cobol85Parser::SubtractMinuendCorrespondingContext *ctx) = 0;

  virtual void enterTerminateStatement(Cobol85Parser::TerminateStatementContext *ctx) = 0;
  virtual void exitTerminateStatement(Cobol85Parser::TerminateStatementContext *ctx) = 0;

  virtual void enterUnstringStatement(Cobol85Parser::UnstringStatementContext *ctx) = 0;
  virtual void exitUnstringStatement(Cobol85Parser::UnstringStatementContext *ctx) = 0;

  virtual void enterUnstringSendingPhrase(Cobol85Parser::UnstringSendingPhraseContext *ctx) = 0;
  virtual void exitUnstringSendingPhrase(Cobol85Parser::UnstringSendingPhraseContext *ctx) = 0;

  virtual void enterUnstringDelimitedByPhrase(Cobol85Parser::UnstringDelimitedByPhraseContext *ctx) = 0;
  virtual void exitUnstringDelimitedByPhrase(Cobol85Parser::UnstringDelimitedByPhraseContext *ctx) = 0;

  virtual void enterUnstringOrAllPhrase(Cobol85Parser::UnstringOrAllPhraseContext *ctx) = 0;
  virtual void exitUnstringOrAllPhrase(Cobol85Parser::UnstringOrAllPhraseContext *ctx) = 0;

  virtual void enterUnstringIntoPhrase(Cobol85Parser::UnstringIntoPhraseContext *ctx) = 0;
  virtual void exitUnstringIntoPhrase(Cobol85Parser::UnstringIntoPhraseContext *ctx) = 0;

  virtual void enterUnstringInto(Cobol85Parser::UnstringIntoContext *ctx) = 0;
  virtual void exitUnstringInto(Cobol85Parser::UnstringIntoContext *ctx) = 0;

  virtual void enterUnstringDelimiterIn(Cobol85Parser::UnstringDelimiterInContext *ctx) = 0;
  virtual void exitUnstringDelimiterIn(Cobol85Parser::UnstringDelimiterInContext *ctx) = 0;

  virtual void enterUnstringCountIn(Cobol85Parser::UnstringCountInContext *ctx) = 0;
  virtual void exitUnstringCountIn(Cobol85Parser::UnstringCountInContext *ctx) = 0;

  virtual void enterUnstringWithPointerPhrase(Cobol85Parser::UnstringWithPointerPhraseContext *ctx) = 0;
  virtual void exitUnstringWithPointerPhrase(Cobol85Parser::UnstringWithPointerPhraseContext *ctx) = 0;

  virtual void enterUnstringTallyingPhrase(Cobol85Parser::UnstringTallyingPhraseContext *ctx) = 0;
  virtual void exitUnstringTallyingPhrase(Cobol85Parser::UnstringTallyingPhraseContext *ctx) = 0;

  virtual void enterUseStatement(Cobol85Parser::UseStatementContext *ctx) = 0;
  virtual void exitUseStatement(Cobol85Parser::UseStatementContext *ctx) = 0;

  virtual void enterUseAfterClause(Cobol85Parser::UseAfterClauseContext *ctx) = 0;
  virtual void exitUseAfterClause(Cobol85Parser::UseAfterClauseContext *ctx) = 0;

  virtual void enterUseAfterOn(Cobol85Parser::UseAfterOnContext *ctx) = 0;
  virtual void exitUseAfterOn(Cobol85Parser::UseAfterOnContext *ctx) = 0;

  virtual void enterUseDebugClause(Cobol85Parser::UseDebugClauseContext *ctx) = 0;
  virtual void exitUseDebugClause(Cobol85Parser::UseDebugClauseContext *ctx) = 0;

  virtual void enterUseDebugOn(Cobol85Parser::UseDebugOnContext *ctx) = 0;
  virtual void exitUseDebugOn(Cobol85Parser::UseDebugOnContext *ctx) = 0;

  virtual void enterWriteStatement(Cobol85Parser::WriteStatementContext *ctx) = 0;
  virtual void exitWriteStatement(Cobol85Parser::WriteStatementContext *ctx) = 0;

  virtual void enterWriteFromPhrase(Cobol85Parser::WriteFromPhraseContext *ctx) = 0;
  virtual void exitWriteFromPhrase(Cobol85Parser::WriteFromPhraseContext *ctx) = 0;

  virtual void enterWriteAdvancingPhrase(Cobol85Parser::WriteAdvancingPhraseContext *ctx) = 0;
  virtual void exitWriteAdvancingPhrase(Cobol85Parser::WriteAdvancingPhraseContext *ctx) = 0;

  virtual void enterWriteAdvancingPage(Cobol85Parser::WriteAdvancingPageContext *ctx) = 0;
  virtual void exitWriteAdvancingPage(Cobol85Parser::WriteAdvancingPageContext *ctx) = 0;

  virtual void enterWriteAdvancingLines(Cobol85Parser::WriteAdvancingLinesContext *ctx) = 0;
  virtual void exitWriteAdvancingLines(Cobol85Parser::WriteAdvancingLinesContext *ctx) = 0;

  virtual void enterWriteAdvancingMnemonic(Cobol85Parser::WriteAdvancingMnemonicContext *ctx) = 0;
  virtual void exitWriteAdvancingMnemonic(Cobol85Parser::WriteAdvancingMnemonicContext *ctx) = 0;

  virtual void enterWriteAtEndOfPagePhrase(Cobol85Parser::WriteAtEndOfPagePhraseContext *ctx) = 0;
  virtual void exitWriteAtEndOfPagePhrase(Cobol85Parser::WriteAtEndOfPagePhraseContext *ctx) = 0;

  virtual void enterWriteNotAtEndOfPagePhrase(Cobol85Parser::WriteNotAtEndOfPagePhraseContext *ctx) = 0;
  virtual void exitWriteNotAtEndOfPagePhrase(Cobol85Parser::WriteNotAtEndOfPagePhraseContext *ctx) = 0;

  virtual void enterAtEndPhrase(Cobol85Parser::AtEndPhraseContext *ctx) = 0;
  virtual void exitAtEndPhrase(Cobol85Parser::AtEndPhraseContext *ctx) = 0;

  virtual void enterNotAtEndPhrase(Cobol85Parser::NotAtEndPhraseContext *ctx) = 0;
  virtual void exitNotAtEndPhrase(Cobol85Parser::NotAtEndPhraseContext *ctx) = 0;

  virtual void enterInvalidKeyPhrase(Cobol85Parser::InvalidKeyPhraseContext *ctx) = 0;
  virtual void exitInvalidKeyPhrase(Cobol85Parser::InvalidKeyPhraseContext *ctx) = 0;

  virtual void enterNotInvalidKeyPhrase(Cobol85Parser::NotInvalidKeyPhraseContext *ctx) = 0;
  virtual void exitNotInvalidKeyPhrase(Cobol85Parser::NotInvalidKeyPhraseContext *ctx) = 0;

  virtual void enterOnOverflowPhrase(Cobol85Parser::OnOverflowPhraseContext *ctx) = 0;
  virtual void exitOnOverflowPhrase(Cobol85Parser::OnOverflowPhraseContext *ctx) = 0;

  virtual void enterNotOnOverflowPhrase(Cobol85Parser::NotOnOverflowPhraseContext *ctx) = 0;
  virtual void exitNotOnOverflowPhrase(Cobol85Parser::NotOnOverflowPhraseContext *ctx) = 0;

  virtual void enterOnSizeErrorPhrase(Cobol85Parser::OnSizeErrorPhraseContext *ctx) = 0;
  virtual void exitOnSizeErrorPhrase(Cobol85Parser::OnSizeErrorPhraseContext *ctx) = 0;

  virtual void enterNotOnSizeErrorPhrase(Cobol85Parser::NotOnSizeErrorPhraseContext *ctx) = 0;
  virtual void exitNotOnSizeErrorPhrase(Cobol85Parser::NotOnSizeErrorPhraseContext *ctx) = 0;

  virtual void enterOnExceptionClause(Cobol85Parser::OnExceptionClauseContext *ctx) = 0;
  virtual void exitOnExceptionClause(Cobol85Parser::OnExceptionClauseContext *ctx) = 0;

  virtual void enterNotOnExceptionClause(Cobol85Parser::NotOnExceptionClauseContext *ctx) = 0;
  virtual void exitNotOnExceptionClause(Cobol85Parser::NotOnExceptionClauseContext *ctx) = 0;

  virtual void enterArithmeticExpression(Cobol85Parser::ArithmeticExpressionContext *ctx) = 0;
  virtual void exitArithmeticExpression(Cobol85Parser::ArithmeticExpressionContext *ctx) = 0;

  virtual void enterPlusMinus(Cobol85Parser::PlusMinusContext *ctx) = 0;
  virtual void exitPlusMinus(Cobol85Parser::PlusMinusContext *ctx) = 0;

  virtual void enterMultDivs(Cobol85Parser::MultDivsContext *ctx) = 0;
  virtual void exitMultDivs(Cobol85Parser::MultDivsContext *ctx) = 0;

  virtual void enterMultDiv(Cobol85Parser::MultDivContext *ctx) = 0;
  virtual void exitMultDiv(Cobol85Parser::MultDivContext *ctx) = 0;

  virtual void enterPowers(Cobol85Parser::PowersContext *ctx) = 0;
  virtual void exitPowers(Cobol85Parser::PowersContext *ctx) = 0;

  virtual void enterPower(Cobol85Parser::PowerContext *ctx) = 0;
  virtual void exitPower(Cobol85Parser::PowerContext *ctx) = 0;

  virtual void enterBasis(Cobol85Parser::BasisContext *ctx) = 0;
  virtual void exitBasis(Cobol85Parser::BasisContext *ctx) = 0;

  virtual void enterCondition(Cobol85Parser::ConditionContext *ctx) = 0;
  virtual void exitCondition(Cobol85Parser::ConditionContext *ctx) = 0;

  virtual void enterAndOrCondition(Cobol85Parser::AndOrConditionContext *ctx) = 0;
  virtual void exitAndOrCondition(Cobol85Parser::AndOrConditionContext *ctx) = 0;

  virtual void enterCombinableCondition(Cobol85Parser::CombinableConditionContext *ctx) = 0;
  virtual void exitCombinableCondition(Cobol85Parser::CombinableConditionContext *ctx) = 0;

  virtual void enterSimpleCondition(Cobol85Parser::SimpleConditionContext *ctx) = 0;
  virtual void exitSimpleCondition(Cobol85Parser::SimpleConditionContext *ctx) = 0;

  virtual void enterClassCondition(Cobol85Parser::ClassConditionContext *ctx) = 0;
  virtual void exitClassCondition(Cobol85Parser::ClassConditionContext *ctx) = 0;

  virtual void enterConditionNameReference(Cobol85Parser::ConditionNameReferenceContext *ctx) = 0;
  virtual void exitConditionNameReference(Cobol85Parser::ConditionNameReferenceContext *ctx) = 0;

  virtual void enterConditionNameSubscriptReference(Cobol85Parser::ConditionNameSubscriptReferenceContext *ctx) = 0;
  virtual void exitConditionNameSubscriptReference(Cobol85Parser::ConditionNameSubscriptReferenceContext *ctx) = 0;

  virtual void enterRelationCondition(Cobol85Parser::RelationConditionContext *ctx) = 0;
  virtual void exitRelationCondition(Cobol85Parser::RelationConditionContext *ctx) = 0;

  virtual void enterRelationSignCondition(Cobol85Parser::RelationSignConditionContext *ctx) = 0;
  virtual void exitRelationSignCondition(Cobol85Parser::RelationSignConditionContext *ctx) = 0;

  virtual void enterRelationArithmeticComparison(Cobol85Parser::RelationArithmeticComparisonContext *ctx) = 0;
  virtual void exitRelationArithmeticComparison(Cobol85Parser::RelationArithmeticComparisonContext *ctx) = 0;

  virtual void enterRelationCombinedComparison(Cobol85Parser::RelationCombinedComparisonContext *ctx) = 0;
  virtual void exitRelationCombinedComparison(Cobol85Parser::RelationCombinedComparisonContext *ctx) = 0;

  virtual void enterRelationCombinedCondition(Cobol85Parser::RelationCombinedConditionContext *ctx) = 0;
  virtual void exitRelationCombinedCondition(Cobol85Parser::RelationCombinedConditionContext *ctx) = 0;

  virtual void enterRelationalOperator(Cobol85Parser::RelationalOperatorContext *ctx) = 0;
  virtual void exitRelationalOperator(Cobol85Parser::RelationalOperatorContext *ctx) = 0;

  virtual void enterAbbreviation(Cobol85Parser::AbbreviationContext *ctx) = 0;
  virtual void exitAbbreviation(Cobol85Parser::AbbreviationContext *ctx) = 0;

  virtual void enterIdentifier(Cobol85Parser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(Cobol85Parser::IdentifierContext *ctx) = 0;

  virtual void enterTableCall(Cobol85Parser::TableCallContext *ctx) = 0;
  virtual void exitTableCall(Cobol85Parser::TableCallContext *ctx) = 0;

  virtual void enterFunctionCall(Cobol85Parser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(Cobol85Parser::FunctionCallContext *ctx) = 0;

  virtual void enterReferenceModifier(Cobol85Parser::ReferenceModifierContext *ctx) = 0;
  virtual void exitReferenceModifier(Cobol85Parser::ReferenceModifierContext *ctx) = 0;

  virtual void enterCharacterPosition(Cobol85Parser::CharacterPositionContext *ctx) = 0;
  virtual void exitCharacterPosition(Cobol85Parser::CharacterPositionContext *ctx) = 0;

  virtual void enterLength(Cobol85Parser::LengthContext *ctx) = 0;
  virtual void exitLength(Cobol85Parser::LengthContext *ctx) = 0;

  virtual void enterSubscript_(Cobol85Parser::Subscript_Context *ctx) = 0;
  virtual void exitSubscript_(Cobol85Parser::Subscript_Context *ctx) = 0;

  virtual void enterArgument(Cobol85Parser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(Cobol85Parser::ArgumentContext *ctx) = 0;

  virtual void enterQualifiedDataName(Cobol85Parser::QualifiedDataNameContext *ctx) = 0;
  virtual void exitQualifiedDataName(Cobol85Parser::QualifiedDataNameContext *ctx) = 0;

  virtual void enterQualifiedDataNameFormat1(Cobol85Parser::QualifiedDataNameFormat1Context *ctx) = 0;
  virtual void exitQualifiedDataNameFormat1(Cobol85Parser::QualifiedDataNameFormat1Context *ctx) = 0;

  virtual void enterQualifiedDataNameFormat2(Cobol85Parser::QualifiedDataNameFormat2Context *ctx) = 0;
  virtual void exitQualifiedDataNameFormat2(Cobol85Parser::QualifiedDataNameFormat2Context *ctx) = 0;

  virtual void enterQualifiedDataNameFormat3(Cobol85Parser::QualifiedDataNameFormat3Context *ctx) = 0;
  virtual void exitQualifiedDataNameFormat3(Cobol85Parser::QualifiedDataNameFormat3Context *ctx) = 0;

  virtual void enterQualifiedDataNameFormat4(Cobol85Parser::QualifiedDataNameFormat4Context *ctx) = 0;
  virtual void exitQualifiedDataNameFormat4(Cobol85Parser::QualifiedDataNameFormat4Context *ctx) = 0;

  virtual void enterQualifiedInData(Cobol85Parser::QualifiedInDataContext *ctx) = 0;
  virtual void exitQualifiedInData(Cobol85Parser::QualifiedInDataContext *ctx) = 0;

  virtual void enterInData(Cobol85Parser::InDataContext *ctx) = 0;
  virtual void exitInData(Cobol85Parser::InDataContext *ctx) = 0;

  virtual void enterInFile(Cobol85Parser::InFileContext *ctx) = 0;
  virtual void exitInFile(Cobol85Parser::InFileContext *ctx) = 0;

  virtual void enterInMnemonic(Cobol85Parser::InMnemonicContext *ctx) = 0;
  virtual void exitInMnemonic(Cobol85Parser::InMnemonicContext *ctx) = 0;

  virtual void enterInSection(Cobol85Parser::InSectionContext *ctx) = 0;
  virtual void exitInSection(Cobol85Parser::InSectionContext *ctx) = 0;

  virtual void enterInLibrary(Cobol85Parser::InLibraryContext *ctx) = 0;
  virtual void exitInLibrary(Cobol85Parser::InLibraryContext *ctx) = 0;

  virtual void enterInTable(Cobol85Parser::InTableContext *ctx) = 0;
  virtual void exitInTable(Cobol85Parser::InTableContext *ctx) = 0;

  virtual void enterAlphabetName(Cobol85Parser::AlphabetNameContext *ctx) = 0;
  virtual void exitAlphabetName(Cobol85Parser::AlphabetNameContext *ctx) = 0;

  virtual void enterAssignmentName(Cobol85Parser::AssignmentNameContext *ctx) = 0;
  virtual void exitAssignmentName(Cobol85Parser::AssignmentNameContext *ctx) = 0;

  virtual void enterBasisName(Cobol85Parser::BasisNameContext *ctx) = 0;
  virtual void exitBasisName(Cobol85Parser::BasisNameContext *ctx) = 0;

  virtual void enterCdName(Cobol85Parser::CdNameContext *ctx) = 0;
  virtual void exitCdName(Cobol85Parser::CdNameContext *ctx) = 0;

  virtual void enterClassName(Cobol85Parser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(Cobol85Parser::ClassNameContext *ctx) = 0;

  virtual void enterComputerName(Cobol85Parser::ComputerNameContext *ctx) = 0;
  virtual void exitComputerName(Cobol85Parser::ComputerNameContext *ctx) = 0;

  virtual void enterConditionName(Cobol85Parser::ConditionNameContext *ctx) = 0;
  virtual void exitConditionName(Cobol85Parser::ConditionNameContext *ctx) = 0;

  virtual void enterDataName(Cobol85Parser::DataNameContext *ctx) = 0;
  virtual void exitDataName(Cobol85Parser::DataNameContext *ctx) = 0;

  virtual void enterDataDescName(Cobol85Parser::DataDescNameContext *ctx) = 0;
  virtual void exitDataDescName(Cobol85Parser::DataDescNameContext *ctx) = 0;

  virtual void enterEnvironmentName(Cobol85Parser::EnvironmentNameContext *ctx) = 0;
  virtual void exitEnvironmentName(Cobol85Parser::EnvironmentNameContext *ctx) = 0;

  virtual void enterFileName(Cobol85Parser::FileNameContext *ctx) = 0;
  virtual void exitFileName(Cobol85Parser::FileNameContext *ctx) = 0;

  virtual void enterFunctionName(Cobol85Parser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(Cobol85Parser::FunctionNameContext *ctx) = 0;

  virtual void enterIndexName(Cobol85Parser::IndexNameContext *ctx) = 0;
  virtual void exitIndexName(Cobol85Parser::IndexNameContext *ctx) = 0;

  virtual void enterLanguageName(Cobol85Parser::LanguageNameContext *ctx) = 0;
  virtual void exitLanguageName(Cobol85Parser::LanguageNameContext *ctx) = 0;

  virtual void enterLibraryName(Cobol85Parser::LibraryNameContext *ctx) = 0;
  virtual void exitLibraryName(Cobol85Parser::LibraryNameContext *ctx) = 0;

  virtual void enterLocalName(Cobol85Parser::LocalNameContext *ctx) = 0;
  virtual void exitLocalName(Cobol85Parser::LocalNameContext *ctx) = 0;

  virtual void enterMnemonicName(Cobol85Parser::MnemonicNameContext *ctx) = 0;
  virtual void exitMnemonicName(Cobol85Parser::MnemonicNameContext *ctx) = 0;

  virtual void enterParagraphName(Cobol85Parser::ParagraphNameContext *ctx) = 0;
  virtual void exitParagraphName(Cobol85Parser::ParagraphNameContext *ctx) = 0;

  virtual void enterProcedureName(Cobol85Parser::ProcedureNameContext *ctx) = 0;
  virtual void exitProcedureName(Cobol85Parser::ProcedureNameContext *ctx) = 0;

  virtual void enterProgramName(Cobol85Parser::ProgramNameContext *ctx) = 0;
  virtual void exitProgramName(Cobol85Parser::ProgramNameContext *ctx) = 0;

  virtual void enterRecordName(Cobol85Parser::RecordNameContext *ctx) = 0;
  virtual void exitRecordName(Cobol85Parser::RecordNameContext *ctx) = 0;

  virtual void enterReportName(Cobol85Parser::ReportNameContext *ctx) = 0;
  virtual void exitReportName(Cobol85Parser::ReportNameContext *ctx) = 0;

  virtual void enterRoutineName(Cobol85Parser::RoutineNameContext *ctx) = 0;
  virtual void exitRoutineName(Cobol85Parser::RoutineNameContext *ctx) = 0;

  virtual void enterScreenName(Cobol85Parser::ScreenNameContext *ctx) = 0;
  virtual void exitScreenName(Cobol85Parser::ScreenNameContext *ctx) = 0;

  virtual void enterSectionName(Cobol85Parser::SectionNameContext *ctx) = 0;
  virtual void exitSectionName(Cobol85Parser::SectionNameContext *ctx) = 0;

  virtual void enterSystemName(Cobol85Parser::SystemNameContext *ctx) = 0;
  virtual void exitSystemName(Cobol85Parser::SystemNameContext *ctx) = 0;

  virtual void enterSymbolicCharacter(Cobol85Parser::SymbolicCharacterContext *ctx) = 0;
  virtual void exitSymbolicCharacter(Cobol85Parser::SymbolicCharacterContext *ctx) = 0;

  virtual void enterTextName(Cobol85Parser::TextNameContext *ctx) = 0;
  virtual void exitTextName(Cobol85Parser::TextNameContext *ctx) = 0;

  virtual void enterCobolWord(Cobol85Parser::CobolWordContext *ctx) = 0;
  virtual void exitCobolWord(Cobol85Parser::CobolWordContext *ctx) = 0;

  virtual void enterLiteral(Cobol85Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(Cobol85Parser::LiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(Cobol85Parser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(Cobol85Parser::BooleanLiteralContext *ctx) = 0;

  virtual void enterNumericLiteral(Cobol85Parser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(Cobol85Parser::NumericLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(Cobol85Parser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(Cobol85Parser::IntegerLiteralContext *ctx) = 0;

  virtual void enterCicsDfhRespLiteral(Cobol85Parser::CicsDfhRespLiteralContext *ctx) = 0;
  virtual void exitCicsDfhRespLiteral(Cobol85Parser::CicsDfhRespLiteralContext *ctx) = 0;

  virtual void enterCicsDfhValueLiteral(Cobol85Parser::CicsDfhValueLiteralContext *ctx) = 0;
  virtual void exitCicsDfhValueLiteral(Cobol85Parser::CicsDfhValueLiteralContext *ctx) = 0;

  virtual void enterFigurativeConstant(Cobol85Parser::FigurativeConstantContext *ctx) = 0;
  virtual void exitFigurativeConstant(Cobol85Parser::FigurativeConstantContext *ctx) = 0;

  virtual void enterSpecialRegister(Cobol85Parser::SpecialRegisterContext *ctx) = 0;
  virtual void exitSpecialRegister(Cobol85Parser::SpecialRegisterContext *ctx) = 0;

  virtual void enterCommentEntry(Cobol85Parser::CommentEntryContext *ctx) = 0;
  virtual void exitCommentEntry(Cobol85Parser::CommentEntryContext *ctx) = 0;


};

