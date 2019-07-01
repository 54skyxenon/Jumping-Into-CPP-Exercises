#include <iostream>

using namespace std;

int main ()
{
	int votes[ 10 ];

	// make sure the election isn't rigged (by clearing out the array)
	for ( int i = 0; i < 10; ++i )
	{
		votes[ i ] = 0;
	}

	int candidate;
	cout << "Vote for the candidate of your choice, using numbers: 0) Joe 1) Bob 2) Mary 3) Suzy 4) Margaret 5) Eleanor 6) Alex 7) Thomas 8) Andrew 9) Ilene" << '\n';
	cin >> candidate;
	
	// enter votes until the user exits by entering a non-candidate number
	while ( 0 <= candidate && candidate <= 9 )
	{
		// notice that we can't use a do-while loop because we need to
		// check that the candidate is in the right range before
		// updating the array. A do-while loop would require reading in 
		// the candidate value, then checking it, then incrementing the 
		// vote.
		votes[ candidate ]++;
		cout << "Please enter another vote: ";
		cin >> candidate;
	}
	// display the votes
	for ( int i = 0; i < 10; ++i )
	{
		cout << votes[ i ] << '\n';
	}
}
