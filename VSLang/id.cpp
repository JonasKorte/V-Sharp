#include "id.h"

namespace VSharp
{
    ID generateID()
    {
        ID id = "";
        
        std::random_device rd;
        std::default_random_engine re(rd());
        std::uniform_int_distribution<int> distr(MIN_VALUE, MAX_VALUE);


        for (int iter = 0; iter < ID_LENGTH; iter++)
        {
            int index = distr(re);
            id += IDChars[index];
        }

        if (std::find(existingIDs.begin(), existingIDs.end(), id) != existingIDs.end())
        {
            id = generateID();
        }
        else
        {
            existingIDs.push_back(id);
        }

        return id;
    }
}