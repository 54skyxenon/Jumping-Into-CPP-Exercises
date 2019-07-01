#include <iostream>

using namespace std;

int sumValues (int *values, int n)
{
	int sum = 0; //initialize sum
	for ( int i = 0; i < n; i++ ) //make sure it's < so array does not go out of bounds4
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
	int i = 0; //i needs to be initialized

	while ( i < size )
	{
		cout << "Enter value to add: ";
		cin >> values[ i++ ]; //change to postfix
	}
	cout << "Total sum is: " << sumValues( values, size );
}
