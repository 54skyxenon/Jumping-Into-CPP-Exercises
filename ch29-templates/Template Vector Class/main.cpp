#include <iostream>
#include <cstdlib>
#include "vectorOfAll.h"

int main()
{
    unsigned int length;
    unsigned int option;
    std::cout << "Specify the length of your vector: ";
    std::cin >> length;

    while (!length)
    {
        std::cout << "Don't be dum" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cin >> length;
    }

    vectorOfAll<float>* myVector = new vectorOfAll<float>(length);

    do
    {
        int index;
        float val;

        std::cout << "\n 1. Get value at index \n 2. Set value at index \n 3. Push-back a value \n"
        << " 4. Push-front a value \n 5. Print vector \n 6. Clear screen \n 7. Quit" << std::endl;

        std::cin >> option;
        while (!option || option > 7)
        {
            std::cout << "Don't be dum" << std::endl;
            std::cin.clear();
            std::cin.sync();
            std::cin >> option;
        }
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
                std::cout << "Enter the value to put in: ";
                std::cin.sync();
                std::cin >> val; //this part varies for every data type entered
                myVector->setIndex(index, val);
                break;
            case 3:
                std::cout << "Enter the value to put in: ";
                std::cin.sync();
                std::cin >> val;
                myVector->pushback(val);
                break;
            case 4:
                std::cout << "Enter the value to put in: ";
                std::cin.sync();
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
