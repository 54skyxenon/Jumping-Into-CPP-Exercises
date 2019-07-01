#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int findSmallestRemainingElement (int array[], int size, int index);
void swap (int array[], int first_index, int second_index);

void sort (int array[], int size)
{
	for ( int i = 0; i < size; i++ )
	{
		int index = findSmallestRemainingElement( array, size, i );
		swap( array, i, index );
	}
}

int findSmallestRemainingElement (int array[], int size, int index) // does the sorting
{
	int index_of_smallest_value = index;
	for (int i = index + 1; i < size; i++)
	{
		if ( array[ i ] < array[ index_of_smallest_value ]  )
		{
			index_of_smallest_value = i;
		}
	}
	return index_of_smallest_value;
}


void swap (int array[], int first_index, int second_index)
{
	int temp = array[ first_index ];
	array[ first_index ] = array[ second_index ];
	array[ second_index ] = temp;
}

// small helper method to display the before and after arrays
void displayArray (int array[], int size)
{
	cout << "{";
	for ( int i = 0; i < size; i++ )
	{
		if ( i != 0 )
		{
			cout << ", "; // makes it look nicer
		}
		cout << array[ i ]; // prints out elements
	}
	cout << "}";
}

int main ()
{
	int array[ 10 ]; // declares an array with 10 elements
	srand( time( NULL ) ); // for rand function
	for ( int i = 0; i < 10; i++ ) // generates numbers in array
	{
		array[ i ] = rand() % 100;
	}

	cout << "Original array: "; // displays original array
	displayArray( array, 10 );
	cout << '\n';

	sort( array, 10 ); // sorts array

	cout << "Sorted array: "; // displays sorted array
	displayArray( array, 10 );
	cout << '\n';
	cin.get();
}
