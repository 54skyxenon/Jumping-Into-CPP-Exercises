#include <iostream>

using namespace std; 

int main ()
{
	// The loop goes while x < 10, and x increases by one every loop
	for ( int x = 0; x < 10; x++ ) 
	{
		// Keep in mind that the loop condition checks 
		// the conditional statement before it loops again.
		// consequently, when x equals 10 the loop breaks.
		// x is updated before the condition is checked.    
		cout<< x << " squared is " << x * x << endl;
	}
}
