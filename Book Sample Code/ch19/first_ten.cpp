#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string my_string = "abcdefghijklmnop";
	string first_ten_of_alphabet = my_string.substr( 0, 10 );
	cout << "The first ten letters of the alphabet are "
	     << first_ten_of_alphabet;
}
