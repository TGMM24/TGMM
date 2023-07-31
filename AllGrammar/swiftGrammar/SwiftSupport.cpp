#include "SwiftSupport.h"
#include <bitset> 
#include <antlr4-runtime.h>
using namespace std;
using namespace antlr4;


bool SwiftSupport:: isCharacterFromSet(Token token, bitset bitSet) {
    if (token.getType() == Token.EOF) {
        return false;
    } else {
        string text = token.getText();
        int codepoint = text.codePointAt(0);
        if (Character.charCount(codepoint) != text.length()) {
            // not a single character
            return false;
        } else {
            return bitSet.get(codepoint);
        }
    }
}