#include <iostream>

using namespace std;

int fibonacci (int n)
{
	if ( n == 0 )
	{
		return 1;
	}
	return fibonacci( n - 1 ) + fibonacci( n - 2 );
}

int main()
{
	int n;
	cout << "Enter the number to compute fibonacci for: " << endl;
	cin >> n;
	cout << fibonacci( n );
}
