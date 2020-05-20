#include <iostream>
#include <cstdlib>
using namespace std;

#include "StringConvertable.h" //superclass
#include "MonsterCard.h" //logs yugioh monsters
#include "BookRead.h" //logs book reading sessions
#include "Assignment.h" //mocks Aeries
#include "ytUpload.h" //youtube upload info

bool prompt(string TFquestion) //saves some typing
{
    string input;
    cout << TFquestion << " (Y/N):";
    cin >> input;

    if (input == "Y" || input == "y")
        return true;
    else
        return false;
}

int main()
{
    vector<StringConvertable*> LoggableItems(0);
    bool hasQuit = false;

    while (!hasQuit)
    {
        int option;
        cout << "Choose which to log: \n1. Yugioh Monster Card\n2. Amount of book read\n3. Assignment grade input\n4. YouTube video upload\n5. Clear screen\n6. Quit \n";
        cin >> option;

        switch (option)
        {
            case 1:
            {
                string name, attribute, type;
                int lv, ATK, DEF, scale;

                cout << "Monster name: ";
                cin.ignore();   getline(cin, name);

                cout << "Level/Rank: ";     cin >> lv;
                cout << "Attribute: ";     cin >> attribute;

                cout << "Type: ";
                cin.ignore();   getline(cin, type);

                cout << "ATK: ";    cin >> ATK;
                cout << "DEF: ";    cin >> DEF;
                cout << "Pendulum scale (enter -1 if not pendulum): ";     cin >> scale;

                LoggableItems.push_back(new MonsterCard(ATK, DEF, lv, type, attribute, name, prompt("Has effect?"), prompt("Is a fusion?"),
                                        prompt("Is a synchro?"), prompt("Is a xyz?"), prompt("Is a pendulum?"), prompt("Is a ritual?"), "", scale));
                break;
            }
            case 2:
            {
                int pages;
                string author, book, time;

                cout << "Name of book: ";
                cin.ignore();
                getline(cin, book);

                cout << "Name of author: ";
                getline(cin, author);

                cout << "How many pages: ";
                cin >> pages;

                cout << "How long did you read: ";
                cin.ignore();
                getline(cin, time);

                LoggableItems.push_back(new BookRead(pages, book, author, time));
                break;
            }
            case 3:
            {
                string assignmentName, category;
                int points, pointsTotal;

                cin.ignore();
                cout << "Assignment name: ";
                getline(cin, assignmentName);
                cout << "Category: ";
                getline(cin, category);

                if (prompt("Is the assignment missing?"))
                {
                    LoggableItems.push_back(new Assignment(assignmentName, category, 0, 0, true));
                }
                else
                {
                    cout << "Points attained: ";
                    cin >> points;
                    cout << "Points total: ";
                    cin >> pointsTotal;

                    LoggableItems.push_back(new Assignment(assignmentName, category, points, pointsTotal, false));
                }

                break;
            }
            case 4:
            {
                string videoName, username, tag = "";
                int subs, mins, secs;

                cout << "Name of video: ";
                cin.ignore();
                getline(cin, videoName);
                cout << "Your username: ";
                getline(cin, username);

                cout << "How many subs you got: ";
                cin >> subs;
                cout << "How many minutes is your video: ";
                cin >> mins;
                cout << "How many seconds is your video: ";
                cin >> secs;

                cin.ignore();
                vector<string> tags(0);

                while (true)
                {
                    cout << "Enter a tag (N/A to quit): ";
                    getline(cin, tag);

                    if (tag != "N/A" && tag != "n/a")
                        tags.push_back(tag);
                    else
                        break;
                }

                LoggableItems.push_back(new ytUpload(videoName, username, subs, tags, mins, secs));
                break;
            }
            case 5:
            {
                system("cls");
                break;
            }
            case 6:
            {
                system("cls");
                hasQuit = true;
                break;
            }
            default:
            {
                system("cls");
                hasQuit = true;
                break;
            }
        }
    }

    for (unsigned int i = 0; i < LoggableItems.size(); i++)
        cout << LoggableItems[i]->toString();
}
