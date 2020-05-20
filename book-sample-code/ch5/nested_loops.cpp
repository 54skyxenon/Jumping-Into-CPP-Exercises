#include <iostream>

using namespace std;

int main ()
{
	for ( int x = 0; x < 10; ++x )
	{
		cout << '\t' << x; // \t represents a tab character, which will format our output nicely
	}

	cout << '\n';

	for ( int i = 0; i < 10; ++i )
	{
		cout << i;
		
		for ( int j = 0; j < 10; ++j )
		{
			cout << '\t' << i * j;
		}
		cout << '\n';
	}
}
