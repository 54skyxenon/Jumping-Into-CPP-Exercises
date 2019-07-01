#include <iostream>
#include <cstdlib>
#include "vectorOfInt.h"

using namespace brandonsIntVector;

int main()
{
    int length, option;
    std::cout << "Specify the length of your vector: ";
    std::cin >> length;

    while (length < 0)
    {
        std::cout << "Don't be dum" << std::endl;
        std::cin >> length;
    }

    vectorOfInt* myVector = new vectorOfInt(length);

    //brandonsIntVector::vectorOfInt* myVector = new brandonsIntVector::vectorOfInt(length);
    //with fully qualified name without using declaration

    do
    {
        int index, val;
        std::cout << "\n 1. Get value at index \n 2. Set value at index \n 3. Push-back a value \n 4. Push-front a value \n 5. Print vector"
        << "\n 6. Clear screen \n 7. Quit" << std::endl;

        std::cin >> option;
        switch (option)
        {
            case 1:
                std::cout << "Enter the index of the vector: ";
                std::cin >> index;
                std::cout << myVector->getIndex(index) << std::endl;
                break;
            case 2:
                std::cout << "Enter the index of the vector: ";
                std::cin >> index;
                std::cout << "Enter the value to set that index with: ";
                std::cin >> val;
                myVector->setIndex(index, val);
                break;
            case 3:
                std::cin >> val;
                myVector->pushback(val);
                break;
            case 4:
                std::cin >> val;
                myVector->pushfront(val);
                break;
            case 5:
                myVector->print();
                break;
            case 6:
                system("cls");
                break;
            case 7:
                delete myVector;
                break;
        }
    } while (option != 7);
}
