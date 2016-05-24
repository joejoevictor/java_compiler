//
// Created by Joe Chen on 5/23/16.
//

#ifndef JAVA_COMPILER_NUMBER_H
#define JAVA_COMPILER_NUMBER_H

#include "token.h"
#include "../tag.h"

namespace lexer {
    namespace token {
        class Number;
    }
}

using namespace lexer::token;

class Number: lexer::Token {
public:
    Number();
    ~Number();
};


#endif //JAVA_COMPILER_NUMBER_H
