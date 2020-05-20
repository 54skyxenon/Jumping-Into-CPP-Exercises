#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;

void add(map<string, string> &book)
{
    string name, email;
    cout << endl << "Enter name: ";
    getline(cin, name, '\n');
    getline(cin, name, '\n');

    cout << "Enter email: ";
    cin >> email;
    book[name] = email;
}

void removeEntry(map<string, string> &book)
{
    string name;
    cout << endl << "Enter name: ";
    getline(cin, name, '\n');
    getline(cin, name, '\n');

    map<string, string>::iterator toBeDeleted = book.find(name);
    if (toBeDeleted != book.end())
        book.erase(toBeDeleted);
    else
        cout << endl << "Not found!" << endl;
}

void update(map<string, string> &book)
{
    string name;
    cout << "Who do you wish to update: ";
    getline(cin, name, '\n');
    getline(cin, name, '\n');

    map<string, string>::iterator toBeFound = book.find(name);

    if (toBeFound != book.end())
    {
        cout << "New name: ";
        getline(cin, name, '\n');
        string email;
        cout << "New email: ";
        cin >> email;

        book.erase(toBeFound);
        book[name] = email;
    }
    else
        cout << endl << "Not found!" << endl;
}

void displayContacts(map<string, string> book)
{
    cout << endl;

    for (map<string, string>::iterator contact = book.begin(), last = book.end(); contact != last; ++contact)
        cout << contact->first << ": " << contact->second << endl;
}

void presentOptions()
{
    cout << "\n 1. Add an entry \n 2. Remove an entry \n 3. Change an entry \n 4. Display contacts \n 5. Clear screen \n 6. Quit \n" << endl;
}

int main()
{
    map<string, string> addressBook;
    int choice;

    do
    {
        presentOptions();
        cout << "Your selection: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                add(addressBook);
                break;
            case 2:
                removeEntry(addressBook);
                break;
            case 3:
                update(addressBook);
                break;
            case 4:
                displayContacts(addressBook);
                break;
            case 5:
                system("cls");
                break;
            case 6:
                addressBook.clear();
                break;
            default:
            {
                if (!cin)
                {
                    cin.clear();
                    cin.ignore();
                }
                cout << "Invalid choice!" << endl;
            }
        }
    } while (choice != 6);
}
