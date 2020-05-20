#include <fstream>
#include <iostream>

using namespace std;
int main ()
{
	ifstream file_reader( "myfile.txt" );
	if ( ! file_reader.is_open() )
	{
		cout << "Could not open file!" << '\n';
	}
	int number;
	// here, we're checking if reading in an integer succeeded or not
	if ( file_reader >> number )
	{
		cout << "The value is: " << number;
	}
}
