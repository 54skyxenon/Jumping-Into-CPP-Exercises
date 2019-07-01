#include <iostream>
#include <vector>

#include "VectorSearcher.h"

int main()
{
    VectorSearcher<std::string> mySearchableVector;
    mySearchableVector.fetch();

    if (mySearchableVector.elementInVector())
        std::cout << "Your element has been found in the vector!" << std::endl;
    else
        std::cout << "Your element does not exist!" << std::endl;
}
