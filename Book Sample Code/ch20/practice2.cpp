#include <iostream>

using namespace std;

int sumValues (int *values, int n)
{
	int sum;
	for ( int i = 0; i <= n; i++ )
	{
		sum += values[ i ];
	}
	return sum;
}

int main()
{
	int size;
	cout << "Enter a size: ";
	cin >> size;
	int *values = new int[ size ];
	int i;
	while ( i < size )
	{
		cout << "Enter value to add: ";
		cin >> values[ ++i ];
	}
	cout << "Total sum is: " << sumValues( values, size );
}
