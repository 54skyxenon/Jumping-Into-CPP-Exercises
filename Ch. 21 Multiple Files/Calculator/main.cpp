#include <iostream>
using namespace std;

#include "Operators.h"

int main()
{
    int input1, input2, operation;
    cout << "Enter your first number, then your second (separated by a space): ";
    cin >> input1 >> input2;

    cout << "What would you like to do with them? \n 1. ADD \n 2. SUBTRACT \n 3. DIVIDE \n 4. MULTIPLY \n";
    cin >> operation;

    switch (operation)
    {
        case 1:
            cout << add(input1, input2);
            break;
        case 2:
            cout << subtract(input1, input2);
            break;
        case 3:
            cout << divide(input1, input2);
            break;
        case 4:
            cout << multiply(input1, input2);
            break;
        default:
            cout << endl << "Invalid choice!";
    }
}
