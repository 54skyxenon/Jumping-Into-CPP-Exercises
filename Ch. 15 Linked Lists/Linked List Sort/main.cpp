#include <iostream>
using namespace std;

struct node
{
    int val;
    node* next;
    node* prev;
};

node* headOfList = NULL;

void displayList()
{
    node* tracker = headOfList;
    cout << endl << "Your list contains the following: " << endl;
    while (tracker != NULL)
    {
        cout << tracker->val << endl;
        tracker = tracker->next;
    }
}

void sortList()
{
    node* tracker = headOfList->next;
    while (tracker != NULL)
    {
        node* t2 = tracker->prev;

        while (tracker->val < t2->val && t2 != NULL && tracker != NULL)
        {
            int temp = tracker->val;
            tracker->val = t2->val;
            t2->val = temp;
            tracker = tracker->prev;
        }
        tracker = tracker->next;
    }
}

void addObj(int num)
{
    node* newObj = new node;
    newObj->val = num;
    newObj->next = headOfList;
    newObj->prev = NULL;

    if (headOfList != NULL)
        headOfList->prev = newObj;

    headOfList = newObj;
    sortList();
    displayList();
}

int main()
{
    int selection;
    cout << "Please enter the number that you wish to add (-1 to quit): ";
    cin >> selection;

    while (selection != -1)
    {
        addObj(selection);
        cout << endl << "Please enter the number that you wish to add (-1 to quit): ";
        cin >> selection;
    }
}
