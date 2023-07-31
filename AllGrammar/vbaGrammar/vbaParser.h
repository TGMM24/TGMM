
// Generated from vba.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  vbaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, ACCESS = 9, ADDRESSOF = 10, ALIAS = 11, AND = 12, ATTRIBUTE = 13, 
    APPACTIVATE = 14, APPEND = 15, AS = 16, BEGIN = 17, BEEP = 18, BINARY = 19, 
    BOOLEAN = 20, BYVAL = 21, BYREF = 22, BYTE = 23, CALL = 24, CASE = 25, 
    CHDIR = 26, CHDRIVE = 27, CLASS = 28, CLOSE = 29, COLLECTION = 30, CONST = 31, 
    DATABASE = 32, DATE = 33, DECLARE = 34, DEFBOOL = 35, DEFBYTE = 36, 
    DEFDATE = 37, DEFDBL = 38, DEFDEC = 39, DEFCUR = 40, DEFINT = 41, DEFLNG = 42, 
    DEFOBJ = 43, DEFSNG = 44, DEFSTR = 45, DEFVAR = 46, DELETESETTING = 47, 
    DIM = 48, DO = 49, DOUBLE = 50, EACH = 51, ELSE = 52, ELSEIF = 53, END_ENUM = 54, 
    END_FUNCTION = 55, END_IF = 56, END_PROPERTY = 57, END_SELECT = 58, 
    END_SUB = 59, END_TYPE = 60, END_WITH = 61, END = 62, ENUM = 63, EQV = 64, 
    ERASE = 65, ERROR = 66, EVENT = 67, EXIT_DO = 68, EXIT_FOR = 69, EXIT_FUNCTION = 70, 
    EXIT_PROPERTY = 71, EXIT_SUB = 72, FALSE = 73, FILECOPY = 74, FRIEND = 75, 
    FOR = 76, FUNCTION = 77, GET = 78, GLOBAL = 79, GOSUB = 80, GOTO = 81, 
    IF = 82, IMP = 83, IMPLEMENTS = 84, IN = 85, INPUT = 86, IS = 87, INTEGER = 88, 
    KILL = 89, LOAD = 90, LOCK = 91, LONG = 92, LOOP = 93, LEN = 94, LET = 95, 
    LIB = 96, LIKE = 97, LINE_INPUT = 98, LOCK_READ = 99, LOCK_WRITE = 100, 
    LOCK_READ_WRITE = 101, LSET = 102, MACRO_CONST = 103, MACRO_IF = 104, 
    MACRO_ELSEIF = 105, MACRO_ELSE = 106, MACRO_END_IF = 107, ME = 108, 
    MID = 109, MKDIR = 110, MOD = 111, NAME = 112, NEXT = 113, NEW = 114, 
    NOT = 115, NOTHING = 116, NULL_ = 117, ON = 118, ON_ERROR = 119, ON_LOCAL_ERROR = 120, 
    OPEN = 121, OPTIONAL = 122, OPTION_BASE = 123, OPTION_EXPLICIT = 124, 
    OPTION_COMPARE = 125, OPTION_PRIVATE_MODULE = 126, OR = 127, OUTPUT = 128, 
    PARAMARRAY = 129, PRESERVE = 130, PRINT = 131, PRIVATE = 132, PROPERTY_GET = 133, 
    PROPERTY_LET = 134, PROPERTY_SET = 135, PTRSAFE = 136, PUBLIC = 137, 
    PUT = 138, RANDOM = 139, RANDOMIZE = 140, RAISEEVENT = 141, READ = 142, 
    READ_WRITE = 143, REDIM = 144, REM = 145, RESET = 146, RESUME = 147, 
    RETURN = 148, RMDIR = 149, RSET = 150, SAVEPICTURE = 151, SAVESETTING = 152, 
    SEEK = 153, SELECT = 154, SENDKEYS = 155, SET = 156, SETATTR = 157, 
    SHARED = 158, SINGLE = 159, SPC = 160, STATIC = 161, STEP = 162, STOP = 163, 
    STRING = 164, SUB = 165, TAB = 166, TEXT = 167, THEN = 168, TIME = 169, 
    TO = 170, TRUE = 171, TYPE = 172, TYPEOF = 173, UNLOAD = 174, UNLOCK = 175, 
    UNTIL = 176, VARIANT = 177, VERSION = 178, WEND = 179, WHILE = 180, 
    WIDTH = 181, WITH = 182, WITHEVENTS = 183, WRITE = 184, XOR = 185, AMPERSAND = 186, 
    ASSIGN = 187, DIV = 188, EQ = 189, GEQ = 190, GT = 191, LEQ = 192, LPAREN = 193, 
    LT = 194, MINUS = 195, MINUS_EQ = 196, MULT = 197, NEQ = 198, PLUS = 199, 
    PLUS_EQ = 200, POW = 201, RPAREN = 202, L_SQUARE_BRACKET = 203, R_SQUARE_BRACKET = 204, 
    STRINGLITERAL = 205, OCTLITERAL = 206, HEXLITERAL = 207, SHORTLITERAL = 208, 
    INTEGERLITERAL = 209, DOUBLELITERAL = 210, DATELITERAL = 211, LINE_CONTINUATION = 212, 
    NEWLINE = 213, REMCOMMENT = 214, COMMENT = 215, SINGLEQUOTE = 216, COLON = 217, 
    UNDERSCORE = 218, WS = 219, IDENTIFIER = 220
  };

  enum {
    RuleStartRule = 0, RuleModule = 1, RuleModuleHeader = 2, RuleModuleConfig = 3, 
    RuleModuleConfigElement = 4, RuleModuleAttributes = 5, RuleModuleDeclarations = 6, 
    RuleModuleOption = 7, RuleModuleDeclarationsElement = 8, RuleMacroStmt = 9, 
    RuleModuleBody = 10, RuleModuleBodyElement = 11, RuleAttributeStmt = 12, 
    RuleBlock = 13, RuleBlockStmt = 14, RuleAppactivateStmt = 15, RuleBeepStmt = 16, 
    RuleChdirStmt = 17, RuleChdriveStmt = 18, RuleCloseStmt = 19, RuleConstStmt = 20, 
    RuleConstSubStmt = 21, RuleDateStmt = 22, RuleDeclareStmt = 23, RuleDeftypeStmt = 24, 
    RuleDeleteSettingStmt = 25, RuleDoLoopStmt = 26, RuleEndStmt = 27, RuleEnumerationStmt = 28, 
    RuleEnumerationStmt_Constant = 29, RuleEraseStmt = 30, RuleErrorStmt = 31, 
    RuleEventStmt = 32, RuleExitStmt = 33, RuleFilecopyStmt = 34, RuleForEachStmt = 35, 
    RuleForNextStmt = 36, RuleFunctionStmt = 37, RuleGetStmt = 38, RuleGoSubStmt = 39, 
    RuleGoToStmt = 40, RuleIfThenElseStmt = 41, RuleIfBlockStmt = 42, RuleIfConditionStmt = 43, 
    RuleIfElseIfBlockStmt = 44, RuleIfElseBlockStmt = 45, RuleImplementsStmt = 46, 
    RuleInputStmt = 47, RuleKillStmt = 48, RuleLetStmt = 49, RuleLineInputStmt = 50, 
    RuleLoadStmt = 51, RuleLockStmt = 52, RuleLsetStmt = 53, RuleMacroConstStmt = 54, 
    RuleMacroIfThenElseStmt = 55, RuleMacroIfBlockStmt = 56, RuleMacroElseIfBlockStmt = 57, 
    RuleMacroElseBlockStmt = 58, RuleMidStmt = 59, RuleMkdirStmt = 60, RuleNameStmt = 61, 
    RuleOnErrorStmt = 62, RuleOnGoToStmt = 63, RuleOnGoSubStmt = 64, RuleOpenStmt = 65, 
    RuleOutputList = 66, RuleOutputList_Expression = 67, RulePrintStmt = 68, 
    RulePropertyGetStmt = 69, RulePropertySetStmt = 70, RulePropertyLetStmt = 71, 
    RulePutStmt = 72, RuleRaiseEventStmt = 73, RuleRandomizeStmt = 74, RuleRedimStmt = 75, 
    RuleRedimSubStmt = 76, RuleResetStmt = 77, RuleResumeStmt = 78, RuleReturnStmt = 79, 
    RuleRmdirStmt = 80, RuleRsetStmt = 81, RuleSavepictureStmt = 82, RuleSaveSettingStmt = 83, 
    RuleSeekStmt = 84, RuleSelectCaseStmt = 85, RuleSC_Selection = 86, RuleSC_Case = 87, 
    RuleSC_Cond = 88, RuleSendkeysStmt = 89, RuleSetattrStmt = 90, RuleSetStmt = 91, 
    RuleStopStmt = 92, RuleSubStmt = 93, RuleTimeStmt = 94, RuleTypeStmt = 95, 
    RuleTypeStmt_Element = 96, RuleTypeOfStmt = 97, RuleUnloadStmt = 98, 
    RuleUnlockStmt = 99, RuleValueStmt = 100, RuleVariableStmt = 101, RuleVariableListStmt = 102, 
    RuleVariableSubStmt = 103, RuleWhileWendStmt = 104, RuleWidthStmt = 105, 
    RuleWithStmt = 106, RuleWriteStmt = 107, RuleFileNumber = 108, RuleExplicitCallStmt = 109, 
    RuleECS_ProcedureCall = 110, RuleECS_MemberProcedureCall = 111, RuleImplicitCallStmt_InBlock = 112, 
    RuleICS_B_MemberProcedureCall = 113, RuleICS_B_ProcedureCall = 114, 
    RuleImplicitCallStmt_InStmt = 115, RuleICS_S_VariableOrProcedureCall = 116, 
    RuleICS_S_ProcedureOrArrayCall = 117, RuleICS_S_MembersCall = 118, RuleICS_S_MemberCall = 119, 
    RuleICS_S_DictionaryCall = 120, RuleArgsCall = 121, RuleArgCall = 122, 
    RuleDictionaryCallStmt = 123, RuleArgList = 124, RuleArg = 125, RuleArgDefaultValue = 126, 
    RuleSubscripts = 127, RuleSubscript_ = 128, RuleAmbiguousIdentifier = 129, 
    RuleAsTypeClause = 130, RuleBaseType = 131, RuleCertainIdentifier = 132, 
    RuleComparisonOperator = 133, RuleComplexType = 134, RuleFieldLength = 135, 
    RuleLetterrange = 136, RuleLineLabel = 137, RuleLiteral = 138, RuleType_ = 139, 
    RuleTypeHint = 140, RuleVisibility = 141, RuleAmbiguousKeyword = 142, 
    RuleRemComment = 143, RuleComment = 144, RuleEndOfLine = 145, RuleEndOfStatement = 146
  };

  explicit vbaParser(antlr4::TokenStream *input);

  vbaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~vbaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartRuleContext;
  class ModuleContext;
  class ModuleHeaderContext;
  class ModuleConfigContext;
  class ModuleConfigElementContext;
  class ModuleAttributesContext;
  class ModuleDeclarationsContext;
  class ModuleOptionContext;
  class ModuleDeclarationsElementContext;
  class MacroStmtContext;
  class ModuleBodyContext;
  class ModuleBodyElementContext;
  class AttributeStmtContext;
  class BlockContext;
  class BlockStmtContext;
  class AppactivateStmtContext;
  class BeepStmtContext;
  class ChdirStmtContext;
  class ChdriveStmtContext;
  class CloseStmtContext;
  class ConstStmtContext;
  class ConstSubStmtContext;
  class DateStmtContext;
  class DeclareStmtContext;
  class DeftypeStmtContext;
  class DeleteSettingStmtContext;
  class DoLoopStmtContext;
  class EndStmtContext;
  class EnumerationStmtContext;
  class EnumerationStmt_ConstantContext;
  class EraseStmtContext;
  class ErrorStmtContext;
  class EventStmtContext;
  class ExitStmtContext;
  class FilecopyStmtContext;
  class ForEachStmtContext;
  class ForNextStmtContext;
  class FunctionStmtContext;
  class GetStmtContext;
  class GoSubStmtContext;
  class GoToStmtContext;
  class IfThenElseStmtContext;
  class IfBlockStmtContext;
  class IfConditionStmtContext;
  class IfElseIfBlockStmtContext;
  class IfElseBlockStmtContext;
  class ImplementsStmtContext;
  class InputStmtContext;
  class KillStmtContext;
  class LetStmtContext;
  class LineInputStmtContext;
  class LoadStmtContext;
  class LockStmtContext;
  class LsetStmtContext;
  class MacroConstStmtContext;
  class MacroIfThenElseStmtContext;
  class MacroIfBlockStmtContext;
  class MacroElseIfBlockStmtContext;
  class MacroElseBlockStmtContext;
  class MidStmtContext;
  class MkdirStmtContext;
  class NameStmtContext;
  class OnErrorStmtContext;
  class OnGoToStmtContext;
  class OnGoSubStmtContext;
  class OpenStmtContext;
  class OutputListContext;
  class OutputList_ExpressionContext;
  class PrintStmtContext;
  class PropertyGetStmtContext;
  class PropertySetStmtContext;
  class PropertyLetStmtContext;
  class PutStmtContext;
  class RaiseEventStmtContext;
  class RandomizeStmtContext;
  class RedimStmtContext;
  class RedimSubStmtContext;
  class ResetStmtContext;
  class ResumeStmtContext;
  class ReturnStmtContext;
  class RmdirStmtContext;
  class RsetStmtContext;
  class SavepictureStmtContext;
  class SaveSettingStmtContext;
  class SeekStmtContext;
  class SelectCaseStmtContext;
  class SC_SelectionContext;
  class SC_CaseContext;
  class SC_CondContext;
  class SendkeysStmtContext;
  class SetattrStmtContext;
  class SetStmtContext;
  class StopStmtContext;
  class SubStmtContext;
  class TimeStmtContext;
  class TypeStmtContext;
  class TypeStmt_ElementContext;
  class TypeOfStmtContext;
  class UnloadStmtContext;
  class UnlockStmtContext;
  class ValueStmtContext;
  class VariableStmtContext;
  class VariableListStmtContext;
  class VariableSubStmtContext;
  class WhileWendStmtContext;
  class WidthStmtContext;
  class WithStmtContext;
  class WriteStmtContext;
  class FileNumberContext;
  class ExplicitCallStmtContext;
  class ECS_ProcedureCallContext;
  class ECS_MemberProcedureCallContext;
  class ImplicitCallStmt_InBlockContext;
  class ICS_B_MemberProcedureCallContext;
  class ICS_B_ProcedureCallContext;
  class ImplicitCallStmt_InStmtContext;
  class ICS_S_VariableOrProcedureCallContext;
  class ICS_S_ProcedureOrArrayCallContext;
  class ICS_S_MembersCallContext;
  class ICS_S_MemberCallContext;
  class ICS_S_DictionaryCallContext;
  class ArgsCallContext;
  class ArgCallContext;
  class DictionaryCallStmtContext;
  class ArgListContext;
  class ArgContext;
  class ArgDefaultValueContext;
  class SubscriptsContext;
  class Subscript_Context;
  class AmbiguousIdentifierContext;
  class AsTypeClauseContext;
  class BaseTypeContext;
  class CertainIdentifierContext;
  class ComparisonOperatorContext;
  class ComplexTypeContext;
  class FieldLengthContext;
  class LetterrangeContext;
  class LineLabelContext;
  class LiteralContext;
  class Type_Context;
  class TypeHintContext;
  class VisibilityContext;
  class AmbiguousKeywordContext;
  class RemCommentContext;
  class CommentContext;
  class EndOfLineContext;
  class EndOfStatementContext; 

  class  StartRuleContext : public antlr4::ParserRuleContext {
  public:
    StartRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleContext *module();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartRuleContext* startRule();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);
    ModuleHeaderContext *moduleHeader();
    ModuleConfigContext *moduleConfig();
    ModuleAttributesContext *moduleAttributes();
    ModuleDeclarationsContext *moduleDeclarations();
    ModuleBodyContext *moduleBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  ModuleHeaderContext : public antlr4::ParserRuleContext {
  public:
    ModuleHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERSION();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *DOUBLELITERAL();
    antlr4::tree::TerminalNode *CLASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleHeaderContext* moduleHeader();

  class  ModuleConfigContext : public antlr4::ParserRuleContext {
  public:
    ModuleConfigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);
    std::vector<ModuleConfigElementContext *> moduleConfigElement();
    ModuleConfigElementContext* moduleConfigElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleConfigContext* moduleConfig();

  class  ModuleConfigElementContext : public antlr4::ParserRuleContext {
  public:
    ModuleConfigElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *EQ();
    LiteralContext *literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleConfigElementContext* moduleConfigElement();

  class  ModuleAttributesContext : public antlr4::ParserRuleContext {
  public:
    ModuleAttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeStmtContext *> attributeStmt();
    AttributeStmtContext* attributeStmt(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleAttributesContext* moduleAttributes();

  class  ModuleDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleDeclarationsElementContext *> moduleDeclarationsElement();
    ModuleDeclarationsElementContext* moduleDeclarationsElement(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleDeclarationsContext* moduleDeclarations();

  class  ModuleOptionContext : public antlr4::ParserRuleContext {
  public:
    ModuleOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ModuleOptionContext() = default;
    void copyFrom(ModuleOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OptionExplicitStmtContext : public ModuleOptionContext {
  public:
    OptionExplicitStmtContext(ModuleOptionContext *ctx);

    antlr4::tree::TerminalNode *OPTION_EXPLICIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OptionBaseStmtContext : public ModuleOptionContext {
  public:
    OptionBaseStmtContext(ModuleOptionContext *ctx);

    antlr4::tree::TerminalNode *OPTION_BASE();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *SHORTLITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OptionPrivateModuleStmtContext : public ModuleOptionContext {
  public:
    OptionPrivateModuleStmtContext(ModuleOptionContext *ctx);

    antlr4::tree::TerminalNode *OPTION_PRIVATE_MODULE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OptionCompareStmtContext : public ModuleOptionContext {
  public:
    OptionCompareStmtContext(ModuleOptionContext *ctx);

    antlr4::tree::TerminalNode *OPTION_COMPARE();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *DATABASE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ModuleOptionContext* moduleOption();

  class  ModuleDeclarationsElementContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationsElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    DeclareStmtContext *declareStmt();
    EnumerationStmtContext *enumerationStmt();
    EventStmtContext *eventStmt();
    ConstStmtContext *constStmt();
    ImplementsStmtContext *implementsStmt();
    VariableStmtContext *variableStmt();
    ModuleOptionContext *moduleOption();
    TypeStmtContext *typeStmt();
    MacroStmtContext *macroStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleDeclarationsElementContext* moduleDeclarationsElement();

  class  MacroStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroConstStmtContext *macroConstStmt();
    MacroIfThenElseStmtContext *macroIfThenElseStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroStmtContext* macroStmt();

  class  ModuleBodyContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleBodyElementContext *> moduleBodyElement();
    ModuleBodyElementContext* moduleBodyElement(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleBodyContext* moduleBody();

  class  ModuleBodyElementContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionStmtContext *functionStmt();
    PropertyGetStmtContext *propertyGetStmt();
    PropertySetStmtContext *propertySetStmt();
    PropertyLetStmtContext *propertyLetStmt();
    SubStmtContext *subStmt();
    MacroStmtContext *macroStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleBodyElementContext* moduleBodyElement();

  class  AttributeStmtContext : public antlr4::ParserRuleContext {
  public:
    AttributeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *EQ();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeStmtContext* attributeStmt();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockStmtContext *> blockStmt();
    BlockStmtContext* blockStmt(size_t i);
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  BlockStmtContext : public antlr4::ParserRuleContext {
  public:
    BlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LineLabelContext *lineLabel();
    AppactivateStmtContext *appactivateStmt();
    AttributeStmtContext *attributeStmt();
    BeepStmtContext *beepStmt();
    ChdirStmtContext *chdirStmt();
    ChdriveStmtContext *chdriveStmt();
    CloseStmtContext *closeStmt();
    ConstStmtContext *constStmt();
    DateStmtContext *dateStmt();
    DeleteSettingStmtContext *deleteSettingStmt();
    DeftypeStmtContext *deftypeStmt();
    DoLoopStmtContext *doLoopStmt();
    EndStmtContext *endStmt();
    EraseStmtContext *eraseStmt();
    ErrorStmtContext *errorStmt();
    ExitStmtContext *exitStmt();
    ExplicitCallStmtContext *explicitCallStmt();
    FilecopyStmtContext *filecopyStmt();
    ForEachStmtContext *forEachStmt();
    ForNextStmtContext *forNextStmt();
    GetStmtContext *getStmt();
    GoSubStmtContext *goSubStmt();
    GoToStmtContext *goToStmt();
    IfThenElseStmtContext *ifThenElseStmt();
    ImplementsStmtContext *implementsStmt();
    InputStmtContext *inputStmt();
    KillStmtContext *killStmt();
    LetStmtContext *letStmt();
    LineInputStmtContext *lineInputStmt();
    LoadStmtContext *loadStmt();
    LockStmtContext *lockStmt();
    LsetStmtContext *lsetStmt();
    MacroStmtContext *macroStmt();
    MidStmtContext *midStmt();
    MkdirStmtContext *mkdirStmt();
    NameStmtContext *nameStmt();
    OnErrorStmtContext *onErrorStmt();
    OnGoToStmtContext *onGoToStmt();
    OnGoSubStmtContext *onGoSubStmt();
    OpenStmtContext *openStmt();
    PrintStmtContext *printStmt();
    PutStmtContext *putStmt();
    RaiseEventStmtContext *raiseEventStmt();
    RandomizeStmtContext *randomizeStmt();
    RedimStmtContext *redimStmt();
    ResetStmtContext *resetStmt();
    ResumeStmtContext *resumeStmt();
    ReturnStmtContext *returnStmt();
    RmdirStmtContext *rmdirStmt();
    RsetStmtContext *rsetStmt();
    SavepictureStmtContext *savepictureStmt();
    SaveSettingStmtContext *saveSettingStmt();
    SeekStmtContext *seekStmt();
    SelectCaseStmtContext *selectCaseStmt();
    SendkeysStmtContext *sendkeysStmt();
    SetattrStmtContext *setattrStmt();
    SetStmtContext *setStmt();
    StopStmtContext *stopStmt();
    TimeStmtContext *timeStmt();
    UnloadStmtContext *unloadStmt();
    UnlockStmtContext *unlockStmt();
    VariableStmtContext *variableStmt();
    WhileWendStmtContext *whileWendStmt();
    WidthStmtContext *widthStmt();
    WithStmtContext *withStmt();
    WriteStmtContext *writeStmt();
    ImplicitCallStmt_InBlockContext *implicitCallStmt_InBlock();
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockStmtContext* blockStmt();

  class  AppactivateStmtContext : public antlr4::ParserRuleContext {
  public:
    AppactivateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *APPACTIVATE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AppactivateStmtContext* appactivateStmt();

  class  BeepStmtContext : public antlr4::ParserRuleContext {
  public:
    BeepStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEEP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BeepStmtContext* beepStmt();

  class  ChdirStmtContext : public antlr4::ParserRuleContext {
  public:
    ChdirStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHDIR();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChdirStmtContext* chdirStmt();

  class  ChdriveStmtContext : public antlr4::ParserRuleContext {
  public:
    ChdriveStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHDRIVE();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChdriveStmtContext* chdriveStmt();

  class  CloseStmtContext : public antlr4::ParserRuleContext {
  public:
    CloseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<FileNumberContext *> fileNumber();
    FileNumberContext* fileNumber(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CloseStmtContext* closeStmt();

  class  ConstStmtContext : public antlr4::ParserRuleContext {
  public:
    ConstStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ConstSubStmtContext *> constSubStmt();
    ConstSubStmtContext* constSubStmt(size_t i);
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstStmtContext* constStmt();

  class  ConstSubStmtContext : public antlr4::ParserRuleContext {
  public:
    ConstSubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AsTypeClauseContext *asTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstSubStmtContext* constSubStmt();

  class  DateStmtContext : public antlr4::ParserRuleContext {
  public:
    DateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DateStmtContext* dateStmt();

  class  DeclareStmtContext : public antlr4::ParserRuleContext {
  public:
    DeclareStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *LIB();
    std::vector<antlr4::tree::TerminalNode *> STRINGLITERAL();
    antlr4::tree::TerminalNode* STRINGLITERAL(size_t i);
    antlr4::tree::TerminalNode *SUB();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *PTRSAFE();
    std::vector<TypeHintContext *> typeHint();
    TypeHintContext* typeHint(size_t i);
    antlr4::tree::TerminalNode *ALIAS();
    ArgListContext *argList();
    AsTypeClauseContext *asTypeClause();
    antlr4::tree::TerminalNode *FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareStmtContext* declareStmt();

  class  DeftypeStmtContext : public antlr4::ParserRuleContext {
  public:
    DeftypeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<LetterrangeContext *> letterrange();
    LetterrangeContext* letterrange(size_t i);
    antlr4::tree::TerminalNode *DEFBOOL();
    antlr4::tree::TerminalNode *DEFBYTE();
    antlr4::tree::TerminalNode *DEFINT();
    antlr4::tree::TerminalNode *DEFLNG();
    antlr4::tree::TerminalNode *DEFCUR();
    antlr4::tree::TerminalNode *DEFSNG();
    antlr4::tree::TerminalNode *DEFDBL();
    antlr4::tree::TerminalNode *DEFDEC();
    antlr4::tree::TerminalNode *DEFDATE();
    antlr4::tree::TerminalNode *DEFSTR();
    antlr4::tree::TerminalNode *DEFOBJ();
    antlr4::tree::TerminalNode *DEFVAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeftypeStmtContext* deftypeStmt();

  class  DeleteSettingStmtContext : public antlr4::ParserRuleContext {
  public:
    DeleteSettingStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETESETTING();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteSettingStmtContext* deleteSettingStmt();

  class  DoLoopStmtContext : public antlr4::ParserRuleContext {
  public:
    DoLoopStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *LOOP();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *UNTIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoLoopStmtContext* doLoopStmt();

  class  EndStmtContext : public antlr4::ParserRuleContext {
  public:
    EndStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndStmtContext* endStmt();

  class  EnumerationStmtContext : public antlr4::ParserRuleContext {
  public:
    EnumerationStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_ENUM();
    VisibilityContext *visibility();
    std::vector<EnumerationStmt_ConstantContext *> enumerationStmt_Constant();
    EnumerationStmt_ConstantContext* enumerationStmt_Constant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumerationStmtContext* enumerationStmt();

  class  EnumerationStmt_ConstantContext : public antlr4::ParserRuleContext {
  public:
    EnumerationStmt_ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumerationStmt_ConstantContext* enumerationStmt_Constant();

  class  EraseStmtContext : public antlr4::ParserRuleContext {
  public:
    EraseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERASE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EraseStmtContext* eraseStmt();

  class  ErrorStmtContext : public antlr4::ParserRuleContext {
  public:
    ErrorStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ErrorStmtContext* errorStmt();

  class  EventStmtContext : public antlr4::ParserRuleContext {
  public:
    EventStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    ArgListContext *argList();
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EventStmtContext* eventStmt();

  class  ExitStmtContext : public antlr4::ParserRuleContext {
  public:
    ExitStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT_DO();
    antlr4::tree::TerminalNode *EXIT_FOR();
    antlr4::tree::TerminalNode *EXIT_FUNCTION();
    antlr4::tree::TerminalNode *EXIT_PROPERTY();
    antlr4::tree::TerminalNode *EXIT_SUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExitStmtContext* exitStmt();

  class  FilecopyStmtContext : public antlr4::ParserRuleContext {
  public:
    FilecopyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILECOPY();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilecopyStmtContext* filecopyStmt();

  class  ForEachStmtContext : public antlr4::ParserRuleContext {
  public:
    ForEachStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *EACH();
    std::vector<AmbiguousIdentifierContext *> ambiguousIdentifier();
    AmbiguousIdentifierContext* ambiguousIdentifier(size_t i);
    antlr4::tree::TerminalNode *IN();
    ValueStmtContext *valueStmt();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *NEXT();
    TypeHintContext *typeHint();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForEachStmtContext* forEachStmt();

  class  ForNextStmtContext : public antlr4::ParserRuleContext {
  public:
    ForNextStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<AmbiguousIdentifierContext *> ambiguousIdentifier();
    AmbiguousIdentifierContext* ambiguousIdentifier(size_t i);
    antlr4::tree::TerminalNode *EQ();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *TO();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *NEXT();
    TypeHintContext *typeHint();
    AsTypeClauseContext *asTypeClause();
    antlr4::tree::TerminalNode *STEP();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForNextStmtContext* forNextStmt();

  class  FunctionStmtContext : public antlr4::ParserRuleContext {
  public:
    FunctionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_FUNCTION();
    VisibilityContext *visibility();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *STATIC();
    TypeHintContext *typeHint();
    ArgListContext *argList();
    AsTypeClauseContext *asTypeClause();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionStmtContext* functionStmt();

  class  GetStmtContext : public antlr4::ParserRuleContext {
  public:
    GetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetStmtContext* getStmt();

  class  GoSubStmtContext : public antlr4::ParserRuleContext {
  public:
    GoSubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOSUB();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GoSubStmtContext* goSubStmt();

  class  GoToStmtContext : public antlr4::ParserRuleContext {
  public:
    GoToStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GoToStmtContext* goToStmt();

  class  IfThenElseStmtContext : public antlr4::ParserRuleContext {
  public:
    IfThenElseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfThenElseStmtContext() = default;
    void copyFrom(IfThenElseStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlockIfThenElseContext : public IfThenElseStmtContext {
  public:
    BlockIfThenElseContext(IfThenElseStmtContext *ctx);

    IfBlockStmtContext *ifBlockStmt();
    antlr4::tree::TerminalNode *END_IF();
    std::vector<IfElseIfBlockStmtContext *> ifElseIfBlockStmt();
    IfElseIfBlockStmtContext* ifElseIfBlockStmt(size_t i);
    IfElseBlockStmtContext *ifElseBlockStmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InlineIfThenElseContext : public IfThenElseStmtContext {
  public:
    InlineIfThenElseContext(IfThenElseStmtContext *ctx);

    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    IfConditionStmtContext *ifConditionStmt();
    antlr4::tree::TerminalNode *THEN();
    std::vector<BlockStmtContext *> blockStmt();
    BlockStmtContext* blockStmt(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  IfThenElseStmtContext* ifThenElseStmt();

  class  IfBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    IfBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    IfConditionStmtContext *ifConditionStmt();
    antlr4::tree::TerminalNode *THEN();
    EndOfStatementContext *endOfStatement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfBlockStmtContext* ifBlockStmt();

  class  IfConditionStmtContext : public antlr4::ParserRuleContext {
  public:
    IfConditionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfConditionStmtContext* ifConditionStmt();

  class  IfElseIfBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    IfElseIfBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    IfConditionStmtContext *ifConditionStmt();
    antlr4::tree::TerminalNode *THEN();
    EndOfStatementContext *endOfStatement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfElseIfBlockStmtContext* ifElseIfBlockStmt();

  class  IfElseBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    IfElseBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    EndOfStatementContext *endOfStatement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfElseBlockStmtContext* ifElseBlockStmt();

  class  ImplementsStmtContext : public antlr4::ParserRuleContext {
  public:
    ImplementsStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTS();
    antlr4::tree::TerminalNode *WS();
    AmbiguousIdentifierContext *ambiguousIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplementsStmtContext* implementsStmt();

  class  InputStmtContext : public antlr4::ParserRuleContext {
  public:
    InputStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputStmtContext* inputStmt();

  class  KillStmtContext : public antlr4::ParserRuleContext {
  public:
    KillStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KillStmtContext* killStmt();

  class  LetStmtContext : public antlr4::ParserRuleContext {
  public:
    LetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *PLUS_EQ();
    antlr4::tree::TerminalNode *MINUS_EQ();
    antlr4::tree::TerminalNode *LET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LetStmtContext* letStmt();

  class  LineInputStmtContext : public antlr4::ParserRuleContext {
  public:
    LineInputStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_INPUT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineInputStmtContext* lineInputStmt();

  class  LoadStmtContext : public antlr4::ParserRuleContext {
  public:
    LoadStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadStmtContext* loadStmt();

  class  LockStmtContext : public antlr4::ParserRuleContext {
  public:
    LockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LockStmtContext* lockStmt();

  class  LsetStmtContext : public antlr4::ParserRuleContext {
  public:
    LsetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LsetStmtContext* lsetStmt();

  class  MacroConstStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroConstStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_CONST();
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroConstStmtContext* macroConstStmt();

  class  MacroIfThenElseStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroIfThenElseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroIfBlockStmtContext *macroIfBlockStmt();
    antlr4::tree::TerminalNode *MACRO_END_IF();
    std::vector<MacroElseIfBlockStmtContext *> macroElseIfBlockStmt();
    MacroElseIfBlockStmtContext* macroElseIfBlockStmt(size_t i);
    MacroElseBlockStmtContext *macroElseBlockStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroIfThenElseStmtContext* macroIfThenElseStmt();

  class  MacroIfBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroIfBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_IF();
    IfConditionStmtContext *ifConditionStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *THEN();
    EndOfStatementContext *endOfStatement();
    std::vector<ModuleDeclarationsContext *> moduleDeclarations();
    ModuleDeclarationsContext* moduleDeclarations(size_t i);
    std::vector<ModuleBodyContext *> moduleBody();
    ModuleBodyContext* moduleBody(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroIfBlockStmtContext* macroIfBlockStmt();

  class  MacroElseIfBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroElseIfBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ELSEIF();
    IfConditionStmtContext *ifConditionStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *THEN();
    EndOfStatementContext *endOfStatement();
    std::vector<ModuleDeclarationsContext *> moduleDeclarations();
    ModuleDeclarationsContext* moduleDeclarations(size_t i);
    std::vector<ModuleBodyContext *> moduleBody();
    ModuleBodyContext* moduleBody(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroElseIfBlockStmtContext* macroElseIfBlockStmt();

  class  MacroElseBlockStmtContext : public antlr4::ParserRuleContext {
  public:
    MacroElseBlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MACRO_ELSE();
    EndOfStatementContext *endOfStatement();
    std::vector<ModuleDeclarationsContext *> moduleDeclarations();
    ModuleDeclarationsContext* moduleDeclarations(size_t i);
    std::vector<ModuleBodyContext *> moduleBody();
    ModuleBodyContext* moduleBody(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroElseBlockStmtContext* macroElseBlockStmt();

  class  MidStmtContext : public antlr4::ParserRuleContext {
  public:
    MidStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *LPAREN();
    ArgsCallContext *argsCall();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MidStmtContext* midStmt();

  class  MkdirStmtContext : public antlr4::ParserRuleContext {
  public:
    MkdirStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MKDIR();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MkdirStmtContext* mkdirStmt();

  class  NameStmtContext : public antlr4::ParserRuleContext {
  public:
    NameStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameStmtContext* nameStmt();

  class  OnErrorStmtContext : public antlr4::ParserRuleContext {
  public:
    OnErrorStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *ON_ERROR();
    antlr4::tree::TerminalNode *ON_LOCAL_ERROR();
    antlr4::tree::TerminalNode *GOTO();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *NEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnErrorStmtContext* onErrorStmt();

  class  OnGoToStmtContext : public antlr4::ParserRuleContext {
  public:
    OnGoToStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *GOTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnGoToStmtContext* onGoToStmt();

  class  OnGoSubStmtContext : public antlr4::ParserRuleContext {
  public:
    OnGoSubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *GOSUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnGoSubStmtContext* onGoSubStmt();

  class  OpenStmtContext : public antlr4::ParserRuleContext {
  public:
    OpenStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *AS();
    FileNumberContext *fileNumber();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *READ_WRITE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *LOCK_READ();
    antlr4::tree::TerminalNode *LOCK_WRITE();
    antlr4::tree::TerminalNode *LOCK_READ_WRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpenStmtContext* openStmt();

  class  OutputListContext : public antlr4::ParserRuleContext {
  public:
    OutputListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OutputList_ExpressionContext *> outputList_Expression();
    OutputList_ExpressionContext* outputList_Expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputListContext* outputList();

  class  OutputList_ExpressionContext : public antlr4::ParserRuleContext {
  public:
    OutputList_ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *SPC();
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *LPAREN();
    ArgsCallContext *argsCall();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputList_ExpressionContext* outputList_Expression();

  class  PrintStmtContext : public antlr4::ParserRuleContext {
  public:
    PrintStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    OutputListContext *outputList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintStmtContext* printStmt();

  class  PropertyGetStmtContext : public antlr4::ParserRuleContext {
  public:
    PropertyGetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY_GET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_PROPERTY();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *STATIC();
    TypeHintContext *typeHint();
    ArgListContext *argList();
    AsTypeClauseContext *asTypeClause();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyGetStmtContext* propertyGetStmt();

  class  PropertySetStmtContext : public antlr4::ParserRuleContext {
  public:
    PropertySetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY_SET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_PROPERTY();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *STATIC();
    ArgListContext *argList();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertySetStmtContext* propertySetStmt();

  class  PropertyLetStmtContext : public antlr4::ParserRuleContext {
  public:
    PropertyLetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY_LET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_PROPERTY();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *STATIC();
    ArgListContext *argList();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyLetStmtContext* propertyLetStmt();

  class  PutStmtContext : public antlr4::ParserRuleContext {
  public:
    PutStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PutStmtContext* putStmt();

  class  RaiseEventStmtContext : public antlr4::ParserRuleContext {
  public:
    RaiseEventStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISEEVENT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ArgsCallContext *argsCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RaiseEventStmtContext* raiseEventStmt();

  class  RandomizeStmtContext : public antlr4::ParserRuleContext {
  public:
    RandomizeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOMIZE();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RandomizeStmtContext* randomizeStmt();

  class  RedimStmtContext : public antlr4::ParserRuleContext {
  public:
    RedimStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REDIM();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<RedimSubStmtContext *> redimSubStmt();
    RedimSubStmtContext* redimSubStmt(size_t i);
    antlr4::tree::TerminalNode *PRESERVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RedimStmtContext* redimStmt();

  class  RedimSubStmtContext : public antlr4::ParserRuleContext {
  public:
    RedimSubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *LPAREN();
    SubscriptsContext *subscripts();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AsTypeClauseContext *asTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RedimSubStmtContext* redimSubStmt();

  class  ResetStmtContext : public antlr4::ParserRuleContext {
  public:
    ResetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetStmtContext* resetStmt();

  class  ResumeStmtContext : public antlr4::ParserRuleContext {
  public:
    ResumeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *NEXT();
    AmbiguousIdentifierContext *ambiguousIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResumeStmtContext* resumeStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  RmdirStmtContext : public antlr4::ParserRuleContext {
  public:
    RmdirStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RMDIR();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RmdirStmtContext* rmdirStmt();

  class  RsetStmtContext : public antlr4::ParserRuleContext {
  public:
    RsetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RSET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RsetStmtContext* rsetStmt();

  class  SavepictureStmtContext : public antlr4::ParserRuleContext {
  public:
    SavepictureStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPICTURE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SavepictureStmtContext* savepictureStmt();

  class  SaveSettingStmtContext : public antlr4::ParserRuleContext {
  public:
    SaveSettingStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVESETTING();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SaveSettingStmtContext* saveSettingStmt();

  class  SeekStmtContext : public antlr4::ParserRuleContext {
  public:
    SeekStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEEK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeekStmtContext* seekStmt();

  class  SelectCaseStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectCaseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *CASE();
    ValueStmtContext *valueStmt();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_SELECT();
    std::vector<SC_CaseContext *> sC_Case();
    SC_CaseContext* sC_Case(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectCaseStmtContext* selectCaseStmt();

  class  SC_SelectionContext : public antlr4::ParserRuleContext {
  public:
    SC_SelectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SC_SelectionContext() = default;
    void copyFrom(SC_SelectionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CaseCondValueContext : public SC_SelectionContext {
  public:
    CaseCondValueContext(SC_SelectionContext *ctx);

    ValueStmtContext *valueStmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CaseCondToContext : public SC_SelectionContext {
  public:
    CaseCondToContext(SC_SelectionContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *TO();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CaseCondIsContext : public SC_SelectionContext {
  public:
    CaseCondIsContext(SC_SelectionContext *ctx);

    antlr4::tree::TerminalNode *IS();
    ComparisonOperatorContext *comparisonOperator();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SC_SelectionContext* sC_Selection();

  class  SC_CaseContext : public antlr4::ParserRuleContext {
  public:
    SC_CaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *WS();
    SC_CondContext *sC_Cond();
    EndOfStatementContext *endOfStatement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SC_CaseContext* sC_Case();

  class  SC_CondContext : public antlr4::ParserRuleContext {
  public:
    SC_CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SC_CondContext() = default;
    void copyFrom(SC_CondContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CaseCondSelectionContext : public SC_CondContext {
  public:
    CaseCondSelectionContext(SC_CondContext *ctx);

    std::vector<SC_SelectionContext *> sC_Selection();
    SC_SelectionContext* sC_Selection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CaseCondElseContext : public SC_CondContext {
  public:
    CaseCondElseContext(SC_CondContext *ctx);

    antlr4::tree::TerminalNode *ELSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SC_CondContext* sC_Cond();

  class  SendkeysStmtContext : public antlr4::ParserRuleContext {
  public:
    SendkeysStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SENDKEYS();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SendkeysStmtContext* sendkeysStmt();

  class  SetattrStmtContext : public antlr4::ParserRuleContext {
  public:
    SetattrStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETATTR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetattrStmtContext* setattrStmt();

  class  SetStmtContext : public antlr4::ParserRuleContext {
  public:
    SetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetStmtContext* setStmt();

  class  StopStmtContext : public antlr4::ParserRuleContext {
  public:
    StopStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StopStmtContext* stopStmt();

  class  SubStmtContext : public antlr4::ParserRuleContext {
  public:
    SubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_SUB();
    VisibilityContext *visibility();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *STATIC();
    ArgListContext *argList();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubStmtContext* subStmt();

  class  TimeStmtContext : public antlr4::ParserRuleContext {
  public:
    TimeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TimeStmtContext* timeStmt();

  class  TypeStmtContext : public antlr4::ParserRuleContext {
  public:
    TypeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_TYPE();
    VisibilityContext *visibility();
    std::vector<TypeStmt_ElementContext *> typeStmt_Element();
    TypeStmt_ElementContext* typeStmt_Element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeStmtContext* typeStmt();

  class  TypeStmt_ElementContext : public antlr4::ParserRuleContext {
  public:
    TypeStmt_ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AsTypeClauseContext *asTypeClause();
    SubscriptsContext *subscripts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeStmt_ElementContext* typeStmt_Element();

  class  TypeOfStmtContext : public antlr4::ParserRuleContext {
  public:
    TypeOfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEOF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *IS();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeOfStmtContext* typeOfStmt();

  class  UnloadStmtContext : public antlr4::ParserRuleContext {
  public:
    UnloadStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOAD();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnloadStmtContext* unloadStmt();

  class  UnlockStmtContext : public antlr4::ParserRuleContext {
  public:
    UnlockStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnlockStmtContext* unlockStmt();

  class  ValueStmtContext : public antlr4::ParserRuleContext {
  public:
    ValueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueStmtContext() = default;
    void copyFrom(ValueStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VsAssignContext : public ValueStmtContext {
  public:
    VsAssignContext(ValueStmtContext *ctx);

    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    antlr4::tree::TerminalNode *ASSIGN();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsPlusContext : public ValueStmtContext {
  public:
    VsPlusContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsNotContext : public ValueStmtContext {
  public:
    VsNotContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsStructContext : public ValueStmtContext {
  public:
    VsStructContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsTypeOfContext : public ValueStmtContext {
  public:
    VsTypeOfContext(ValueStmtContext *ctx);

    TypeOfStmtContext *typeOfStmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsICSContext : public ValueStmtContext {
  public:
    VsICSContext(ValueStmtContext *ctx);

    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsRelationalContext : public ValueStmtContext {
  public:
    VsRelationalContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *EQ();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsAddMinusContext : public ValueStmtContext {
  public:
    VsAddMinusContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsXorContext : public ValueStmtContext {
  public:
    VsXorContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *XOR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsDivMultContext : public ValueStmtContext {
  public:
    VsDivMultContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MULT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsAndContext : public ValueStmtContext {
  public:
    VsAndContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *AND();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsPowContext : public ValueStmtContext {
  public:
    VsPowContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *POW();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsModContext : public ValueStmtContext {
  public:
    VsModContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *MOD();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsAmpContext : public ValueStmtContext {
  public:
    VsAmpContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *AMPERSAND();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsAddressOfContext : public ValueStmtContext {
  public:
    VsAddressOfContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *ADDRESSOF();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsNewContext : public ValueStmtContext {
  public:
    VsNewContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *NEW();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsOrContext : public ValueStmtContext {
  public:
    VsOrContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsLiteralContext : public ValueStmtContext {
  public:
    VsLiteralContext(ValueStmtContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsEqvContext : public ValueStmtContext {
  public:
    VsEqvContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *EQV();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsNegationContext : public ValueStmtContext {
  public:
    VsNegationContext(ValueStmtContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsImpContext : public ValueStmtContext {
  public:
    VsImpContext(ValueStmtContext *ctx);

    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    antlr4::tree::TerminalNode *IMP();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VsMidContext : public ValueStmtContext {
  public:
    VsMidContext(ValueStmtContext *ctx);

    MidStmtContext *midStmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ValueStmtContext* valueStmt();
  ValueStmtContext* valueStmt(int precedence);
  class  VariableStmtContext : public antlr4::ParserRuleContext {
  public:
    VariableStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    VariableListStmtContext *variableListStmt();
    antlr4::tree::TerminalNode *DIM();
    antlr4::tree::TerminalNode *STATIC();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *WITHEVENTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableStmtContext* variableStmt();

  class  VariableListStmtContext : public antlr4::ParserRuleContext {
  public:
    VariableListStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableSubStmtContext *> variableSubStmt();
    VariableSubStmtContext* variableSubStmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableListStmtContext* variableListStmt();

  class  VariableSubStmtContext : public antlr4::ParserRuleContext {
  public:
    VariableSubStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AsTypeClauseContext *asTypeClause();
    SubscriptsContext *subscripts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableSubStmtContext* variableSubStmt();

  class  WhileWendStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileWendStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WS();
    ValueStmtContext *valueStmt();
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *WEND();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileWendStmtContext* whileWendStmt();

  class  WidthStmtContext : public antlr4::ParserRuleContext {
  public:
    WidthStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WIDTH();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WidthStmtContext* widthStmt();

  class  WithStmtContext : public antlr4::ParserRuleContext {
  public:
    WithStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    EndOfStatementContext *endOfStatement();
    antlr4::tree::TerminalNode *END_WITH();
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    BlockContext *block();
    antlr4::tree::TerminalNode *NEW();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WithStmtContext* withStmt();

  class  WriteStmtContext : public antlr4::ParserRuleContext {
  public:
    WriteStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    FileNumberContext *fileNumber();
    OutputListContext *outputList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WriteStmtContext* writeStmt();

  class  FileNumberContext : public antlr4::ParserRuleContext {
  public:
    FileNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueStmtContext *valueStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileNumberContext* fileNumber();

  class  ExplicitCallStmtContext : public antlr4::ParserRuleContext {
  public:
    ExplicitCallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ECS_ProcedureCallContext *eCS_ProcedureCall();
    ECS_MemberProcedureCallContext *eCS_MemberProcedureCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitCallStmtContext* explicitCallStmt();

  class  ECS_ProcedureCallContext : public antlr4::ParserRuleContext {
  public:
    ECS_ProcedureCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    ArgsCallContext *argsCall();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ECS_ProcedureCallContext* eCS_ProcedureCall();

  class  ECS_MemberProcedureCallContext : public antlr4::ParserRuleContext {
  public:
    ECS_MemberProcedureCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    ArgsCallContext *argsCall();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ECS_MemberProcedureCallContext* eCS_MemberProcedureCall();

  class  ImplicitCallStmt_InBlockContext : public antlr4::ParserRuleContext {
  public:
    ImplicitCallStmt_InBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ICS_B_MemberProcedureCallContext *iCS_B_MemberProcedureCall();
    ICS_B_ProcedureCallContext *iCS_B_ProcedureCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitCallStmt_InBlockContext* implicitCallStmt_InBlock();

  class  ICS_B_MemberProcedureCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_B_MemberProcedureCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    ImplicitCallStmt_InStmtContext *implicitCallStmt_InStmt();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ArgsCallContext *argsCall();
    DictionaryCallStmtContext *dictionaryCallStmt();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_B_MemberProcedureCallContext* iCS_B_MemberProcedureCall();

  class  ICS_B_ProcedureCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_B_ProcedureCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CertainIdentifierContext *certainIdentifier();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ArgsCallContext *argsCall();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_B_ProcedureCallContext* iCS_B_ProcedureCall();

  class  ImplicitCallStmt_InStmtContext : public antlr4::ParserRuleContext {
  public:
    ImplicitCallStmt_InStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ICS_S_MembersCallContext *iCS_S_MembersCall();
    ICS_S_VariableOrProcedureCallContext *iCS_S_VariableOrProcedureCall();
    ICS_S_ProcedureOrArrayCallContext *iCS_S_ProcedureOrArrayCall();
    ICS_S_DictionaryCallContext *iCS_S_DictionaryCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitCallStmt_InStmtContext* implicitCallStmt_InStmt();

  class  ICS_S_VariableOrProcedureCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_S_VariableOrProcedureCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    TypeHintContext *typeHint();
    DictionaryCallStmtContext *dictionaryCallStmt();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_S_VariableOrProcedureCallContext* iCS_S_VariableOrProcedureCall();

  class  ICS_S_ProcedureOrArrayCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_S_ProcedureOrArrayCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    AmbiguousIdentifierContext *ambiguousIdentifier();
    BaseTypeContext *baseType();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ArgsCallContext *argsCall();
    DictionaryCallStmtContext *dictionaryCallStmt();
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_S_ProcedureOrArrayCallContext* iCS_S_ProcedureOrArrayCall();

  class  ICS_S_MembersCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_S_MembersCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ICS_S_VariableOrProcedureCallContext *iCS_S_VariableOrProcedureCall();
    ICS_S_ProcedureOrArrayCallContext *iCS_S_ProcedureOrArrayCall();
    std::vector<ICS_S_MemberCallContext *> iCS_S_MemberCall();
    ICS_S_MemberCallContext* iCS_S_MemberCall(size_t i);
    DictionaryCallStmtContext *dictionaryCallStmt();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<SubscriptsContext *> subscripts();
    SubscriptsContext* subscripts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_S_MembersCallContext* iCS_S_MembersCall();

  class  ICS_S_MemberCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_S_MemberCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ICS_S_VariableOrProcedureCallContext *iCS_S_VariableOrProcedureCall();
    ICS_S_ProcedureOrArrayCallContext *iCS_S_ProcedureOrArrayCall();
    std::vector<antlr4::tree::TerminalNode *> LINE_CONTINUATION();
    antlr4::tree::TerminalNode* LINE_CONTINUATION(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_S_MemberCallContext* iCS_S_MemberCall();

  class  ICS_S_DictionaryCallContext : public antlr4::ParserRuleContext {
  public:
    ICS_S_DictionaryCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DictionaryCallStmtContext *dictionaryCallStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ICS_S_DictionaryCallContext* iCS_S_DictionaryCall();

  class  ArgsCallContext : public antlr4::ParserRuleContext {
  public:
    ArgsCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgCallContext *> argCall();
    ArgCallContext* argCall(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsCallContext* argsCall();

  class  ArgCallContext : public antlr4::ParserRuleContext {
  public:
    ArgCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *BYVAL();
    antlr4::tree::TerminalNode *BYREF();
    antlr4::tree::TerminalNode *PARAMARRAY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgCallContext* argCall();

  class  DictionaryCallStmtContext : public antlr4::ParserRuleContext {
  public:
    DictionaryCallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    TypeHintContext *typeHint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DictionaryCallStmtContext* dictionaryCallStmt();

  class  ArgListContext : public antlr4::ParserRuleContext {
  public:
    ArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgListContext* argList();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *OPTIONAL();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *PARAMARRAY();
    TypeHintContext *typeHint();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    AsTypeClauseContext *asTypeClause();
    ArgDefaultValueContext *argDefaultValue();
    antlr4::tree::TerminalNode *BYVAL();
    antlr4::tree::TerminalNode *BYREF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgContext* arg();

  class  ArgDefaultValueContext : public antlr4::ParserRuleContext {
  public:
    ArgDefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    ValueStmtContext *valueStmt();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgDefaultValueContext* argDefaultValue();

  class  SubscriptsContext : public antlr4::ParserRuleContext {
  public:
    SubscriptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Subscript_Context *> subscript_();
    Subscript_Context* subscript_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptsContext* subscripts();

  class  Subscript_Context : public antlr4::ParserRuleContext {
  public:
    Subscript_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueStmtContext *> valueStmt();
    ValueStmtContext* valueStmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subscript_Context* subscript_();

  class  AmbiguousIdentifierContext : public antlr4::ParserRuleContext {
  public:
    AmbiguousIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<AmbiguousKeywordContext *> ambiguousKeyword();
    AmbiguousKeywordContext* ambiguousKeyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AmbiguousIdentifierContext* ambiguousIdentifier();

  class  AsTypeClauseContext : public antlr4::ParserRuleContext {
  public:
    AsTypeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Type_Context *type_();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *NEW();
    FieldLengthContext *fieldLength();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsTypeClauseContext* asTypeClause();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *SINGLE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *MULT();
    ValueStmtContext *valueStmt();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *VARIANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseTypeContext* baseType();

  class  CertainIdentifierContext : public antlr4::ParserRuleContext {
  public:
    CertainIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<AmbiguousKeywordContext *> ambiguousKeyword();
    AmbiguousKeywordContext* ambiguousKeyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CertainIdentifierContext* certainIdentifier();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *LIKE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  ComplexTypeContext : public antlr4::ParserRuleContext {
  public:
    ComplexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AmbiguousIdentifierContext *> ambiguousIdentifier();
    AmbiguousIdentifierContext* ambiguousIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplexTypeContext* complexType();

  class  FieldLengthContext : public antlr4::ParserRuleContext {
  public:
    FieldLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *INTEGERLITERAL();
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldLengthContext* fieldLength();

  class  LetterrangeContext : public antlr4::ParserRuleContext {
  public:
    LetterrangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CertainIdentifierContext *> certainIdentifier();
    CertainIdentifierContext* certainIdentifier(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LetterrangeContext* letterrange();

  class  LineLabelContext : public antlr4::ParserRuleContext {
  public:
    LineLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AmbiguousIdentifierContext *ambiguousIdentifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineLabelContext* lineLabel();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXLITERAL();
    antlr4::tree::TerminalNode *OCTLITERAL();
    antlr4::tree::TerminalNode *DATELITERAL();
    antlr4::tree::TerminalNode *DOUBLELITERAL();
    antlr4::tree::TerminalNode *INTEGERLITERAL();
    antlr4::tree::TerminalNode *SHORTLITERAL();
    antlr4::tree::TerminalNode *STRINGLITERAL();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NOTHING();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeContext *baseType();
    ComplexTypeContext *complexType();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_Context* type_();

  class  TypeHintContext : public antlr4::ParserRuleContext {
  public:
    TypeHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeHintContext* typeHint();

  class  VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *FRIEND();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VisibilityContext* visibility();

  class  AmbiguousKeywordContext : public antlr4::ParserRuleContext {
  public:
    AmbiguousKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ADDRESSOF();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *APPACTIVATE();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *BEEP();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BYVAL();
    antlr4::tree::TerminalNode *BYREF();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CHDIR();
    antlr4::tree::TerminalNode *CHDRIVE();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DEFBOOL();
    antlr4::tree::TerminalNode *DEFBYTE();
    antlr4::tree::TerminalNode *DEFCUR();
    antlr4::tree::TerminalNode *DEFDBL();
    antlr4::tree::TerminalNode *DEFDATE();
    antlr4::tree::TerminalNode *DEFDEC();
    antlr4::tree::TerminalNode *DEFINT();
    antlr4::tree::TerminalNode *DEFLNG();
    antlr4::tree::TerminalNode *DEFOBJ();
    antlr4::tree::TerminalNode *DEFSNG();
    antlr4::tree::TerminalNode *DEFSTR();
    antlr4::tree::TerminalNode *DEFVAR();
    antlr4::tree::TerminalNode *DELETESETTING();
    antlr4::tree::TerminalNode *DIM();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *EQV();
    antlr4::tree::TerminalNode *ERASE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FILECOPY();
    antlr4::tree::TerminalNode *FRIEND();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GOSUB();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IMP();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *KILL();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *LIB();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LSET();
    antlr4::tree::TerminalNode *ME();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *MKDIR();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOTHING();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *PARAMARRAY();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUT();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANDOMIZE();
    antlr4::tree::TerminalNode *RAISEEVENT();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *REDIM();
    antlr4::tree::TerminalNode *REM();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *RMDIR();
    antlr4::tree::TerminalNode *RSET();
    antlr4::tree::TerminalNode *SAVEPICTURE();
    antlr4::tree::TerminalNode *SAVESETTING();
    antlr4::tree::TerminalNode *SEEK();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SENDKEYS();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETATTR();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *SINGLE();
    antlr4::tree::TerminalNode *SPC();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STEP();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPEOF();
    antlr4::tree::TerminalNode *UNLOAD();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *VARIANT();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *WEND();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WIDTH();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHEVENTS();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AmbiguousKeywordContext* ambiguousKeyword();

  class  RemCommentContext : public antlr4::ParserRuleContext {
  public:
    RemCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMCOMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RemCommentContext* remComment();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();

  class  EndOfLineContext : public antlr4::ParserRuleContext {
  public:
    EndOfLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();
    CommentContext *comment();
    RemCommentContext *remComment();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndOfLineContext* endOfLine();

  class  EndOfStatementContext : public antlr4::ParserRuleContext {
  public:
    EndOfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndOfStatementContext* endOfStatement();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool valueStmtSempred(ValueStmtContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

