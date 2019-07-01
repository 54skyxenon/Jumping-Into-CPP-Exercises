#include <iostream>
using namespace std;

#include "caseInsensitive.h"

caseInsensitive::caseInsensitive(string myString)
: myString(myString)
{}

int caseInsensitive::compare(const string& lhs, const string& rhs)
{
    string str1 = lhs;
    string str2 = rhs;

    for (unsigned int i = 0; i < str1.length(); i++)
        if (str1[i] >= 65 && str1[i] <= 90)
            str1[i] += 32;

    for (unsigned int i = 0; i < str2.length(); i++)
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;

    if (str1 == str2)
        return 0;
    else if (str1 > str2)
        return 1;
    else
        return -1;
}

void caseInsensitive::printData()
{
    cout << endl << myString;
}

string caseInsensitive::getData()
{
    return myString;
}
