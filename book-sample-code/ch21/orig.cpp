#include <iostream>

using namespace std;

struct Node
{
	Node *p_next;
	int value;
};

Node* addNode (Node* p_list, int value)
{
	Node *p_new_node = new Node;
	p_new_node->value = value;
	p_new_node->p_next = p_list;

	return p_new_node;
}

void printList (const Node* p_list)
{
	const Node* p_cur_node = p_list;
	while ( p_cur_node != NULL )
	{
		cout << p_cur_node->value << endl;
		p_cur_node = p_cur_node->p_next;
	}
}

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
