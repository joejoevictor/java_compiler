//
// Created by Joe on 5/23/2016.
//

#include <cstdio>
#include "token.h"

using namespace lexer;

Token::Token(int t)
{
    tag = t;
}

Token::~Token()
{

}

std::string Token::toString()
{
    printf("Token: %d", tag);
}