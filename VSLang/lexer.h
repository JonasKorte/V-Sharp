#pragma once
#include <vector>
#include <string>

namespace VSharp
{
    enum TokenType
    {
        KEYWORD = 0,
        IDENT = 1,
        OPERATOR = 2,
        STRING = 3,
        NUMBER = 4,
        BOOLEAN = 5,
        COMMENT = 6
    };

    struct Token
    {
        ID id;
        std::string value;
        TokenType type;

    };
    typedef std::vector<Token> TokenList;
}