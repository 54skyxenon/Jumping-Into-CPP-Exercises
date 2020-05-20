#include <iostream>

using namespace std;

int main ()
{
	int thisisanumber;

	cout << "Please enter a number: ";
	cin >> thisisanumber;
	cin.ignore();
	cout << "You entered: " << thisisanumber << "\n";
	cin.get();
}
