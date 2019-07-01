#include <iostream>

using namespace std;

class Foo // Foo is a common placeholder name in computer programming
{
	public:
	Foo () { cout << "Foo's constructor" << endl; }
};

class Bar : public Foo
{
	public:
	Bar () { cout << "Bar's constructor" << endl; }
};

int main ()
{
	// a lovely elephant ;)
	Bar bar;
}
