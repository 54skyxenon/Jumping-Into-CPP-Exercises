#include <iostream>

using namespace std;

void printNum (int num)
{
	// the two calls in this function to cout will sandwich an inner
	// sequence containing the numbers (num+1)...99...(num+1)
	cout << num;
	// While begin is less than 9, we need to recursively print 
	// the sequence for (num+1) ... 99 ... (num+1)
	if ( num < 9 )
	{
		printNum( num + 1 );
	}
	cout << num;    
}

int main ()
{
	printNum( 1 );
}
