#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Reverse(int anArray[], int elementNum, int length)
{
    if (elementNum != length - 1)
        Reverse(anArray, elementNum + 1, length);
    cout << anArray[elementNum] << endl;
}

int main()
{
    srand(time(NULL));
    int theArray[10];

    for (int i = 0; i < 10; i++)
        theArray[i] = rand() % 100;

    cout << "Original array: " << endl;

    for (int i = 0; i < 10; i++)
        cout << theArray[i] << endl;

    cout << endl << "Reversed: " << endl;
    Reverse(theArray, 0, 10);
}
