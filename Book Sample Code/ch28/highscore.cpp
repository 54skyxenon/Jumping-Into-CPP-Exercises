#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
int main ()
{
	ifstream file_reader( "highscores.txt" );
	if ( ! file_reader.is_open() )
	{
		cout << "Could not open file!" << '\n';
	}
	vector<int> scores;
	for ( int i = 0; i < 10; i++ )
	{
		int score;
		file_reader >> score;
		scores.push_back( score );
	}
}
