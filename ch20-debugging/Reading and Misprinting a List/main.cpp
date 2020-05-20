#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *p_next;
};

int main()
{
	int val;
	Node *p_head = NULL; //initialize our head with NULL
	while ( 1 )
	{
		cout << "Enter a value, 0 to replay: " <<endl;
		cin >> val;
		if ( val == 0 ) //correct the operator
		{
			break;
		}
		Node *p_temp = new Node;
		p_temp->p_next = p_head; //link the nodes rather than have p_temp lose its node
		p_temp->val = val;
		p_head = p_temp;
	}
	Node *p_itr = p_head;
	while ( p_itr != NULL )
	{
		cout << p_itr->val << endl;
	    Node *itr_itr = p_itr; //have a pointer to the previous node for freeing memory
		p_itr = p_itr->p_next;
		delete itr_itr;
	}
}
