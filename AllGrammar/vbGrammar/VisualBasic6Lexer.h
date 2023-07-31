
// Generated from VisualBasic6Lexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  VisualBasic6Lexer : public antlr4::Lexer {
public:
  enum {
    ACCESS = 1, ADDRESSOF = 2, ALIAS = 3, AND = 4, ATTRIBUTE = 5, APPACTIVATE = 6, 
    APPEND = 7, AS = 8, BEEP = 9, BEGIN = 10, BEGINPROPERTY = 11, BINARY = 12, 
    BOOLEAN = 13, BYVAL = 14, BYREF = 15, BYTE = 16, CALL = 17, CASE = 18, 
    CHDIR = 19, CHDRIVE = 20, CLASS = 21, CLOSE = 22, COLLECTION = 23, CONST = 24, 
    DATE = 25, DECLARE = 26, DEFBOOL = 27, DEFBYTE = 28, DEFDATE = 29, DEFDBL = 30, 
    DEFDEC = 31, DEFCUR = 32, DEFINT = 33, DEFLNG = 34, DEFOBJ = 35, DEFSNG = 36, 
    DEFSTR = 37, DEFVAR = 38, DELETESETTING = 39, DIM = 40, DO = 41, DOUBLE = 42, 
    EACH = 43, ELSE = 44, ELSEIF = 45, END_ENUM = 46, END_FUNCTION = 47, 
    END_IF = 48, END_PROPERTY = 49, END_SELECT = 50, END_SUB = 51, END_TYPE = 52, 
    END_WITH = 53, END = 54, ENDPROPERTY = 55, ENUM = 56, EQV = 57, ERASE = 58, 
    ERROR = 59, EVENT = 60, EXIT_DO = 61, EXIT_FOR = 62, EXIT_FUNCTION = 63, 
    EXIT_PROPERTY = 64, EXIT_SUB = 65, FALSE = 66, FILECOPY = 67, FRIEND = 68, 
    FOR = 69, FUNCTION = 70, GET = 71, GLOBAL = 72, GOSUB = 73, GOTO = 74, 
    IF = 75, IMP = 76, IMPLEMENTS = 77, IN = 78, INPUT = 79, IS = 80, INTEGER = 81, 
    KILL = 82, LOAD = 83, LOCK = 84, LONG = 85, LOOP = 86, LEN = 87, LET = 88, 
    LIB = 89, LIKE = 90, LINE_INPUT = 91, LOCK_READ = 92, LOCK_WRITE = 93, 
    LOCK_READ_WRITE = 94, LSET = 95, MACRO_IF = 96, MACRO_ELSEIF = 97, MACRO_ELSE = 98, 
    MACRO_END_IF = 99, ME = 100, MID = 101, MKDIR = 102, MOD = 103, NAME = 104, 
    NEXT = 105, NEW = 106, NOT = 107, NOTHING = 108, NULL_ = 109, OBJECT = 110, 
    ON = 111, ON_ERROR = 112, ON_LOCAL_ERROR = 113, OPEN = 114, OPTIONAL = 115, 
    OPTION_BASE = 116, OPTION_EXPLICIT = 117, OPTION_COMPARE = 118, OPTION_PRIVATE_MODULE = 119, 
    OR = 120, OUTPUT = 121, PARAMARRAY = 122, PRESERVE = 123, PRINT = 124, 
    PRIVATE = 125, PROPERTY_GET = 126, PROPERTY_LET = 127, PROPERTY_SET = 128, 
    PUBLIC = 129, PUT = 130, RANDOM = 131, RANDOMIZE = 132, RAISEEVENT = 133, 
    READ = 134, READ_WRITE = 135, REDIM = 136, REM = 137, RESET = 138, RESUME = 139, 
    RETURN = 140, RMDIR = 141, RSET = 142, SAVEPICTURE = 143, SAVESETTING = 144, 
    SEEK = 145, SELECT = 146, SENDKEYS = 147, SET = 148, SETATTR = 149, 
    SHARED = 150, SINGLE = 151, SPC = 152, STATIC = 153, STEP = 154, STOP = 155, 
    STRING = 156, SUB = 157, TAB = 158, TEXT = 159, THEN = 160, TIME = 161, 
    TO = 162, TRUE = 163, TYPE = 164, TYPEOF = 165, UNLOAD = 166, UNLOCK = 167, 
    UNTIL = 168, VARIANT = 169, VERSION = 170, WEND = 171, WHILE = 172, 
    WIDTH = 173, WITH = 174, WITHEVENTS = 175, WRITE = 176, XOR = 177, AMPERSAND = 178, 
    ASSIGN = 179, AT = 180, COLON = 181, COMMA = 182, IDIV = 183, DIV = 184, 
    DOLLAR = 185, DOT = 186, EQ = 187, EXCLAMATIONMARK = 188, GEQ = 189, 
    GT = 190, HASH = 191, LEQ = 192, LBRACE = 193, LPAREN = 194, LT = 195, 
    MINUS = 196, MINUS_EQ = 197, MULT = 198, NEQ = 199, PERCENT = 200, PLUS = 201, 
    PLUS_EQ = 202, POW = 203, RBRACE = 204, RPAREN = 205, SEMICOLON = 206, 
    L_SQUARE_BRACKET = 207, R_SQUARE_BRACKET = 208, STRINGLITERAL = 209, 
    DATELITERAL = 210, COLORLITERAL = 211, INTEGERLITERAL = 212, DOUBLELITERAL = 213, 
    FILENUMBER = 214, OCTALLITERAL = 215, FRX_OFFSET = 216, GUID = 217, 
    IDENTIFIER = 218, LINE_CONTINUATION = 219, NEWLINE = 220, COMMENT = 221, 
    WS = 222
  };

  explicit VisualBasic6Lexer(antlr4::CharStream *input);

  ~VisualBasic6Lexer() override;


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

