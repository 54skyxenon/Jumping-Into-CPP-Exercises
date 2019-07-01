#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct node
{
	int key_value;
	node *p_left;
	node *p_right;
	node *parent;
};

node *search (node *p_tree, int key)
{
	if ( p_tree == NULL )
		return NULL;

	else if ( key == p_tree->key_value )
		return p_tree;

	else if ( key < p_tree->key_value )
		return search( p_tree->p_left, key );

	else
		return search( p_tree->p_right, key );
}

node* insert (node *p_tree, int key, node* parent)
{
	if ( p_tree == NULL )
	{
		node* p_new_tree = new node;
		p_new_tree->p_left = NULL;
		p_new_tree->p_right = NULL;
		p_new_tree->key_value = key;
		p_new_tree->parent = parent;
		return p_new_tree;
	}

	else if( key < p_tree->key_value )
		p_tree->p_left = insert( p_tree->p_left, key, p_tree );

	else
		p_tree->p_right = insert( p_tree->p_right, key, p_tree );

    return p_tree;
}

int countNodes(node* p_tree)
{
    if (p_tree == NULL)
        return 0;
    else
        return 1 + countNodes(p_tree->p_left) + countNodes(p_tree->p_right);
}

void traverse(node* p_tree)
{
    if ( p_tree != NULL )
	{
		traverse( p_tree->p_left );
		traverse( p_tree->p_right );
		cout << p_tree->key_value << endl;
 	}
}

void destroy_tree (node *p_tree)
{
	if ( p_tree != NULL )
	{
		destroy_tree( p_tree->p_left );
		destroy_tree( p_tree->p_right );
		delete p_tree;
 	}
}

void destroy_tree_Iteratively(node* p_tree)
{
    int nodesDestroyed = 0;

    while (p_tree != NULL)
    {
        if (p_tree->p_left == NULL && p_tree->p_right == NULL)
        {
            node* placeHolder = p_tree;
            p_tree = p_tree->parent;
            if (p_tree != NULL && placeHolder->key_value < p_tree->key_value)
            {
                delete placeHolder;
                nodesDestroyed++;
                p_tree->p_left = NULL;
            }
            else if (p_tree != NULL && placeHolder->key_value >= p_tree->key_value)
            {
                delete placeHolder;
                nodesDestroyed++;
                p_tree->p_right = NULL;
            }
            else if (p_tree == NULL)
            {
                delete placeHolder;
                nodesDestroyed++;
                p_tree = NULL;
            }
        }

        else if (p_tree->p_left != NULL)
            p_tree = p_tree->p_left;
        else if (p_tree->p_right != NULL)
            p_tree = p_tree->p_right;
    }
    cout << "You've deleted " << nodesDestroyed << " nodes!" << endl;
}

int main()
{
    srand(time(NULL));

    int choice = 0;
    int node_value = 0;
    node *p_root = NULL;

    for (int i = 0; i < 42; i++)
        p_root = insert(p_root, rand() % 10000, NULL);

    cout << countNodes(p_root) << " nodes in tree!" << endl;
    traverse(p_root);
    destroy_tree_Iteratively(p_root);
    p_root = NULL;
}
