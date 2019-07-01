/*this is for only one player, the entire functional program can be found in chapter 11*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void addScore(vector<int> &scoreList, int theScore)
{
    scoreList.push_back(theScore);
    sort(scoreList.begin(), scoreList.end());
}

void printScores(vector<int> scoreList, string name)
{
    cout << endl << name << ": " << endl;
    for (int i = scoreList.size() - 1; i >= 0; i--)
        cout << scoreList[i] << endl;
}

int main()
{
    string playerName;
    cout << "What is your player name: ";
    getline(cin, playerName);

    vector<int> highScores(0);
    int playerScore;

    do
    {
        cout << endl << "What's your score: ";
        cin >> playerScore;
        while (!cin)
        {
            cin.clear();
            cin.ignore();
            cin >> playerScore;
        }
        addScore(highScores, playerScore);
        printScores(highScores, playerName);
    } while (playerScore != 0);
}
