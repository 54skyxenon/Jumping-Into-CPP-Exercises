#include <iostream>

using namespace std;

int main ()
{ 
	int x;            // A normal integer
	int *p_int;       // A pointer to an integer

	p_int = & x;       // Read it, "assign the address of x to p_int"
	cout << "Please enter a number: ";
	cin >> x;         // Put a value in x, we could also use *p_int here
	cout << *p_int << '\n'; // Note the use of the * to get the value
	*p_int = 10;
	cout << x;  // outputs 10 again!
}
