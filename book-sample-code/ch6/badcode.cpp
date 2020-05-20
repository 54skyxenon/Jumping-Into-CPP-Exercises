#include <iostream>   // needed for cout

using namespace std;

int main ()
{
	int result = add( 1, 2 );
	cout << "The result is: " << result << '\n';
	cout << "Adding 3 and 4 gives us: " << add( 3, 4 );
}

int add (int x, int y)
{
	return x + y;
}
