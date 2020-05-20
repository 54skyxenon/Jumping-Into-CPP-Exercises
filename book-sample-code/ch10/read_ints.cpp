#include <iostream>

using namespace std;

int main ()
{
	int values[ 100 ];
	for ( int i = 0; i < 100; i++ )
	{
		cout << "Enter value " << i << ": ";
		cin >> values[ i ];
	}
}
