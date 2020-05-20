#include <iostream>

using namespace std;

void recurse (int count) // Each call gets its own count
{
	cout << count << "\n";
	// It is not necessary to increment count since each function's
	// variables are separate (so the count in each stack frame will 
	// be initialized one greater than the last count)
	recurse( count + 1 );
}

int main ()
{
	recurse( 1 ); // First function call, so it starts at one        
}
