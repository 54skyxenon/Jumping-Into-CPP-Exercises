#include <iostream>
#include <cstdlib>
#include "vectorOfInt.h"
using namespace std;

int main()
{
    int length, option;
    cout << "Specify the length of your vector: ";
    cin >> length;

    while (length < 0)
    {
        cout << "Don't be dum" << endl;
        cin >> length;
    }
    vectorOfInt* myVector = new vectorOfInt(length);
    // vectorOfInt* myVector2 = new vectorOfInt(*myVector);
    // invokes copy constructor with pointers, notice the dereference of the pointer to the object used with new!!

    // vectorOfInt* myVector2 = new vectorOfInt(length);
    // *myVector2 = *myVector;
    // invokes assignment operator with pointers, notice how they must BOTH be dereferenced!!
    do
    {
        int index, val;
        cout << "\n 1. Get value at index \n 2. Set value at index \n 3. Push-back a value \n 4. Push-front a value \n 5. Print vector"
        << "\n 6. Clear screen \n 7. Quit" << endl;

        cin >> option;
        switch (option)
        {
            case 1:
                cout << "Enter the index of the vector: ";
                cin >> index;
                cout << myVector->getIndex(index) << endl;
                break;
            case 2:
                cout << "Enter the index of the vector: ";
                cin >> index;
                cout << "Enter the value to set that index with: ";
                cin >> val;
                myVector->setIndex(index, val);
                break;
            case 3:
                cin >> val;
                myVector->pushback(val);
                break;
            case 4:
                cin >> val;
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
               // delete myVector2;
                break;
        }
    } while (option != 7);
}
