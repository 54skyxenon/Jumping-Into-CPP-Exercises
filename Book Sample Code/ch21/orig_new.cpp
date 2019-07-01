#include <iostream>
#include "linkedlist.h"

using namespace std;

int main ()
{
	Node *p_list = NULL;
	for ( int i = 0; i < 10; ++i )
	{
		int value;
		cout << "Enter value for list node: ";
		cin >> value;
		p_list = addNode( p_list, value );
	}
	printList( p_list );
}
