#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string password;

	cout << "Enter your password: " << "\n";
	getline( cin, password, '\n' );
	if ( password == "xyzzy" )
	{
		cout << "Access allowed" << "\n";
	}
	else
	{
		cout << "Bad password. Denied access!" << "\n";
		return 0;
	}
	// continue onward!
}

