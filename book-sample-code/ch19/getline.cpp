#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string input;
	cout << "Please enter a line of text: ";
	getline( cin, input, '\n' );
	cout << "You typed in the line " << '\n' << input;
}
