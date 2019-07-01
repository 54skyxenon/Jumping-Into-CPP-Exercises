#include <iostream>

using namespace std;

int main ()
{
	int factorial = 1;
	for ( int i = 0; i < 10; i++ )
	{
		factorial *= i;
	}
	int sum = 0;
	for ( int i = 0; i < 10; i++ )
	{
		sum += i;
	}
	// factorial w/o two
	int factorial_without_two = 1;
	for ( int i = 0; i < 10; i++ )
	{
		if ( i == 2 )
		{
			continue;
		}
		factorial_without_two *= i;
	}
	// sum w/o two
	int sum_without_two = 0;
	for ( int i = 0; i < 10; i++ )
	{
		if ( i = 2 )
		{
			continue;
		}
		sum_without_two += i;
	}
}
