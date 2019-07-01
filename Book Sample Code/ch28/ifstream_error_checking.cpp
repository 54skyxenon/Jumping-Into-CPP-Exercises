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
}
