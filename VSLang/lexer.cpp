#include "lexer.h"
namespace VSharp
{
    TokenList analyze(std::string data)
    {
        TokenList tokens;

        std::string token = "";

        for (int i = 0; i < data.length(); i++)
        {
            char c = data.c_str()[i];
            token += c;

            // Check for whitespaces & newlines
            if (c == ' ' || c == '\n')
            {
                token = "";
                continue;
            }

            // Check for operators
            if (c == '=' || c == '+'|| c == '-') // Add Other Operators
            {
                std::string tokenValue = "";
                tokenValue += c;
                Token currentToken;
                currentToken.id = generateID();
                currentToken.type = TokenType::OPERATOR;
                currentToken.value = tokenValue;
                tokens.push_back(currentToken);
                token = "";
                continue;
            }


            // Check for keywords
            if (token == "function" 
            || token == "return"
            || token == "namespace" 
            || token == "class" 
            || token == "var" 
            || token == "struct" 
            || token == "enum" 
            || token == "public" 
            || token == "private" 
            || token == "static"
            || token == "abstract"
            || token == "virtual"
            || token == "override"
            || token == "if"
            || token == "else"
            || token == "elseif"
            || token == "for"
            || token == "foreach"
            || token == "while"
            || token == "continue"
            || token == "switch"
            || token == "break"
            || token == "case") // Add Missing Keywords
            {
                try 
                {
                    char nextChar = data.c_str()[i + 1];
                    if (nextChar != ' ')
                    {
                        continue;
                    }
                } catch (std::exception e)
                {
                    std::cout << "Error: " << e.what() << std::endl;
                    continue;;
                }

                std::string tokenValue = token;
                Token currentToken;
                currentToken.id = generateID();
                currentToken.type = TokenType::KEYWORD;
                currentToken.value = tokenValue;
                tokens.push_back(currentToken);
                token = "";
                continue;
            }
        }
        

        return tokens;
    }
}