#include <string>
#include <iostream>

using namespace std;
 
int main ()
{
	string password;
	while ( 1 )
	{
		cout << "Please enter your password: ";
		cin >> password;
		if ( password == "foobar" )
		{
			break;
		}
	}
	cout << "Welcome, you got the password right";
}

