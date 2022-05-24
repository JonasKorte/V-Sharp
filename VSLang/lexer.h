#pragma once
#include "api.h"
#include "id.h"
#include <iostream>
#include <vector>
#include <string>

namespace VSharp
{
    enum VSLANG_API TokenType
    {
        KEYWORD = 0,
        IDENT = 1,
        OPERATOR = 2,
        STRING = 3,
        NUMBER = 4,
        BOOLEAN = 5,
        COMMENT = 6
    };

    struct VSLANG_API Token
    {
        ID id;
        std::string value;
        TokenType type;

    };
    typedef VSLANG_API std::vector<Token> TokenList;

    TokenList VSLANG_API analyze(std::string data);
}