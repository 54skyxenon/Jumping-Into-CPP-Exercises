#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string user_first_name;
	string user_last_name;

	cout << "Please enter your first name: ";
	cin >> user_first_name;
	cin.ignore();
	cout << "Please enter your last name: ";
	cin >> user_last_name;
cin.ignore();

	string user_full_name = user_first_name + " " + user_last_name;

	cout << "Your name is: " << user_full_name << "\n";
}
