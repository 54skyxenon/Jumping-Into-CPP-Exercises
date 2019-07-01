#include <string>
#include <iostream>

using namespace std;

int main ()
{
	string password;
	do
	{
		cout << "Please enter your password: ";
		cin >> password;
	} while ( password != "foobar" );
	cout << "Welcome, you got the password right";
}
