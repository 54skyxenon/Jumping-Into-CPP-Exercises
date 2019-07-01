#include <iostream>

using namespace std;

int sumArray (int values[], int size)
{
	int sum = 0;
	// this array stops when i == size. Why? The last element is size - 1
	for ( int i = 0; i < size; i++ ) 
	{
		sum += values[ i ];
	}
	return sum;
}

int main ()
{
	int values[ 10 ];
	for ( int i = 0; i < 10; i++ )
	{
		cout << "Enter value " << i << ": ";
		cin >> values[ i ];
	} 
	cout << sumArray( values, 10 ) << endl;
}
