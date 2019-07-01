#include <iostream>
using namespace std;

void name(string* first, string* last)
{
    cout << "Enter first: ";
    getline(cin, *first);

    if (last != NULL)
    {
        cout << "Enter last: ";
        cin >> *last;
    }
}

int main()
{
    string first, last;
    name(&first, NULL);
    cout << "Your name is: " << first << " " << last;
}
