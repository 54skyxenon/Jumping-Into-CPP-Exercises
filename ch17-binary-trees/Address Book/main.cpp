#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct contact
{
    string name;
    string email;
    contact* next;
    contact* previous;
};

contact* add(contact* book, string name, string email)
{
    if (book == NULL)
    {
        contact* person = new contact;
        person->next = NULL;
        person->previous = NULL;
        person->name = name;
        person->email = email;
        return person;
    }

    else if (name < book->name)
        book->previous = add(book->previous, name, email);
    else
        book->next = add(book->next, name, email);

    return book;
}

contact* lookUp(contact* book, string name)
{
    if (book == NULL)
        return NULL;
    else if (book->name == name)
        return book;
    else if (name < book->name)
        return lookUp(book->previous, name);
    else
        return lookUp(book->next, name);
}

contact* findReplacement(contact* book)
{
    if (book == NULL)
        return NULL;
    else if (book->next == NULL)
        return book;

    return findReplacement(book->next);
}

contact* removeReplacement(contact* book, contact* promotedContact)
{
    if (book == NULL)
        return NULL;
    else if (book == promotedContact)
        return book->previous;

    book->next = removeReplacement(book->next, promotedContact);
    return book;
}

contact* deleteContact(contact* book, string name)
{
    if (book == NULL)
    {
        cout << "Not found!" << endl;
        return NULL;
    }
    else if (book->name == name)
    {
        if (book->previous == NULL && book->next == NULL)
        {
            delete book;
            return NULL;
        }
        else if (book->previous != NULL && book->next == NULL)
        {
            contact* tracker = book->previous;
            delete book;
            return tracker;
        }
        else if (book->next != NULL && book->previous == NULL)
        {
            contact* tracker = book->next;
            delete book;
            return tracker;
        }
        else
        {
            contact* replacement = findReplacement(book->previous);
            replacement->previous = removeReplacement(book->previous, replacement);
            replacement->next = book->next;
            delete book;
            return replacement;
        }
    }
    else if (name < book->name)
        book->previous = deleteContact(book->previous, name);
    else
        book->next = deleteContact(book->next, name);

    return book;
}


void displayContacts(contact* book)
{
    if (book != NULL)
    {
        displayContacts(book->previous);
        displayContacts(book->next);
        cout << book->name << ": " << book->email << endl;
    }
}

void update(contact* book)
{
    string name;

    cout << "What person do you want to modify: ";
    cin >> name;

    contact* person = lookUp(book, name);

    if (person == NULL)
        cout << endl << "Not found!" << endl;
    else
    {
        string newEmail;
        cout << "New email: ";
        cin >> newEmail;
        person->email = newEmail;
    }
}

void displayOptions()
{
    cout << "\n 1. Add an email \n 2. Remove an email \n 3. Update an email \n 4. Find an email \n 5. Quit the program \n 6. Display contents \n 7. Clear screen \n" << endl;
}

void eraseBook(contact* book)
{
    if (book != NULL)
    {
        eraseBook(book->next);
        eraseBook(book->previous);
        delete book;
    }
}

int main()
{
    int selection;
    string name, email;
    contact* addressBook = NULL;

    do
    {
        displayOptions();
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
