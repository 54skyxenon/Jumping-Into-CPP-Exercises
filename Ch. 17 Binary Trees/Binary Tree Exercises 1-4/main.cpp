#include <iostream>
#include <cmath>
using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
};

node* insert(node* tree, int val)
{
    if (tree == NULL)
    {
        node* leaf = new node;
        leaf->val = val;
        leaf->left = NULL;
        leaf->right = NULL;
        return leaf;
    }
    else if (tree->val > val)
        tree->left = insert(tree->left, val);
    else
        tree->right = insert(tree->right, val);

    return tree;
}

int getElementCount(node* tree)
{
    if (tree == NULL)
        return 0;
    else if (tree->left == NULL && tree->right == NULL)
        return 1;
    else
        return 1 + getElementCount(tree->left) + getElementCount(tree->right);
}

node* find(node* tree, int target)
{
    if (tree == NULL)
        return NULL;
    else if (tree->val == target)
        return tree;
    else if (tree->val > target)
        return find(tree->left, target);
    else
        return find(tree->right, target);
}

bool checkIfBalanced(node* tree)
{
    if (tree == NULL)
        return true;
    bool isBalanced = (abs(getElementCount(tree->left) - getElementCount(tree->right)) <= 1);

    if (checkIfBalanced(tree->left) && checkIfBalanced(tree->right))
        return isBalanced;
    else
        return false;
}

bool checkIfSorted(node* tree)
{
    if (tree->right == NULL && tree->left == NULL)
        return true;

    if (tree->left == NULL && tree->right->val >= tree->val)
        return checkIfSorted(tree->right);

    if (tree->right == NULL && tree->left->val < tree->val)
        return checkIfSorted(tree->left);

    if (tree->right->val >= tree->val && tree->left->val < tree->val)
        return checkIfSorted(tree->right) && checkIfSorted(tree->left);

    else
        return false;
}

void traverse(node* tree)
{
    if (tree != NULL)
    {
        traverse(tree->left);
        cout << tree->val << endl;
        traverse(tree->right);
    }
}

void destroyTree(node* tree)
{
    if (tree != NULL)
    {
        destroyTree(tree->right);
        destroyTree(tree->left);
        delete tree;
    }
}

int main()
{
    node* root = NULL;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an element: ";
        int input;
        cin >> input;
        root = insert(root, input);
    }

    traverse(root);
    cout << endl << "Total amount of nodes: " << getElementCount(root) << endl;

    if (checkIfBalanced(root))
        cout << "Your tree is balanced!" << endl;
    else
        cout << "Your tree is not balanced!" << endl;

    int input;
    cout << "Which node do you want to check: ";
    cin >> input;
    node* toBeChecked = find(root, input);
    if (toBeChecked != NULL && checkIfSorted(toBeChecked))
        cout << "Your tree/subtree is sorted." << endl;
    else
        cout << "Your tree is not sorted (this should not happen) or your node is not found." << endl;
}
