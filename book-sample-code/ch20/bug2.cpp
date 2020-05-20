#include <iostream>

using namespace std;

struct LinkedList
{
	int val;
	LinkedList *next;
};

void printList (const LinkedList *lst)
{
	if ( lst != NULL )
	{
		cout << lst->val;
		cout << "\n";
		printList( lst->next );
	}
}

int main ()
{
	LinkedList *lst;
	lst = new LinkedList;
	lst->val = 10;
	lst->next = new LinkedList;
	lst->next->val = 11;
	printList( lst );

	return 0;
}
