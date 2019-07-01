#include <iostream>

#define DEBUG

using namespace std;

int main ()
{
	int x;
	int y;
	cout << "Enter value for x: ";
	cin >> x;
	cout << "Enter value for y: ";
	cin >> y;
	x *= y;
 
#ifdef DEBUG
	cout << "Variable x: " << x << '\n' << "Variable y: " << y;
#endif
	// further use of x and y
}
