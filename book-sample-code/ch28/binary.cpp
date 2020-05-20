#include <fstream>
#include <string>
#include <iostream>

using namespace std;

struct PlayerRecord
{
	int age;
	int score;
	string name;
};

int main ()
{
	PlayerRecord rec;
	rec.age = 11;
	rec.score = 200;
	rec.name = "John";

	fstream a_file( "records.bin", ios::trunc | ios::binary | ios::in | ios::out );

	a_file.write( reinterpret_cast<char*>( & rec.age ), sizeof( rec.age ) );
	a_file.write(reinterpret_cast<char*>(  & rec.score ), sizeof( rec.score ) );

	int len = rec.name.length();
	a_file.write(reinterpret_cast<char*>( & len ), sizeof( len ) );

	a_file.write( rec.name.c_str(), rec.name.length() + 1 );

	PlayerRecord in_rec;

	a_file.seekg( 0, ios::beg );
	if ( ! a_file.read( reinterpret_cast<char*>( & in_rec.age ), sizeof( in_rec.age ) ) )
	{
		cout << "Error reading from file" << endl;
		return 1;
	}
	if ( ! a_file.read( reinterpret_cast<char*>(& in_rec.score ), sizeof( in_rec.score ) ) )
	{
		cout << "Error reading from file" << endl;
		return 1;
	}

	int str_len;

	if ( ! a_file.read( reinterpret_cast<char*>( & str_len ), sizeof( str_len ) ) )
	{
		cout << "Error reading from file" << endl;
		return 1;
	}

	// perform a sanity check to ensure we don't try to allocate too much
	// memory!
	if ( str_len > 0 && str_len < 10000 )
	{
		char *p_str_buf = new char[ str_len + 1 ];
		if ( ! a_file.read( p_str_buf, str_len + 1 ) ) // + 1 for null terminator
		{
			delete[] p_str_buf;
			cout << "Error reading from file" << endl;
			return 1;
		}
		// validate that the string is null-terminated
		if ( p_str_buf[ str_len ] == 0 )
		{
			in_rec.name = string( p_str_buf );
		}
		delete[] p_str_buf;
	}

	cout << in_rec.age << " " <<in_rec.score << " " << in_rec.name << endl;
}
