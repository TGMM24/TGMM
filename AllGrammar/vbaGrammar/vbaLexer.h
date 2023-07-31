
// Generated from vba.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  vbaLexer : public antlr4::Lexer {
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

  explicit vbaLexer(antlr4::CharStream *input);

  ~vbaLexer() override;


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
