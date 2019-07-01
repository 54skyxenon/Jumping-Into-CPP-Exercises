#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

void display(map<string, string> &existingUsers)
{
    for (map<string, string>::iterator i = existingUsers.begin(), j = existingUsers.end(); i != j; i++)
        cout << i->first << endl;
}

void register_user(map<string, string> &existingUsers)
{
    string username;
    cout << endl << "New username: ";
    getline(cin, username, '\n');
    getline(cin, username, '\n');

    map<string, string>::iterator validUser = existingUsers.find(username);

    if (validUser != existingUsers.end())
        cout << "User already exists!" << endl;
    else
    {
        string password;
        cout << "New password: ";
        getline(cin, password, '\n');
        existingUsers[username] = password;
    }
}

void change_password(map<string, string> &existingUsers, map<string, string>::iterator theUser)
{
    string password;
    cout << "New password: ";
    getline(cin, password);
    getline(cin, password);
    existingUsers[theUser->first] = password;
}

void login(map<string, string> &existingUsers)
{
    bool loggedIn = false;
    string username, password;
    cout << "Enter your username, then your password: ";
    getline(cin, username, '\n');
    getline(cin, username, '\n');
    getline(cin, password, '\n');

    map<string, string>::iterator currentUser;

    for (map<string, string>::iterator i = existingUsers.begin(), j = existingUsers.end(); i != j; i++)
    {
        if (i->first == username && i->second == password)
        {
            loggedIn = true;
            currentUser = i;
            break;
        }
    }

    if (loggedIn)
    {
        int choice;

        do
        {
            cout << "Logged in as: " << currentUser->first << endl;
            cout << "\n 1. Change password \n 2. Log out \n" << endl;
            cout << "What do you want to do: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    change_password(existingUsers, currentUser);
                    break;
                case 2:
                    break;
                default:
                {
                    if (!cin)
                    {
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "Invalid choice! Try Again: ";
                    cin >> choice;
                }
            }
        } while (choice != 2);
    }
    else
        cout << "Incorrect username or password!" << endl;
}

int main()
{
    map<string, string> listOfUsers;
    int choice;

    do
    {
        cout << "\n 1. Register a new user \n 2. Log in \n 3. Display users \n 4. Clear screen \n 5. Quit \n " << endl;
        cout << "Your selection: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                register_user(listOfUsers);
                break;
            case 2:
                login(listOfUsers);
                break;
            case 3:
                display(listOfUsers);
                break;
            case 4:
                system("cls");
                break;
            case 5:
                listOfUsers.clear();
                break;
            default:
            {
                if (!cin)
                {
                    cin.clear();
                    cin.ignore();
                }
                cout << "Invalid choice, try again!" << endl;
            }
        }
    } while (choice != 5);
}
