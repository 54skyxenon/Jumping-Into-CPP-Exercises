#include <iostream>
using namespace std;

int countOccurences(const string &needle, const string &haystack)
{
    int occurences = 0;

    for (unsigned int i = haystack.find(needle, 0); i != string::npos; i = haystack.find(needle, i))
    {
        occurences++;
        i++;
    }

    return occurences;
}

int main()
{
    string needle, haystack;

    cout << "Enter your \"needle\" string: ";
    getline(cin, needle, '\n');
    cout << "Now enter your \"haystack\" string: ";
    getline(cin, haystack, '\n');

    cout << endl << countOccurences(needle, haystack) << " occurences of " << needle << " in " << haystack << endl;
}
