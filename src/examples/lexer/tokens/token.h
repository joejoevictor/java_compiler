//
// Created by Joe on 5/23/2016.
//

#ifndef JAVA_COMPILER_TOKEN_H
#define JAVA_COMPILER_TOKEN_H

#include <string>
#include "../tag.h"

namespace lexer {
    class Token;
}

class lexer::Token {
private:
    int tag;

public:
    Token(int t);
    ~Token();

    std::string toString();
};


#endif //JAVA_COMPILER_TOKEN_H
