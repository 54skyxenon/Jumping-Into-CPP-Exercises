#include <iostream>
using namespace std;

int fibonacci (int n)
{
	if ( n <= 0 ) //guard against negative inputs
	{
		return 0; //needs to return 0
	}
	if ( n == 1 ) //added second base case
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
