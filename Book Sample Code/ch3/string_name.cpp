#include <iostream>
#include <string>


using namespace std;

int main ()
{
	string user_name;

	cout << "Please enter your name: ";
	cin >> user_name;
	cin.ignore();
	cout << "Hi " << user_name << "\n";
}
