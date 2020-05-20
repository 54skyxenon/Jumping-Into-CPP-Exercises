#include <iostream>
using namespace std;

#include "reverseAlpha.h"

reverseAlpha::reverseAlpha(string myString)
: myString(myString)
{}

int reverseAlpha::compare(const string& lhs, const string& rhs)
{
    if (lhs == rhs)
        return 0;
    else if (lhs > rhs)
        return -1;
    else
        return 1;
}

void reverseAlpha::printData()
{
    cout << endl << myString;
}

string reverseAlpha::getData()
{
    return myString;
}
