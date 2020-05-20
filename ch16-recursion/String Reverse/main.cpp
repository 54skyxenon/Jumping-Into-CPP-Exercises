#include <iostream>
using namespace std;

string reverse(string myString, int length)
{
    if (length == 1)
        return myString.substr(0, 1);
    return myString[length-1] + reverse(myString, length - 1);
}

int main()
{
    string toBeReversed;
    getline(cin, toBeReversed, '\n');

    cout << reverse(toBeReversed, toBeReversed.length()) << endl;
}
