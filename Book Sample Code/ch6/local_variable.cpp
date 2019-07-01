#include <iostream>

using namespace std;
void changeArgument (int x)
{
	x = x + 5;
}

int main()
{
	int y = 4;
	changeArgument( y ); // y will be unharmed by the function call
	cout << y; // still prints 4
}
