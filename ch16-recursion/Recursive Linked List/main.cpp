#include <iostream>
#include <string>

using namespace std;

struct node
{
    string keyVal;
    node* next;
};

void traverse(node* restOfList)
{
    if (restOfList != NULL)
    {
        cout << restOfList->keyVal << endl;
        traverse(restOfList->next);
    }
}

node* addElement(node* restOfList, string input)
{
    if (restOfList == NULL)
    {
         node* newElement = new node;
         newElement->keyVal = input;
         newElement->next = NULL;
         return newElement;
    }

    restOfList->next = addElement(restOfList->next, input);
    return restOfList;
}

node* removeElement(node* restOfList, string input)
{
    if (restOfList == NULL)
    {
        cout << "Sorry, your element wasn't found!" << endl;
        return NULL;
    }
    else if (restOfList->keyVal == input)
    {
        if (restOfList->next == NULL)
        {
            delete restOfList;
            return NULL;
        }
        else
        {
            node* placeholder = restOfList->next;
            delete restOfList;
            return placeholder;
        }
    }
    else
    {
        restOfList->next = removeElement(restOfList->next, input);
        return restOfList;
    }
}

int main()
{
    node* headOfList = NULL;
    int numInputs;

    cout << "Enter the number of strings you want to enter: ";
    cin >> numInputs;

    for (int i = 0; i < numInputs; i++)
    {
        string input;
        cout << "Enter your string: ";
        cin >> input;

        while (!cin)
        {
            cin.clear();
            cin.ignore();
            cout << "Incompatible input, try again: ";
            cin >> input;
        }

        headOfList = addElement(headOfList, input);
    }

    cout << endl << "Your list is: " << endl;
    traverse(headOfList);

    while (headOfList != NULL)
    {
        cout << "Enter an element to remove: ";
        string input;
        cin >> input;

        while (!cin)
        {
            cin.clear();
            cin.ignore();
            cout << "Incompatible input, try again: ";
            cin >> input;
        }

        headOfList = removeElement(headOfList, input);
        cout << endl;

        traverse(headOfList);
        cout << endl;
    }
}
