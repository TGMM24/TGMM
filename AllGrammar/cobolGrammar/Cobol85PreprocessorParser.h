
// Generated from Cobol85Preprocessor.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Cobol85PreprocessorParser : public antlr4::Parser {
public:
  enum {
    ADATA = 1, ADV = 2, ALIAS = 3, ANSI = 4, ANY = 5, APOST = 6, AR = 7, 
    ARITH = 8, AUTO = 9, AWO = 10, BIN = 11, BLOCK0 = 12, BUF = 13, BUFSIZE = 14, 
    BY = 15, CBL = 16, CBLCARD = 17, CICS = 18, CO = 19, COBOL2 = 20, COBOL3 = 21, 
    CODEPAGE = 22, COMPAT = 23, COMPILE = 24, COPY = 25, CP = 26, CPP = 27, 
    CPSM = 28, CS = 29, CURR = 30, CURRENCY = 31, DATA = 32, DATEPROC = 33, 
    DBCS = 34, DD = 35, DEBUG = 36, DECK = 37, DIAGTRUNC = 38, DLI = 39, 
    DLL = 40, DP = 41, DTR = 42, DU = 43, DUMP = 44, DYN = 45, DYNAM = 46, 
    EDF = 47, EJECT = 48, EJPD = 49, EN = 50, ENGLISH = 51, END_EXEC = 52, 
    EPILOG = 53, EXCI = 54, EXEC = 55, EXIT = 56, EXP = 57, EXPORTALL = 58, 
    EXTEND = 59, FASTSRT = 60, FEPI = 61, FLAG = 62, FLAGSTD = 63, FSRT = 64, 
    FULL = 65, GDS = 66, GRAPHIC = 67, HOOK = 68, IN = 69, INTDATE = 70, 
    JA = 71, JP = 72, KA = 73, LANG = 74, LANGUAGE = 75, LC = 76, LEASM = 77, 
    LENGTH = 78, LIB = 79, LILIAN = 80, LIN = 81, LINECOUNT = 82, LINKAGE = 83, 
    LIST = 84, LM = 85, LONGMIXED = 86, LONGUPPER = 87, LPARENCHAR = 88, 
    LU = 89, MAP = 90, MARGINS = 91, MAX = 92, MD = 93, MDECK = 94, MIG = 95, 
    MIXED = 96, NAME = 97, NAT = 98, NATIONAL = 99, NATLANG = 100, NN = 101, 
    NO = 102, NOADATA = 103, NOADV = 104, NOALIAS = 105, NOAWO = 106, NOBLOCK0 = 107, 
    NOC = 108, NOCBLCARD = 109, NOCICS = 110, NOCMPR2 = 111, NOCOMPILE = 112, 
    NOCPSM = 113, NOCURR = 114, NOCURRENCY = 115, NOD = 116, NODATEPROC = 117, 
    NODBCS = 118, NODE = 119, NODEBUG = 120, NODECK = 121, NODIAGTRUNC = 122, 
    NODLL = 123, NODU = 124, NODUMP = 125, NODP = 126, NODTR = 127, NODYN = 128, 
    NODYNAM = 129, NOEDF = 130, NOEJPD = 131, NOEPILOG = 132, NOEXIT = 133, 
    NOEXP = 134, NOEXPORTALL = 135, NOF = 136, NOFASTSRT = 137, NOFEPI = 138, 
    NOFLAG = 139, NOFLAGMIG = 140, NOFLAGSTD = 141, NOFSRT = 142, NOGRAPHIC = 143, 
    NOHOOK = 144, NOLENGTH = 145, NOLIB = 146, NOLINKAGE = 147, NOLIST = 148, 
    NOMAP = 149, NOMD = 150, NOMDECK = 151, NONAME = 152, NONUM = 153, NONUMBER = 154, 
    NOOBJ = 155, NOOBJECT = 156, NOOFF = 157, NOOFFSET = 158, NOOPSEQUENCE = 159, 
    NOOPT = 160, NOOPTIMIZE = 161, NOOPTIONS = 162, NOP = 163, NOPFD = 164, 
    NOPROLOG = 165, NORENT = 166, NOS = 167, NOSEP = 168, NOSEPARATE = 169, 
    NOSEQ = 170, NOSOURCE = 171, NOSPIE = 172, NOSQL = 173, NOSQLC = 174, 
    NOSQLCCSID = 175, NOSSR = 176, NOSSRANGE = 177, NOSTDTRUNC = 178, NOSEQUENCE = 179, 
    NOTERM = 180, NOTERMINAL = 181, NOTEST = 182, NOTHREAD = 183, NOTRIG = 184, 
    NOVBREF = 185, NOWD = 186, NOWORD = 187, NOX = 188, NOXREF = 189, NOZWB = 190, 
    NS = 191, NSEQ = 192, NSYMBOL = 193, NUM = 194, NUMBER = 195, NUMPROC = 196, 
    OBJ = 197, OBJECT = 198, OF = 199, OFF = 200, OFFSET = 201, ON = 202, 
    OP = 203, OPMARGINS = 204, OPSEQUENCE = 205, OPT = 206, OPTFILE = 207, 
    OPTIMIZE = 208, OPTIONS = 209, OUT = 210, OUTDD = 211, PFD = 212, PPTDBG = 213, 
    PGMN = 214, PGMNAME = 215, PROCESS = 216, PROLOG = 217, QUOTE = 218, 
    RENT = 219, REPLACE = 220, REPLACING = 221, RMODE = 222, RPARENCHAR = 223, 
    SEP = 224, SEPARATE = 225, SEQ = 226, SEQUENCE = 227, SHORT = 228, SIZE = 229, 
    SOURCE = 230, SP = 231, SPACE = 232, SPIE = 233, SQL = 234, SQLC = 235, 
    SQLCCSID = 236, SQLIMS = 237, SKIP1 = 238, SKIP2 = 239, SKIP3 = 240, 
    SS = 241, SSR = 242, SSRANGE = 243, STD = 244, SUPPRESS = 245, SYSEIB = 246, 
    SZ = 247, TERM = 248, TERMINAL = 249, TEST = 250, THREAD = 251, TITLE = 252, 
    TRIG = 253, TRUNC = 254, UE = 255, UPPER = 256, VBREF = 257, WD = 258, 
    WORD = 259, XMLPARSE = 260, XMLSS = 261, XOPTS = 262, XP = 263, XREF = 264, 
    YEARWINDOW = 265, YW = 266, ZWB = 267, C_CHAR = 268, D_CHAR = 269, E_CHAR = 270, 
    F_CHAR = 271, H_CHAR = 272, I_CHAR = 273, M_CHAR = 274, N_CHAR = 275, 
    Q_CHAR = 276, S_CHAR = 277, U_CHAR = 278, W_CHAR = 279, X_CHAR = 280, 
    COMMENTTAG = 281, COMMACHAR = 282, DOT = 283, DOUBLEEQUALCHAR = 284, 
    NONNUMERICLITERAL = 285, NUMERICLITERAL = 286, IDENTIFIER = 287, FILENAME = 288, 
    NEWLINE = 289, COMMENTLINE = 290, WS = 291, TEXT = 292
  };

  enum {
    RuleStartRule = 0, RuleCompilerOptions = 1, RuleCompilerXOpts = 2, RuleCompilerOption = 3, 
    RuleExecCicsStatement = 4, RuleExecSqlStatement = 5, RuleExecSqlImsStatement = 6, 
    RuleCopyStatement = 7, RuleCopySource = 8, RuleCopyLibrary = 9, RuleReplacingPhrase = 10, 
    RuleReplaceArea = 11, RuleReplaceByStatement = 12, RuleReplaceOffStatement = 13, 
    RuleReplaceClause = 14, RuleDirectoryPhrase = 15, RuleFamilyPhrase = 16, 
    RuleReplaceable = 17, RuleReplacement = 18, RuleEjectStatement = 19, 
    RuleSkipStatement = 20, RuleTitleStatement = 21, RulePseudoText = 22, 
    RuleCharData = 23, RuleCharDataSql = 24, RuleCharDataLine = 25, RuleCobolWord = 26, 
    RuleLiteral = 27, RuleFilename = 28, RuleCharDataKeyword = 29
  };

  explicit Cobol85PreprocessorParser(antlr4::TokenStream *input);

  Cobol85PreprocessorParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Cobol85PreprocessorParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartRuleContext;
  class CompilerOptionsContext;
  class CompilerXOptsContext;
  class CompilerOptionContext;
  class ExecCicsStatementContext;
  class ExecSqlStatementContext;
  class ExecSqlImsStatementContext;
  class CopyStatementContext;
  class CopySourceContext;
  class CopyLibraryContext;
  class ReplacingPhraseContext;
  class ReplaceAreaContext;
  class ReplaceByStatementContext;
  class ReplaceOffStatementContext;
  class ReplaceClauseContext;
  class DirectoryPhraseContext;
  class FamilyPhraseContext;
  class ReplaceableContext;
  class ReplacementContext;
  class EjectStatementContext;
  class SkipStatementContext;
  class TitleStatementContext;
  class PseudoTextContext;
  class CharDataContext;
  class CharDataSqlContext;
  class CharDataLineContext;
  class CobolWordContext;
  class LiteralContext;
  class FilenameContext;
  class CharDataKeywordContext; 

  class  StartRuleContext : public antlr4::ParserRuleContext {
  public:
    StartRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<CompilerOptionsContext *> compilerOptions();
    CompilerOptionsContext* compilerOptions(size_t i);
    std::vector<CopyStatementContext *> copyStatement();
    CopyStatementContext* copyStatement(size_t i);
    std::vector<ExecCicsStatementContext *> execCicsStatement();
    ExecCicsStatementContext* execCicsStatement(size_t i);
    std::vector<ExecSqlStatementContext *> execSqlStatement();
    ExecSqlStatementContext* execSqlStatement(size_t i);
    std::vector<ExecSqlImsStatementContext *> execSqlImsStatement();
    ExecSqlImsStatementContext* execSqlImsStatement(size_t i);
    std::vector<ReplaceOffStatementContext *> replaceOffStatement();
    ReplaceOffStatementContext* replaceOffStatement(size_t i);
    std::vector<ReplaceAreaContext *> replaceArea();
    ReplaceAreaContext* replaceArea(size_t i);
    std::vector<EjectStatementContext *> ejectStatement();
    EjectStatementContext* ejectStatement(size_t i);
    std::vector<SkipStatementContext *> skipStatement();
    SkipStatementContext* skipStatement(size_t i);
    std::vector<TitleStatementContext *> titleStatement();
    TitleStatementContext* titleStatement(size_t i);
    std::vector<CharDataLineContext *> charDataLine();
    CharDataLineContext* charDataLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartRuleContext* startRule();

  class  CompilerOptionsContext : public antlr4::ParserRuleContext {
  public:
    CompilerOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *CBL();
    std::vector<CompilerOptionContext *> compilerOption();
    CompilerOptionContext* compilerOption(size_t i);
    std::vector<CompilerXOptsContext *> compilerXOpts();
    CompilerXOptsContext* compilerXOpts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMACHAR();
    antlr4::tree::TerminalNode* COMMACHAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerOptionsContext* compilerOptions();

  class  CompilerXOptsContext : public antlr4::ParserRuleContext {
  public:
    CompilerXOptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XOPTS();
    antlr4::tree::TerminalNode *LPARENCHAR();
    std::vector<CompilerOptionContext *> compilerOption();
    CompilerOptionContext* compilerOption(size_t i);
    antlr4::tree::TerminalNode *RPARENCHAR();
    std::vector<antlr4::tree::TerminalNode *> COMMACHAR();
    antlr4::tree::TerminalNode* COMMACHAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerXOptsContext* compilerXOpts();

  class  CompilerOptionContext : public antlr4::ParserRuleContext {
  public:
    CompilerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADATA();
    antlr4::tree::TerminalNode *ADV();
    antlr4::tree::TerminalNode *APOST();
    antlr4::tree::TerminalNode *LPARENCHAR();
    antlr4::tree::TerminalNode *RPARENCHAR();
    antlr4::tree::TerminalNode *ARITH();
    antlr4::tree::TerminalNode *AR();
    antlr4::tree::TerminalNode *EXTEND();
    std::vector<antlr4::tree::TerminalNode *> E_CHAR();
    antlr4::tree::TerminalNode* E_CHAR(size_t i);
    antlr4::tree::TerminalNode *COMPAT();
    antlr4::tree::TerminalNode *C_CHAR();
    antlr4::tree::TerminalNode *AWO();
    antlr4::tree::TerminalNode *BLOCK0();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    antlr4::tree::TerminalNode *BUFSIZE();
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *CBLCARD();
    antlr4::tree::TerminalNode *CICS();
    antlr4::tree::TerminalNode *COBOL2();
    antlr4::tree::TerminalNode *COBOL3();
    antlr4::tree::TerminalNode *CODEPAGE();
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *COMPILE();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPSM();
    antlr4::tree::TerminalNode *CURRENCY();
    antlr4::tree::TerminalNode *CURR();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATEPROC();
    antlr4::tree::TerminalNode *DP();
    std::vector<antlr4::tree::TerminalNode *> COMMACHAR();
    antlr4::tree::TerminalNode* COMMACHAR(size_t i);
    antlr4::tree::TerminalNode *FLAG();
    antlr4::tree::TerminalNode *NOFLAG();
    antlr4::tree::TerminalNode *TRIG();
    antlr4::tree::TerminalNode *NOTRIG();
    antlr4::tree::TerminalNode *DBCS();
    antlr4::tree::TerminalNode *DECK();
    antlr4::tree::TerminalNode *D_CHAR();
    antlr4::tree::TerminalNode *DEBUG();
    antlr4::tree::TerminalNode *DIAGTRUNC();
    antlr4::tree::TerminalNode *DTR();
    antlr4::tree::TerminalNode *DLL();
    antlr4::tree::TerminalNode *DUMP();
    antlr4::tree::TerminalNode *DU();
    antlr4::tree::TerminalNode *DYNAM();
    antlr4::tree::TerminalNode *DYN();
    antlr4::tree::TerminalNode *EDF();
    antlr4::tree::TerminalNode *EPILOG();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXPORTALL();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *FASTSRT();
    antlr4::tree::TerminalNode *FSRT();
    antlr4::tree::TerminalNode *FEPI();
    antlr4::tree::TerminalNode *F_CHAR();
    std::vector<antlr4::tree::TerminalNode *> I_CHAR();
    antlr4::tree::TerminalNode* I_CHAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> S_CHAR();
    antlr4::tree::TerminalNode* S_CHAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> U_CHAR();
    antlr4::tree::TerminalNode* U_CHAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> W_CHAR();
    antlr4::tree::TerminalNode* W_CHAR(size_t i);
    antlr4::tree::TerminalNode *FLAGSTD();
    antlr4::tree::TerminalNode *M_CHAR();
    antlr4::tree::TerminalNode *H_CHAR();
    antlr4::tree::TerminalNode *DD();
    antlr4::tree::TerminalNode *N_CHAR();
    antlr4::tree::TerminalNode *NN();
    antlr4::tree::TerminalNode *SS();
    antlr4::tree::TerminalNode *GDS();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *INTDATE();
    antlr4::tree::TerminalNode *ANSI();
    antlr4::tree::TerminalNode *LILIAN();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LANG();
    antlr4::tree::TerminalNode *ENGLISH();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *EN();
    antlr4::tree::TerminalNode *JA();
    antlr4::tree::TerminalNode *JP();
    antlr4::tree::TerminalNode *KA();
    antlr4::tree::TerminalNode *UE();
    antlr4::tree::TerminalNode *LEASM();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LIB();
    antlr4::tree::TerminalNode *LIN();
    antlr4::tree::TerminalNode *LINECOUNT();
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *LINKAGE();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MARGINS();
    antlr4::tree::TerminalNode *MDECK();
    antlr4::tree::TerminalNode *MD();
    antlr4::tree::TerminalNode *NOC();
    antlr4::tree::TerminalNode *NOCOMPILE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *NOALIAS();
    antlr4::tree::TerminalNode *NATLANG();
    antlr4::tree::TerminalNode *NOADATA();
    antlr4::tree::TerminalNode *NOADV();
    antlr4::tree::TerminalNode *NOAWO();
    antlr4::tree::TerminalNode *NOBLOCK0();
    antlr4::tree::TerminalNode *NOCBLCARD();
    antlr4::tree::TerminalNode *NOCICS();
    antlr4::tree::TerminalNode *NOCMPR2();
    antlr4::tree::TerminalNode *NOCPSM();
    antlr4::tree::TerminalNode *NOCURRENCY();
    antlr4::tree::TerminalNode *NOCURR();
    antlr4::tree::TerminalNode *NODATEPROC();
    antlr4::tree::TerminalNode *NODP();
    antlr4::tree::TerminalNode *NODBCS();
    antlr4::tree::TerminalNode *NODEBUG();
    antlr4::tree::TerminalNode *NODECK();
    antlr4::tree::TerminalNode *NOD();
    antlr4::tree::TerminalNode *NODLL();
    antlr4::tree::TerminalNode *NODE();
    antlr4::tree::TerminalNode *NODUMP();
    antlr4::tree::TerminalNode *NODU();
    antlr4::tree::TerminalNode *NODIAGTRUNC();
    antlr4::tree::TerminalNode *NODTR();
    antlr4::tree::TerminalNode *NODYNAM();
    antlr4::tree::TerminalNode *NODYN();
    antlr4::tree::TerminalNode *NOEDF();
    antlr4::tree::TerminalNode *NOEPILOG();
    antlr4::tree::TerminalNode *NOEXIT();
    antlr4::tree::TerminalNode *NOEXPORTALL();
    antlr4::tree::TerminalNode *NOEXP();
    antlr4::tree::TerminalNode *NOFASTSRT();
    antlr4::tree::TerminalNode *NOFSRT();
    antlr4::tree::TerminalNode *NOFEPI();
    antlr4::tree::TerminalNode *NOF();
    antlr4::tree::TerminalNode *NOFLAGMIG();
    antlr4::tree::TerminalNode *NOFLAGSTD();
    antlr4::tree::TerminalNode *NOGRAPHIC();
    antlr4::tree::TerminalNode *NOLENGTH();
    antlr4::tree::TerminalNode *NOLIB();
    antlr4::tree::TerminalNode *NOLINKAGE();
    antlr4::tree::TerminalNode *NOLIST();
    antlr4::tree::TerminalNode *NOMAP();
    antlr4::tree::TerminalNode *NOMDECK();
    antlr4::tree::TerminalNode *NOMD();
    antlr4::tree::TerminalNode *NONAME();
    antlr4::tree::TerminalNode *NONUMBER();
    antlr4::tree::TerminalNode *NONUM();
    antlr4::tree::TerminalNode *NOOBJECT();
    antlr4::tree::TerminalNode *NOOBJ();
    antlr4::tree::TerminalNode *NOOFFSET();
    antlr4::tree::TerminalNode *NOOFF();
    antlr4::tree::TerminalNode *NOOPSEQUENCE();
    antlr4::tree::TerminalNode *NOOPTIMIZE();
    antlr4::tree::TerminalNode *NOOPT();
    antlr4::tree::TerminalNode *NOOPTIONS();
    antlr4::tree::TerminalNode *NOP();
    antlr4::tree::TerminalNode *NOPROLOG();
    antlr4::tree::TerminalNode *NORENT();
    antlr4::tree::TerminalNode *NOSEQUENCE();
    antlr4::tree::TerminalNode *NOSEQ();
    antlr4::tree::TerminalNode *NOSOURCE();
    antlr4::tree::TerminalNode *NOS();
    antlr4::tree::TerminalNode *NOSPIE();
    antlr4::tree::TerminalNode *NOSQL();
    antlr4::tree::TerminalNode *NOSQLCCSID();
    antlr4::tree::TerminalNode *NOSQLC();
    antlr4::tree::TerminalNode *NOSSRANGE();
    antlr4::tree::TerminalNode *NOSSR();
    antlr4::tree::TerminalNode *NOSTDTRUNC();
    antlr4::tree::TerminalNode *NOTERMINAL();
    antlr4::tree::TerminalNode *NOTERM();
    antlr4::tree::TerminalNode *NOTEST();
    antlr4::tree::TerminalNode *NOTHREAD();
    antlr4::tree::TerminalNode *NOVBREF();
    antlr4::tree::TerminalNode *NOWORD();
    antlr4::tree::TerminalNode *NOWD();
    antlr4::tree::TerminalNode *NSEQ();
    antlr4::tree::TerminalNode *NSYMBOL();
    antlr4::tree::TerminalNode *NS();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NAT();
    antlr4::tree::TerminalNode *NOXREF();
    antlr4::tree::TerminalNode *NOX();
    antlr4::tree::TerminalNode *NOZWB();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMPROC();
    antlr4::tree::TerminalNode *MIG();
    antlr4::tree::TerminalNode *NOPFD();
    antlr4::tree::TerminalNode *PFD();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJ();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OPMARGINS();
    antlr4::tree::TerminalNode *OPSEQUENCE();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *OPTFILE();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OP();
    CobolWordContext *cobolWord();
    antlr4::tree::TerminalNode *OUTDD();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *PGMNAME();
    antlr4::tree::TerminalNode *PGMN();
    antlr4::tree::TerminalNode *CO();
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *LONGMIXED();
    antlr4::tree::TerminalNode *LONGUPPER();
    antlr4::tree::TerminalNode *LU();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *PROLOG();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *Q_CHAR();
    antlr4::tree::TerminalNode *RENT();
    antlr4::tree::TerminalNode *RMODE();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SEQ();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SZ();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPIE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLCCSID();
    antlr4::tree::TerminalNode *SQLC();
    antlr4::tree::TerminalNode *SSRANGE();
    antlr4::tree::TerminalNode *SSR();
    antlr4::tree::TerminalNode *SYSEIB();
    antlr4::tree::TerminalNode *TERMINAL();
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *HOOK();
    antlr4::tree::TerminalNode *NOHOOK();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *NOSEP();
    antlr4::tree::TerminalNode *NOSEPARATE();
    antlr4::tree::TerminalNode *EJPD();
    antlr4::tree::TerminalNode *NOEJPD();
    antlr4::tree::TerminalNode *THREAD();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *VBREF();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *WD();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XP();
    antlr4::tree::TerminalNode *XMLSS();
    antlr4::tree::TerminalNode *X_CHAR();
    antlr4::tree::TerminalNode *XREF();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *YEARWINDOW();
    antlr4::tree::TerminalNode *YW();
    antlr4::tree::TerminalNode *ZWB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerOptionContext* compilerOption();

  class  ExecCicsStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecCicsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *CICS();
    CharDataContext *charData();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecCicsStatementContext* execCicsStatement();

  class  ExecSqlStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecSqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *SQL();
    CharDataSqlContext *charDataSql();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecSqlStatementContext* execSqlStatement();

  class  ExecSqlImsStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecSqlImsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *SQLIMS();
    CharDataContext *charData();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecSqlImsStatementContext* execSqlImsStatement();

  class  CopyStatementContext : public antlr4::ParserRuleContext {
  public:
    CopyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COPY();
    CopySourceContext *copySource();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<DirectoryPhraseContext *> directoryPhrase();
    DirectoryPhraseContext* directoryPhrase(size_t i);
    std::vector<FamilyPhraseContext *> familyPhrase();
    FamilyPhraseContext* familyPhrase(size_t i);
    std::vector<ReplacingPhraseContext *> replacingPhrase();
    ReplacingPhraseContext* replacingPhrase(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUPPRESS();
    antlr4::tree::TerminalNode* SUPPRESS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CopyStatementContext* copyStatement();

  class  CopySourceContext : public antlr4::ParserRuleContext {
  public:
    CopySourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    CobolWordContext *cobolWord();
    FilenameContext *filename();
    CopyLibraryContext *copyLibrary();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CopySourceContext* copySource();

  class  CopyLibraryContext : public antlr4::ParserRuleContext {
  public:
    CopyLibraryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    CobolWordContext *cobolWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CopyLibraryContext* copyLibrary();

  class  ReplacingPhraseContext : public antlr4::ParserRuleContext {
  public:
    ReplacingPhraseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACING();
    std::vector<ReplaceClauseContext *> replaceClause();
    ReplaceClauseContext* replaceClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplacingPhraseContext* replacingPhrase();

  class  ReplaceAreaContext : public antlr4::ParserRuleContext {
  public:
    ReplaceAreaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReplaceByStatementContext *replaceByStatement();
    std::vector<CopyStatementContext *> copyStatement();
    CopyStatementContext* copyStatement(size_t i);
    std::vector<CharDataContext *> charData();
    CharDataContext* charData(size_t i);
    ReplaceOffStatementContext *replaceOffStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceAreaContext* replaceArea();

  class  ReplaceByStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplaceByStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *DOT();
    std::vector<ReplaceClauseContext *> replaceClause();
    ReplaceClauseContext* replaceClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceByStatementContext* replaceByStatement();

  class  ReplaceOffStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplaceOffStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceOffStatementContext* replaceOffStatement();

  class  ReplaceClauseContext : public antlr4::ParserRuleContext {
  public:
    ReplaceClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReplaceableContext *replaceable();
    antlr4::tree::TerminalNode *BY();
    ReplacementContext *replacement();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    DirectoryPhraseContext *directoryPhrase();
    FamilyPhraseContext *familyPhrase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceClauseContext* replaceClause();

  class  DirectoryPhraseContext : public antlr4::ParserRuleContext {
  public:
    DirectoryPhraseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *IN();
    LiteralContext *literal();
    CobolWordContext *cobolWord();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectoryPhraseContext* directoryPhrase();

  class  FamilyPhraseContext : public antlr4::ParserRuleContext {
  public:
    FamilyPhraseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    LiteralContext *literal();
    CobolWordContext *cobolWord();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FamilyPhraseContext* familyPhrase();

  class  ReplaceableContext : public antlr4::ParserRuleContext {
  public:
    ReplaceableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    CobolWordContext *cobolWord();
    PseudoTextContext *pseudoText();
    CharDataLineContext *charDataLine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceableContext* replaceable();

  class  ReplacementContext : public antlr4::ParserRuleContext {
  public:
    ReplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    CobolWordContext *cobolWord();
    PseudoTextContext *pseudoText();
    CharDataLineContext *charDataLine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplacementContext* replacement();

  class  EjectStatementContext : public antlr4::ParserRuleContext {
  public:
    EjectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EJECT();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EjectStatementContext* ejectStatement();

  class  SkipStatementContext : public antlr4::ParserRuleContext {
  public:
    SkipStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP1();
    antlr4::tree::TerminalNode *SKIP2();
    antlr4::tree::TerminalNode *SKIP3();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SkipStatementContext* skipStatement();

  class  TitleStatementContext : public antlr4::ParserRuleContext {
  public:
    TitleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TITLE();
    LiteralContext *literal();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TitleStatementContext* titleStatement();

  class  PseudoTextContext : public antlr4::ParserRuleContext {
  public:
    PseudoTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOUBLEEQUALCHAR();
    antlr4::tree::TerminalNode* DOUBLEEQUALCHAR(size_t i);
    CharDataContext *charData();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PseudoTextContext* pseudoText();

  class  CharDataContext : public antlr4::ParserRuleContext {
  public:
    CharDataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CharDataLineContext *> charDataLine();
    CharDataLineContext* charDataLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharDataContext* charData();

  class  CharDataSqlContext : public antlr4::ParserRuleContext {
  public:
    CharDataSqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CharDataLineContext *> charDataLine();
    CharDataLineContext* charDataLine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REPLACE();
    antlr4::tree::TerminalNode* REPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharDataSqlContext* charDataSql();

  class  CharDataLineContext : public antlr4::ParserRuleContext {
  public:
    CharDataLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CobolWordContext *> cobolWord();
    CobolWordContext* cobolWord(size_t i);
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<FilenameContext *> filename();
    FilenameContext* filename(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEXT();
    antlr4::tree::TerminalNode* TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPARENCHAR();
    antlr4::tree::TerminalNode* LPARENCHAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPARENCHAR();
    antlr4::tree::TerminalNode* RPARENCHAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharDataLineContext* charDataLine();

  class  CobolWordContext : public antlr4::ParserRuleContext {
  public:
    CobolWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    CharDataKeywordContext *charDataKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CobolWordContext* cobolWord();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONNUMERICLITERAL();
    antlr4::tree::TerminalNode *NUMERICLITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  FilenameContext : public antlr4::ParserRuleContext {
  public:
    FilenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilenameContext* filename();

  class  CharDataKeywordContext : public antlr4::ParserRuleContext {
  public:
    CharDataKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADATA();
    antlr4::tree::TerminalNode *ADV();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ANSI();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APOST();
    antlr4::tree::TerminalNode *AR();
    antlr4::tree::TerminalNode *ARITH();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *AWO();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BLOCK0();
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *BUFSIZE();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CBL();
    antlr4::tree::TerminalNode *CBLCARD();
    antlr4::tree::TerminalNode *CO();
    antlr4::tree::TerminalNode *COBOL2();
    antlr4::tree::TerminalNode *COBOL3();
    antlr4::tree::TerminalNode *CODEPAGE();
    antlr4::tree::TerminalNode *COMMACHAR();
    antlr4::tree::TerminalNode *COMPAT();
    antlr4::tree::TerminalNode *COMPILE();
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPSM();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CURR();
    antlr4::tree::TerminalNode *CURRENCY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATEPROC();
    antlr4::tree::TerminalNode *DBCS();
    antlr4::tree::TerminalNode *DD();
    antlr4::tree::TerminalNode *DEBUG();
    antlr4::tree::TerminalNode *DECK();
    antlr4::tree::TerminalNode *DIAGTRUNC();
    antlr4::tree::TerminalNode *DLI();
    antlr4::tree::TerminalNode *DLL();
    antlr4::tree::TerminalNode *DP();
    antlr4::tree::TerminalNode *DTR();
    antlr4::tree::TerminalNode *DU();
    antlr4::tree::TerminalNode *DUMP();
    antlr4::tree::TerminalNode *DYN();
    antlr4::tree::TerminalNode *DYNAM();
    antlr4::tree::TerminalNode *EDF();
    antlr4::tree::TerminalNode *EJECT();
    antlr4::tree::TerminalNode *EJPD();
    antlr4::tree::TerminalNode *EN();
    antlr4::tree::TerminalNode *ENGLISH();
    antlr4::tree::TerminalNode *EPILOG();
    antlr4::tree::TerminalNode *EXCI();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPORTALL();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *FASTSRT();
    antlr4::tree::TerminalNode *FLAG();
    antlr4::tree::TerminalNode *FLAGSTD();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FSRT();
    antlr4::tree::TerminalNode *GDS();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *HOOK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INTDATE();
    antlr4::tree::TerminalNode *JA();
    antlr4::tree::TerminalNode *JP();
    antlr4::tree::TerminalNode *KA();
    antlr4::tree::TerminalNode *LANG();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LIB();
    antlr4::tree::TerminalNode *LILIAN();
    antlr4::tree::TerminalNode *LIN();
    antlr4::tree::TerminalNode *LINECOUNT();
    antlr4::tree::TerminalNode *LINKAGE();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *LONGMIXED();
    antlr4::tree::TerminalNode *LONGUPPER();
    antlr4::tree::TerminalNode *LU();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MARGINS();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MD();
    antlr4::tree::TerminalNode *MDECK();
    antlr4::tree::TerminalNode *MIG();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAT();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATLANG();
    antlr4::tree::TerminalNode *NN();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOADATA();
    antlr4::tree::TerminalNode *NOADV();
    antlr4::tree::TerminalNode *NOALIAS();
    antlr4::tree::TerminalNode *NOAWO();
    antlr4::tree::TerminalNode *NOBLOCK0();
    antlr4::tree::TerminalNode *NOC();
    antlr4::tree::TerminalNode *NOCBLCARD();
    antlr4::tree::TerminalNode *NOCICS();
    antlr4::tree::TerminalNode *NOCMPR2();
    antlr4::tree::TerminalNode *NOCOMPILE();
    antlr4::tree::TerminalNode *NOCPSM();
    antlr4::tree::TerminalNode *NOCURR();
    antlr4::tree::TerminalNode *NOCURRENCY();
    antlr4::tree::TerminalNode *NOD();
    antlr4::tree::TerminalNode *NODATEPROC();
    antlr4::tree::TerminalNode *NODBCS();
    antlr4::tree::TerminalNode *NODE();
    antlr4::tree::TerminalNode *NODEBUG();
    antlr4::tree::TerminalNode *NODECK();
    antlr4::tree::TerminalNode *NODIAGTRUNC();
    antlr4::tree::TerminalNode *NODLL();
    antlr4::tree::TerminalNode *NODU();
    antlr4::tree::TerminalNode *NODUMP();
    antlr4::tree::TerminalNode *NODP();
    antlr4::tree::TerminalNode *NODTR();
    antlr4::tree::TerminalNode *NODYN();
    antlr4::tree::TerminalNode *NODYNAM();
    antlr4::tree::TerminalNode *NOEDF();
    antlr4::tree::TerminalNode *NOEJPD();
    antlr4::tree::TerminalNode *NOEPILOG();
    antlr4::tree::TerminalNode *NOEXIT();
    antlr4::tree::TerminalNode *NOEXP();
    antlr4::tree::TerminalNode *NOEXPORTALL();
    antlr4::tree::TerminalNode *NOF();
    antlr4::tree::TerminalNode *NOFASTSRT();
    antlr4::tree::TerminalNode *NOFEPI();
    antlr4::tree::TerminalNode *NOFLAG();
    antlr4::tree::TerminalNode *NOFLAGMIG();
    antlr4::tree::TerminalNode *NOFLAGSTD();
    antlr4::tree::TerminalNode *NOFSRT();
    antlr4::tree::TerminalNode *NOGRAPHIC();
    antlr4::tree::TerminalNode *NOHOOK();
    antlr4::tree::TerminalNode *NOLENGTH();
    antlr4::tree::TerminalNode *NOLIB();
    antlr4::tree::TerminalNode *NOLINKAGE();
    antlr4::tree::TerminalNode *NOLIST();
    antlr4::tree::TerminalNode *NOMAP();
    antlr4::tree::TerminalNode *NOMD();
    antlr4::tree::TerminalNode *NOMDECK();
    antlr4::tree::TerminalNode *NONAME();
    antlr4::tree::TerminalNode *NONUM();
    antlr4::tree::TerminalNode *NONUMBER();
    antlr4::tree::TerminalNode *NOOBJ();
    antlr4::tree::TerminalNode *NOOBJECT();
    antlr4::tree::TerminalNode *NOOFF();
    antlr4::tree::TerminalNode *NOOFFSET();
    antlr4::tree::TerminalNode *NOOPSEQUENCE();
    antlr4::tree::TerminalNode *NOOPT();
    antlr4::tree::TerminalNode *NOOPTIMIZE();
    antlr4::tree::TerminalNode *NOOPTIONS();
    antlr4::tree::TerminalNode *NOP();
    antlr4::tree::TerminalNode *NOPFD();
    antlr4::tree::TerminalNode *NOPROLOG();
    antlr4::tree::TerminalNode *NORENT();
    antlr4::tree::TerminalNode *NOS();
    antlr4::tree::TerminalNode *NOSEP();
    antlr4::tree::TerminalNode *NOSEPARATE();
    antlr4::tree::TerminalNode *NOSEQ();
    antlr4::tree::TerminalNode *NOSEQUENCE();
    antlr4::tree::TerminalNode *NOSOURCE();
    antlr4::tree::TerminalNode *NOSPIE();
    antlr4::tree::TerminalNode *NOSQL();
    antlr4::tree::TerminalNode *NOSQLC();
    antlr4::tree::TerminalNode *NOSQLCCSID();
    antlr4::tree::TerminalNode *NOSSR();
    antlr4::tree::TerminalNode *NOSSRANGE();
    antlr4::tree::TerminalNode *NOSTDTRUNC();
    antlr4::tree::TerminalNode *NOTERM();
    antlr4::tree::TerminalNode *NOTERMINAL();
    antlr4::tree::TerminalNode *NOTEST();
    antlr4::tree::TerminalNode *NOTHREAD();
    antlr4::tree::TerminalNode *NOTRIG();
    antlr4::tree::TerminalNode *NOVBREF();
    antlr4::tree::TerminalNode *NOWORD();
    antlr4::tree::TerminalNode *NOX();
    antlr4::tree::TerminalNode *NOXREF();
    antlr4::tree::TerminalNode *NOZWB();
    antlr4::tree::TerminalNode *NSEQ();
    antlr4::tree::TerminalNode *NSYMBOL();
    antlr4::tree::TerminalNode *NS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NUMPROC();
    antlr4::tree::TerminalNode *OBJ();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OPMARGINS();
    antlr4::tree::TerminalNode *OPSEQUENCE();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *OPT();
    antlr4::tree::TerminalNode *OPTFILE();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTDD();
    antlr4::tree::TerminalNode *PFD();
    antlr4::tree::TerminalNode *PGMN();
    antlr4::tree::TerminalNode *PGMNAME();
    antlr4::tree::TerminalNode *PPTDBG();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROLOG();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RENT();
    antlr4::tree::TerminalNode *REPLACING();
    antlr4::tree::TerminalNode *RMODE();
    antlr4::tree::TerminalNode *SEQ();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPIE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLC();
    antlr4::tree::TerminalNode *SQLCCSID();
    antlr4::tree::TerminalNode *SS();
    antlr4::tree::TerminalNode *SSR();
    antlr4::tree::TerminalNode *SSRANGE();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *SYSEIB();
    antlr4::tree::TerminalNode *SZ();
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *TERMINAL();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *THREAD();
    antlr4::tree::TerminalNode *TITLE();
    antlr4::tree::TerminalNode *TRIG();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *UE();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *VBREF();
    antlr4::tree::TerminalNode *WD();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLSS();
    antlr4::tree::TerminalNode *XOPTS();
    antlr4::tree::TerminalNode *XREF();
    antlr4::tree::TerminalNode *YEARWINDOW();
    antlr4::tree::TerminalNode *YW();
    antlr4::tree::TerminalNode *ZWB();
    antlr4::tree::TerminalNode *C_CHAR();
    antlr4::tree::TerminalNode *D_CHAR();
    antlr4::tree::TerminalNode *E_CHAR();
    antlr4::tree::TerminalNode *F_CHAR();
    antlr4::tree::TerminalNode *H_CHAR();
    antlr4::tree::TerminalNode *I_CHAR();
    antlr4::tree::TerminalNode *M_CHAR();
    antlr4::tree::TerminalNode *N_CHAR();
    antlr4::tree::TerminalNode *Q_CHAR();
    antlr4::tree::TerminalNode *S_CHAR();
    antlr4::tree::TerminalNode *U_CHAR();
    antlr4::tree::TerminalNode *W_CHAR();
    antlr4::tree::TerminalNode *X_CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharDataKeywordContext* charDataKeyword();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

