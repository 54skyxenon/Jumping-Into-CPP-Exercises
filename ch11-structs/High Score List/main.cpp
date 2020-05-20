#include <iostream>
#include <vector>
using namespace std;

struct player
{
    string name;
    vector<int> scoreList;
    player(): scoreList(0){}
    player* nextPlayer;
};

player* players = NULL;

void addUser();
void addScore();
void showHighScore();
void showScores();
void showAllScores();
void showUsers();

int main()
{
    bool continueOn = true;
    int option;
    while (continueOn)
    {
        cout << endl << "Your options are: " << endl;
        cout << "1. Add User\n2. Add Score\n3. Show High Scores\n4. Display All Scores\n5. Display User's Scores\n6. Display List of Users\n7. Exit" << endl;
        cin >> option;

        switch(option)
        {
            case 1:
                addUser();
                break;
            case 2:
                addScore();
                break;
            case 3:
                showHighScore();
                break;
            case 4:
                showAllScores();
                break;
            case 5:
                showScores();
                break;
            case 6:
                showUsers();
                break;
            case 7:
                continueOn = false;
                break;
            default:
                cout << endl << "Try again please." << endl;
        }
    }
}

void addUser()
{
    cout << "Name: ";
    player* newUser = new player;
    cin >> newUser->name;
    newUser->nextPlayer = players;
    players = newUser;
}
void addScore()
{
    string user;
    bool found = false;
    cout << "Which user: ";
    cin >> user;

    player* tracker = players;

    if (tracker != NULL)
    {
        while (tracker != NULL)
        {
            if (tracker->name == user)
            {
                found = true;
                break;
            }
            tracker = tracker->nextPlayer;
        }


        if (!found)
            cout << "Your player was not found!" << endl;
        else
        {
            int score;
            cout << "What's the score: ";
            cin >> score;
            tracker->scoreList.push_back(score);
        }
    }
    else
        cout << endl << "You have no players thus far!" << endl;

}
void showScores()
{
    string user;
    cout << "Which user: ";
    bool found = false;
    cin >> user;

    player* tracker = players;
    if (tracker != NULL){
    while (tracker != NULL)
    {
        if (tracker->name == user)
        {
            found = true;
            break;
        }
        tracker = tracker->nextPlayer;
    }

    if (!found)
        cout << "Your player was not found!" << endl;
    else
    {
        cout << endl;
        for (unsigned int i = 0; i < tracker->scoreList.size(); i++)
        {
            cout << tracker->scoreList[i] << endl;
        }
        cout << endl;
    }}
    else
        cout << endl << "You have no players thus far!" << endl;
}
void showHighScore()
{
    int max = 0;
    player* tracker = players;

    while (tracker != NULL)
    {
        if (tracker->scoreList.size() > 0)
        {
            max = tracker->scoreList[0];
            for (unsigned int i = 0; i < tracker->scoreList.size(); i++)
                if (tracker->scoreList[i] > max)
                    max = tracker->scoreList[i];
        }
        cout << tracker->name << "'s high score was: " << max << endl;
        tracker = tracker->nextPlayer;
    }
}
void showAllScores()
{
    player* tracker = players;

    while (tracker != NULL)
    {
        cout << endl << endl << tracker->name << ":" << endl;

        for (unsigned int i = 0; i < tracker->scoreList.size(); i++)
            cout << tracker->scoreList[i] << endl;

        tracker = tracker->nextPlayer;
    }
    cout << endl << endl;
}
void showUsers()
{
    player* tracker = players;
    cout << endl << endl;
    while (tracker != NULL)
    {
        cout << tracker->name << endl;
        tracker = tracker->nextPlayer;
    }
    cout << endl << endl;
}
