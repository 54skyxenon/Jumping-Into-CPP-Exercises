#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void findMMValue(int theArray[])
{
    int max = theArray[0], min = theArray[0];

    for (int i = 0; i < 50; i++)
        if (theArray[i] > max)
            max = theArray[i];

    for (int i = 0; i < 50; i++)
        if (theArray[i] < min)
            min = theArray[i];

    cout << "Your highest value is: " << max << endl;
    cout << "Your lowest value is: " << min << endl;
}

void findAverage(int theArray[])
{
    int sum = 0;

    for (int i = 0; i < 50; i++)
        sum += theArray[i];

    cout << "The average of those 50 values is: " << sum/50 << endl;
}

void random(int theArray[])
{
    int limit;
    cout << endl << "Limit: ";
    cin >> limit;
    for (int i = 0; i < 50; i++)
        theArray[i] = rand() % limit;

    findMMValue(theArray);
    findAverage(theArray);

    for (int i = 0; i < 50; i++)
        cout << endl << theArray[i];
}

void manual(int theArray[])
{
    cout << "Enter 50 numbers, have fun: ";
    for (int i = 0; i < 50; i++)
        cin >> theArray[i];

    findMMValue(theArray);
    findAverage(theArray);

    for (int i = 0; i < 50; i++)
        cout << endl << theArray[i];
}

int main()
{
    srand(time(NULL));
    int anArray[50];
    int choice;
    cout << "How do you want to go about this: \n 1. Input Manually \n 2. Randomly generate" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            manual(anArray);
            break;
        case 2:
            random(anArray);
            break;
        default:
            cout << "You don't like following instructions, do you." << endl;
            break;
    }
}
