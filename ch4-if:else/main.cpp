#include <iostream>
using namespace std;

string username;
string password;

int main()
{
    cout << "Please enter your username." << endl;
    cin >> username;
    cout << "Please enter your password." << endl;
    cin >> password;

    if ( (username == "potato" && password == "salad") || (username == "brandon" && password == "liang") || (username == "spongebob" && password == "squarepants") )
    {
        cout << "Access granted!" << endl;
    }

    else
    {
        cout << "Access denied." << endl;
    }

}
