#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Node Definition.h"
#include "Bst Methods.h"

int main()
{
    int selection;
    string name, email;
    contact* addressBook = NULL;

    do
    {
        displayOptions(addressBook);
        cout << "What do you want to do: ";
        cin >> selection;
        switch (selection)
        {
            case 1:
                cout << endl << "Enter name: ";
                cin >> name;
                cout << "Enter email: ";
                cin >> email;
                addressBook = add(addressBook, name, email);
                break;
            case 2:
                cout << "Enter name: ";
                cin >> name;
                addressBook = deleteContact(addressBook, name);
                break;
            case 3:
                update(addressBook);
                break;
            case 4:
            {
                cout << "Enter name: ";
                cin >> name;
                contact* info = lookUp(addressBook, name);
                if (info != NULL)
                    cout << info->name << "'s email is: " << info->email << endl;
                else
                    cout << endl << "Not found!" << endl;
                break;
            }
            case 5:
                cout << endl << "Bye!" << endl;
                eraseBook(addressBook);
                break;
            case 6:
                cout << endl;
                displayContacts(addressBook);
                break;
            case 7:
                system("cls");
                break;
            default:
                cin.clear();
                cin.ignore();
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (selection != 5);
}
