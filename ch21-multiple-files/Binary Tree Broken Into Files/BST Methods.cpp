#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Node Definition.h"
#include "Bst Methods.h"

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

int countContacts(contact* book)
{
    if (book == NULL)
        return 0;
    else
        return 1 + countContacts(book->previous) + countContacts(book->next);
}

void displayOptions(contact* book)
{
    cout << countContacts(book) << " contacts"
    << "\n 1. Add an email \n 2. Remove an email \n 3. Update an email \n 4. Find an email \n 5. Quit the program \n 6. Display contents \n 7. Clear screen \n"
    << endl;
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

