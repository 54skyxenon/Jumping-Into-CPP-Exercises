#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#include "Comparable.h"
#include "HighScoreElement.h"

void sort(vector<Comparable*> &comparableList)
{
    for (unsigned int i = 0; i < comparableList.size(); i++)
    {
        while (i > 0 && comparableList[i]->compare(*comparableList[i-1]) == 1)
        {
            swap(comparableList[i], comparableList[i-1]);
            i--;
        }
    }

    for (unsigned int i = 0; i < comparableList.size(); i++)
    {
        cout << endl;
        comparableList[i]->printInfo();
    }
}

int main()
{
    vector<Comparable*> comparableList;

    while (true)
    {
        string name;
        int score;

        cout << "Enter the name of the person (type \"N/A\" to quit): ";
        cin >> name;
        if (name == "N/A" || name == "n/a")
            break;

        cout << "Enter the score of the person: ";
        cin >> score;

        comparableList.push_back(new HighScoreElement(score, name));
    }

    sort(comparableList);
}
