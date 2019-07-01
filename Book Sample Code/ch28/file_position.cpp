#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	fstream file ( "highscores.txt", ios::in | ios::out );
	if ( ! file.is_open() )
	{
		cout << "Could not open file!" << '\n';
		return 0;
	}
	int new_high_score;
	cout << "Enter a new high score: ";
	cin >> new_high_score;

	// the while loop below searches the file until it finds a value
	// less than the current high score; at this point, we know we
	// want to insert our high score right before that value. To make
	// sure that we know the right position, we keep track of the
	// position prior to the current score; the pre_score_pos
	streampos pre_score_pos = file.tellg();
	int cur_score;
	while ( file >> cur_score )
	{
		if ( cur_score < new_high_score )
		{
			break;
		}
		pre_score_pos = file.tellg();
	}

	// if fail is true, and we aren't at eof, there was some bad input
	if ( file.fail() && ! file.eof() )
	{
		cout << "Bad score/read--exiting";
		return 0;
	}
	// without calling clear, we won't be able to write to the file if
	// we hit eof
	file.clear();

	// return to the point right before the last score we read, for reading
	// so that we can read in all the scores that are less than our
	// high score, and move them one position later in the file
	file.seekg( pre_score_pos );

	// now we will read in all the scores, starting with the one we
	// previously read in
	vector<int> scores;
	while ( file >> cur_score )
	{
		scores.push_back( cur_score );
	}
	// we expect to reach the end of file via this read loop because we
	// want to read in all scores in the file
	if ( ! file.eof() )
	{
		cout << "Bad score/read--exiting";
		return 0;
	}
	// since we hit eof, we need to clear the file again so that we can
	// write to it
	file.clear();

	// seek back to the position we want to do our insert
	file.seekp( pre_score_pos );
	// if we are not writing to the beginning of the file, we need to
	// include a newline. The reason is that when a number is read in
	// it stops at the first whitepsace, so the position we are at
	// prior to writing is at the end of the number rather than
	// at the start of the next line
	if ( pre_score_pos != std::streampos(0) )
	{
		file << endl;
	}
	// write out our new high score
	file << new_high_score << endl;
	// loop through the rest of the scores, outputting all of them
	for ( vector<int>::iterator itr = scores.begin(); itr != scores.end(); ++itr )
	{
		file << *itr << endl;
	}
}
