#include <iostream>
using namespace std;

void name(string* first, string* last)
{
    cout << "Enter first: ";
    cin >> *first;
    cout << "Enter last: ";
    cin >> *last;
}

int main()
{
    string first, last;
    name(&first, &last);
    cout << "Your name is: " << first << " " << last;
}
