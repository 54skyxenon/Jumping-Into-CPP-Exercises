#include <iostream>
using namespace std;

struct node
{
    string x;
    node *next;
    node *prev;
};

void addObj();
void search();
void display();
void remove();
bool isLastElement(node* element);
bool isFirstElement(node* element);
bool isOnlyElement(node* element);

node* head = NULL;
string input;
int selection;

int main()
{
    bool continueOn = true;
    while (continueOn)
    {
        cout << "Options: \n 1. Add \n 2. Remove \n 3. Search \n 4. Exit" << endl;
        cin >> selection;

        switch (selection)
        {
            case 1:
                addObj();
                break;
            case 2:
                remove();
                break;
            case 3:
                search();
                break;
            case 4:
                continueOn = false;
                break;
            default:
                cout << endl << "Please enter a legit option." << endl << endl;
        }
    }


}
void remove() //accomplish this via a while-loop and a delete
{
    string toBeRemoved;
    cout << "What is the item you'd like to delete: ";
    cin >> toBeRemoved;
    node* tracker = head;

    bool found = false;

    if (tracker == NULL)
        cout << "You have no items." << endl;

    else
    {
        while (tracker != NULL)
        {
            if (tracker->x == toBeRemoved)
            {
                found = true;
                if (isOnlyElement(tracker))
                {
                    head = NULL;
                    delete tracker;
                }
                else if (isLastElement(tracker))
                {
                    node* t2 = tracker->prev;
                    t2->next = NULL;
                    delete tracker;
                }
                else if (isFirstElement(tracker))
                {
                    head = tracker->next;
                    head->prev = NULL;
                    delete tracker;
                }
                else
                {
                    node* t2 = tracker->next;
                    node* t3 = tracker->prev;
                    t3->next = t2;
                    t2->prev = t3;
                    delete tracker;
                }
                break;
            }
            else
                tracker = tracker->next;
        }
    }
    if (!found)
        cout << "Your item does not exist or already has been deleted." << endl;

    display();
}

void addObj() //figure out how to implement a pointer to the previous element
{
    cout << endl << "What do you want to add: ";
    cin >> input;

    node* newObj = new node; //creates new element in list
    newObj->x = input;
    newObj->next = head; //the first time this function is called this is initialized to NULL, other than that, to previous elements

    if (head != NULL)
        head->prev = newObj;

    head = newObj; //the head now points to the new element
    newObj->prev = NULL;

    display();
}

void search()
{
    bool found = false;
    string theSearch;
    cout << "What would you like to search for: ";
    cin >> theSearch;

    node* tracker = head;
    int index = 0;

    if (tracker != NULL)
    {
        while (tracker != NULL)
        {
            if (tracker->x == theSearch)
            {
                found = true;
                break;
            }
            tracker = tracker->next;
            index++;
        }
        if (found)
            cout << endl << "Your search was found at index: " << index << endl << endl;
        else
            cout << endl << "Your search returned no results" << endl;
    }
    else
        cout << "You have no elements yet!" << endl;
}

void display()
{
    node* tracker = head;
    cout << endl << "You now have the following elements in your array:" << endl;
    while (tracker != NULL)
    {
        cout << tracker->x << endl;
        tracker = tracker->next;
    }
    cout << endl;
}

bool isLastElement(node* element)
{
    if (element->next == NULL && element->prev != NULL)
        return true;
    return false;
}

bool isFirstElement(node* element)
{
    if (element->prev == NULL && element->next != NULL)
        return true;
    return false;
}

bool isOnlyElement(node* element)
{
    if (element->prev == NULL && element->next == NULL)
        return true;
    return false;
}
