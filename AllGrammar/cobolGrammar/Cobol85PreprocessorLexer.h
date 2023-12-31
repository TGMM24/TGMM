
// Generated from Cobol85Preprocessor.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Cobol85PreprocessorLexer : public antlr4::Lexer {
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

  explicit Cobol85PreprocessorLexer(antlr4::CharStream *input);

  ~Cobol85PreprocessorLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

