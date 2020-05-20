#include <iostream>
#include <algorithm>
using namespace std;

struct myFriend
{
    int daysAgo;
    string name;
};

void displayList(myFriend* roster, int length)
{
    cout << endl;

    for (int i = 0; i < length - 1; i++)
        cout << roster[i].name << " - " << roster[i].daysAgo << " days ago" << endl;

    cout << endl;
}

void presentOptions()
{
    cout << "\n 1. Add a friend \n 2. Update when they last talked to you \n 3. Sort the list \n 4. Exit" << endl;
}

void sortByDate(myFriend *roster, int length)
{
    for (int i = 1; i < length - 1; i++)
    {
        while (i > 0 && roster[i].daysAgo < roster[i-1].daysAgo)
        {
            swap(roster[i], roster[i-1]);
            i--;
        }
    }
    displayList(roster, length);
}

myFriend* updateFriends(myFriend* roster, int &length)
{
    string name;
    cout << endl << "Enter the name of your new friend: ";
    cin >> name;

    roster[length - 1].name = name;
    roster[length - 1].daysAgo = 0;
    length++;

    myFriend *newList = new myFriend[length];
    for (int i = 0; i < length - 1; i++)
        newList[i] = roster[i];

    displayList(newList, length);

    delete[] roster;
    return newList;
}

void updateDate(myFriend* roster, int length)
{
    int i;
    bool found = true;
    string theFriend;

    cout << endl << "Who might that be: ";
    cin >> theFriend;

    for (i = 0; i < length; i++)
    {
        if (roster[i].name == theFriend)
            break;
        if (i == length - 1)
        {
            found = false;
            cout << "Your friend wasn't found!" << endl << endl;
        }
    }

    if (found)
    {
        int numDays;

        while (!cin)
        {
            cin.clear();
            cin.ignore();
            cout << endl << "I don't think that's a proper time: ";
            cin >> numDays;
        }

        cout << endl << "Please enter the number of days ago that you talked to him/her: ";
        cin >> numDays;
        roster[i].daysAgo = numDays;
        displayList(roster, length);
    }
}

int main()
{
    int initialSize = 1;
    bool done = false;
    myFriend *friendList = new myFriend[initialSize];

    while (!done)
    {
        int selection;
        cout << "What do you want to do: ";
        presentOptions();
        cin >> selection;

        switch (selection)
        {
            case 1:
                friendList = updateFriends(friendList, initialSize);
                break;
            case 2:
                updateDate(friendList, initialSize);
                break;
            case 3:
                sortByDate(friendList, initialSize);
                break;
            default:
                done = true;
                break;
        }
    }
}
