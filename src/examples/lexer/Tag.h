#ifndef JAVA_COMPILER_TAG_H
#define JAVA_COMPILER_TAG_H

#include <string>
#include <unordered_map>

namespace lexer {
    class Tag;
}

class lexer::Tag {
public:
    const int AND = 256;
    const int BASIC = 257;
    const int BREAK = 258;
    const int DO = 259;
    const int ELSE = 260;
    const int EQ = 261;
    const int FALSE = 262;
    const int GE = 263;
    const int ID = 264;
    const int IF = 265;
    const int INDEX = 266;
    const int LE = 267;
    const int MINUS = 268;
    const int NE = 269;
    const int NUM = 270;
    const int OR = 271;
    const int REAL = 272;
    const int TEMP = 273;
    const int TRUE = 274;
    const int WHILE = 275;
};


#endif //JAVA_COMPILER_TAG_H
