#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct Person
{
	Person (
		const string& firstname,
		const string& lastname
	)
	: _firstname( firstname )
	, _lastname( lastname )
	{}

	string _firstname;
	string _lastname;
};

int main ()
{
	vector<Person> people;

	people.push_back( Person( "Joe", "Smith" ) );
	people.push_back( Person( "Tonya", "Malligans" ) );
	people.push_back( Person( "Jerome", "Noboggins" ) );
	people.push_back( Person( "Mary", "Suzie-Purple" ) );


	int firstname_max_width = 0;
	int lastname_max_width = 0;

	// get the max widths

	for ( vector<Person>::iterator iter = people.begin();
		iter != people.end();
		++iter )
	{
		if ( iter->_firstname.length() > firstname_max_width )
		{
			firstname_max_width = iter->_firstname.length();
		}
		if ( iter->_lastname.length() > lastname_max_width )
		{
			lastname_max_width = iter->_lastname.length();
		}
	}

	// print the elements of the vector
	for ( vector<Person>::iterator iter = people.begin();
		iter != people.end();
		++iter )
	{
		cout << setw( firstname_max_width ) << left << iter->_firstname;
		cout << " ";
		cout << setw( lastname_max_width ) << left << iter->_lastname;
		cout << endl;
	}
}
