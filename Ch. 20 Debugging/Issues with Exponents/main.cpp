#include <iostream>
using namespace std;

int exponent (int base, int exp)
{
	int running_value = 1; //initialized running_value

	for ( int i = 0; i < exp; i++ )
	{
		running_value *= base;
	}
	return running_value; //return running_value instead of base
}

int main()
{
	int base;
	int exp;

	cout << "Enter a base value: ";
	cin >> base;
	cout << "Enter an exponent: ";
    cin >> exp; //need to input exp
	cout << exponent( base, exp ); //swap arguments and print out result
}

