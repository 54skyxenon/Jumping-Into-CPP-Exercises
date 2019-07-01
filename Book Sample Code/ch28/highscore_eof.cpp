#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	ifstream file_reader( "myfile.txt" );
	if ( ! file_reader.is_open() )
	{
		cout << "Could not open file!" << '\n';
	}
	vector<int> scores;
	for ( int i = 0; i < 10; i++ )
	{
		
		int score;
		if ( ! ( file_reader >> score ) )
		{
			break;
		}

		scores.push_back( score );
	}
}
