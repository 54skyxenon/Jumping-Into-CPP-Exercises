#include <iostream>

using namespace std; // So we can see cout and endl

int main ()
{ 
	int x = 0;  // Don't forget to declare variables
  
	while ( x < 10 ) // While x is less than 10 
	{ 
		cout << x << '\n';
		x++;             // Update x so the condition can be met eventually
	}
}

