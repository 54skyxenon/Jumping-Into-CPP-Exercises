#include <iostream>

using namespace std;

struct PlayerInfo
{
	int skill_level;
	string name;
};

using namespace std;

int main ()
{
	// like normal variable types, you can make arrays of structures
	PlayerInfo players[ 5 ]; 
	for ( int i = 0; i < 5; i++ )
	{
		cout << "Please enter the name for player : " << i << '\n';
		// first access the element of the array, using normal
		// array syntax; then access the field of the structure
		// using the '.' syntax
		cin >> players[ i ].name;
		cout << "Please enter the skill level for " << players[ i ].name << '\n';
		cin >> players[ i ].skill_level;
	}
	for ( int i = 0; i < 5; ++i )
	{
		cout << players[ i ].name << " is at skill level " << players[ i ].skill_level << '\n';
	}
}
