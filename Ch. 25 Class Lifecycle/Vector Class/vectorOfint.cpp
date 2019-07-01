#include <iostream>
#include "vectorOfInt.h"
using namespace std;

vectorOfInt::vectorOfInt()
{
    vecHead = new int[32];
    numOfElements = 32;
    indexOfLastOccupied = 0;

    for (int i = 0; i < 32; i++)
        vecHead[i] = 0;
}

vectorOfInt::vectorOfInt(int length)
{
    vecHead = new int[length];
    numOfElements = length;
    indexOfLastOccupied = 0;

    for (int i = 0; i < length; i++)
        vecHead[i] = 0;
}

vectorOfInt::~vectorOfInt()
{
    cout << "Destructor is being called!" << endl;
    delete[] vecHead;
    vecHead = NULL;
}

int vectorOfInt::getIndex(int index)
{
    while (!cin || index >= numOfElements || index < 0)
    {
        cin.clear();
        cin.ignore();
        cout << "U are dum m8, try again: ";
        cin >> index;
    }

    return vecHead[index];
}

void vectorOfInt::setIndex(int index, int val)
{
    while (!cin || index > numOfElements || index < 0)
    {
        cin.clear();
        cin.ignore();
        cout << "U are dum m8, try again (enter the index again): ";
        cin >> index;
    }

    if (index > indexOfLastOccupied)
        indexOfLastOccupied = index + 1;

    vecHead[index] = val;
}

void vectorOfInt::pushback(int val)
{
    if (indexOfLastOccupied < numOfElements)
        vecHead[indexOfLastOccupied++] = val;
    else
    {
        vecHead = resizeVec();
        vecHead[indexOfLastOccupied++] = val;
    }
}

void vectorOfInt::pushfront(int val)
{
    int tmp = vecHead[0];
    indexOfLastOccupied++;
    vecHead[0] = val;

    if (numOfElements <= indexOfLastOccupied)
        vecHead = resizeVec();
    for (int i = numOfElements - 1; i > 0; i--)
    {
        if (i == 1)
            vecHead[i] = tmp;
        else
            vecHead[i] = vecHead[i - 1];
    }
}

int* vectorOfInt::resizeVec()
{
    if (numOfElements == 0)
        numOfElements++;

    int* newVec = new int[numOfElements * 2];

    for (int i = 0; i < numOfElements; i++)
        newVec[i] = vecHead[i];

    for (int i = numOfElements; i < numOfElements * 2; i++)
        newVec[i] = 0;

    delete[] vecHead;
    vecHead = NULL;
    numOfElements *= 2;

    return newVec;
}

void vectorOfInt::print()
{
    for (int i = 0; i < numOfElements; i++)
        cout << i << ". " << vecHead[i] << endl;
}

vectorOfInt& vectorOfInt::operator= (const vectorOfInt &originalVec) //further test copy constructors and assignment operators
{
    cout << "Assignment operator is being called!" << endl;

    if (this == &originalVec)
        return *this;

    delete[] this->vecHead;
    this->vecHead = new int[numOfElements];

    for (int i = 0; i < numOfElements; i++)
        this->vecHead[i] = originalVec.vecHead[i];

    this->numOfElements = originalVec.numOfElements;
    this->indexOfLastOccupied = originalVec.indexOfLastOccupied;

    return *this;
}   //void statements cannot chain complicated expressions like (a = b) = c
    //if this function was returned by value, it would invoke the copy constructor, then return, then destroy the object copy, wasting time

vectorOfInt::vectorOfInt(const vectorOfInt &originalVec)
:vecHead(NULL)
{
    cout << "Copy constructor is being called!" << endl;
    this->vecHead = new int[originalVec.numOfElements];
    this->numOfElements = originalVec.numOfElements;
    this->indexOfLastOccupied = originalVec.indexOfLastOccupied;

    for (int i = 0; i < numOfElements; i++)
        this->vecHead[i] = originalVec.vecHead[i];
}
