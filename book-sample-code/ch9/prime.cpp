#include <iostream>

bool isDivisible (int number, int divisor);
bool isPrime (int number);

using namespace std;

int main ()
{
	for ( int i = 0; i < 100; i++ )
	{
		if ( isPrime( i ) )
		{
			cout << i << endl;
		}
	} 
}

bool isPrime (int number)
{
	for ( int i = 2; i < number; i++)
	{
		if ( isDivisible( number, i  ) )
		{
			return false;
		}
	}
	return true;
}

bool isDivisible (int number, int divisor)
{
	return number % divisor == 0;
}
