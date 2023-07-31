#include <bitset> 
#include <antlr4-runtime.h>
using namespace std;
using namespace antlr4;
class SwiftSupport
{
public:
    static const bitset<0x10000> operatorHead;
    static const bitset<0x10000> operatorCharacter;
    
    static const bitset<255> leftWS;
    static const bitset<255> rightWS;
    
    // operator-head → /  =­  -­  +­  !­  *­  %­  <­  >­  &­  |­  ^­  ~­  ?­
    operatorHead.set('/');
    operatorHead.set('=');
    operatorHead.set('-');
    operatorHead.set('+');
    operatorHead.set('!');
    operatorHead.set('*');
    operatorHead.set('%');
    operatorHead.set('&');
    operatorHead.set('|');
    operatorHead.set('<');
    operatorHead.set('>');
    operatorHead.set('^');
    operatorHead.set('~');
    operatorHead.set('?');

    // operator-head → U+00A1–U+00A7
    operatorHead.set(0x00A1, 0x00A7 + 1);

    // operator-head → U+00A9 or U+00AB
    operatorHead.set(0x00A9);
    operatorHead.set(0x00AB);

    // operator-head → U+00AC or U+00AE
    operatorHead.set(0x00AC);
    operatorHead.set(0x00AE);

    // operator-head → U+00B0–U+00B1, U+00B6, U+00BB, U+00BF, U+00D7, or U+00F7
    operatorHead.set(0x00B0, 0x00B1 + 1);
    operatorHead.set(0x00B6);
    operatorHead.set(0x00BB);
    operatorHead.set(0x00BF);
    operatorHead.set(0x00D7);
    operatorHead.set(0x00F7);

    // operator-head → U+2016–U+2017 or U+2020–U+2027
    operatorHead.set(0x2016, 0x2017 + 1);
    operatorHead.set(0x2020, 0x2027 + 1);

    // operator-head → U+2030–U+203E
    operatorHead.set(0x2030, 0x203E + 1);

    // operator-head → U+2041–U+2053
    operatorHead.set(0x2041, 0x2053 + 1);

    // operator-head → U+2055–U+205E
    operatorHead.set(0x2055, 0x205E + 1);

    // operator-head → U+2190–U+23FF
    operatorHead.set(0x2190, 0x23FF + 1);

    // operator-head → U+2500–U+2775
    operatorHead.set(0x2500, 0x2775 + 1);

    // operator-head → U+2794–U+2BFF
    operatorHead.set(0x2794, 0x2BFF + 1);

    // operator-head → U+2E00–U+2E7F
    operatorHead.set(0x2E00, 0x2E7F + 1);

    // operator-head → U+3001–U+3003
    operatorHead.set(0x3001, 0x3003 + 1);

    // operator-head → U+3008–U+3030
    operatorHead.set(0x3008, 0x3020 + 1);

    operatorHead.set(0x3030);

    // operator-character → operator-head­
    operatorCharacter = operatorHead.clone();

    // operator-character → U+0300–U+036F
    operatorCharacter.set(0x0300, 0x036F + 1);
    // operator-character → U+1DC0–U+1DFF
    operatorCharacter.set(0x1DC0, 0x1DFF + 1);
    // operator-character → U+20D0–U+20FF
    operatorCharacter.set(0x20D0, 0x20FF + 1);
    // operator-character → U+FE00–U+FE0F
    operatorCharacter.set(0xFE00, 0xFE0F + 1);
    // operator-character → U+FE20–U+FE2F
    operatorCharacter.set(0xFE20, 0xFE2F + 1);
    operatorCharacter.set(0xE0100, 0xE01EF + 1);

    // operator-character → U+E0100–U+E01EF
    // Java works with 16-bit unicode chars. However, it can work for targets in other languages, e.g. in Swift
    // operatorCharacter.set(0xE0100,0xE01EF+1);

    leftWS.set(Swift5Parser.WS);
    leftWS.set(Swift5Parser.LPAREN);
    leftWS.set(Swift5Parser.Interpolataion_multi_line);
    leftWS.set(Swift5Parser.Interpolataion_single_line);
    leftWS.set(Swift5Parser.LBRACK);
    leftWS.set(Swift5Parser.LCURLY);
    leftWS.set(Swift5Parser.COMMA);
    leftWS.set(Swift5Parser.COLON);
    leftWS.set(Swift5Parser.SEMI);

    rightWS.set(Swift5Parser.WS);
    rightWS.set(Swift5Parser.RPAREN);
    rightWS.set(Swift5Parser.RBRACK);
    rightWS.set(Swift5Parser.RCURLY);
    rightWS.set(Swift5Parser.COMMA);
    rightWS.set(Swift5Parser.COLON);
    rightWS.set(Swift5Parser.SEMI);
    rightWS.set(Swift5Parser.Line_comment);
    rightWS.set(Swift5Parser.Block_comment);

    static bool isOperatorHead(Token token);


private:
    static bool isCharacterFromSet(Token token, bitset bitSet);
};