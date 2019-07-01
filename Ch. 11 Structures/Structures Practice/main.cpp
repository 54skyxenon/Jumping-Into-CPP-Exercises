#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int input;
int amountOfForms;
int displayOrNot;


struct PersonInfo
{
    string name;
    string number;
    string address;
    char chooseToDisplay;
};

PersonInfo fillInInfo();

int main()
{
    cout << "How many forms do you require: ";
    cin >> amountOfForms;
    int i = amountOfForms;

    PersonInfo form[amountOfForms];

    cout << endl << "Enter 1 to display all forms, enter anything else to choose which: ";
    cin >> displayOrNot;
    cout << endl << endl << endl;

    system("cls");

    if (displayOrNot == 1)
    {
        for (amountOfForms = 0; amountOfForms < i; amountOfForms++)
        {
            cout << "------- Form number " << amountOfForms + 1 << " ------- " << endl;
            form[amountOfForms] = fillInInfo();
            system("cls");
        }

        cout << "-------------------------------" << endl << endl << endl;

        for (amountOfForms = 0; amountOfForms < i; amountOfForms++)
        {
            cout << "Name: " << form[amountOfForms].name;
            cout << "\n Phone #: " << form[amountOfForms].number;
            cout << "\n Address: " << form[amountOfForms].address << endl << endl;
        }

        cout << endl << endl << "-------------------------------" << endl << endl << endl;

    }

    else
    {
        for (amountOfForms = 0; amountOfForms < i; amountOfForms++)
        {
            cout << "------- Form number " << amountOfForms + 1 << " ------- " << endl;
            form[amountOfForms] = fillInInfo();
            cout << endl << "Display this? (Y/N): ";
            cin >> form[amountOfForms].chooseToDisplay;
            system("cls");
        }

        cout << "-------------------------------" << endl << endl << endl;

        for (amountOfForms = 0; amountOfForms < i; amountOfForms++)
        {
            if (form[amountOfForms].chooseToDisplay == 'y' || form[amountOfForms].chooseToDisplay == 'Y')
            {
                cout << "Name: " << form[amountOfForms].name;
                cout << "\n Phone #: " << form[amountOfForms].number;
                cout << "\n Address: " << form[amountOfForms].address << endl << endl;
            }
        }

        cout << endl << endl << "-------------------------------" << endl << endl << endl;
    }

    system("pause");
}

PersonInfo fillInInfo()
{
    PersonInfo person;
    cout << endl << "Your name: ";
    cin >> person.name;
    cout << endl << "Your phone number: ";
    cin >> person.number;
    cout << endl << "Your address: ";
    cin >> person.address;
    return person;
}
