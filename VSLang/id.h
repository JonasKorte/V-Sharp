#pragma once
#include "api.h"
#include <string>
#include <vector>
#include <random>

#define ID_LENGTH 20
#define MIN_VALUE 0
#define MAX_VALUE 60

namespace VSharp
{
    typedef VSLANG_API std::string ID;

    // List all characters that are allowed in an ID
    const char* const IDChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    std::vector<ID> existingIDs;
    
    ID VSLANG_API generateID();
}