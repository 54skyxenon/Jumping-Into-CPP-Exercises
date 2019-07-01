// the name of this program comes from the unix utility cat, which displays
// a file to the screen
#include <fstream>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	// argc should be 2 for correct execution, the program name
	// and the filename

	if ( argc != 2 ) 
	{
		// when printing out usage instructions, you can use
		// argv[ 0 ] as the file name
		cout << "usage: " << argv[ 0 ] << " <filename>" << endl;
	}
	else 
	{
		// We assume argv[ 1 ] is a filename to open
		ifstream the_file( argv[ 1 ] );
		// Always check to see if file opening succeeded
		if ( ! the_file.is_open() )
		{
			cout << "Could not open file " << argv[ 1 ] << endl;
			return 1;
		}
	
		char x;
		// the_file.get( x ) reads the next character from the file
		// into x, and returns false if the end of the file is hit
		// or if an error occurs
		while ( the_file.get( x ) )
		{
			cout << x;
		}
	} // the_file is closed implicitly here by its destructor
}
