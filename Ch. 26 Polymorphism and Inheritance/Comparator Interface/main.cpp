#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "Comparator.h"
#include "caseInsensitive.h"
#include "reverseAlpha.h"

void sort(vector<Comparator*> unsortedList)
{
    for (unsigned int i = 0; i < unsortedList.size(); i++)
    {
        while (i > 0 && unsortedList[i]->compare(unsortedList[i]->getData(), unsortedList[i-1]->getData()) == -1)
        {
            swap(unsortedList[i], unsortedList[i-1]);
            i--;
        }
    }

    for (unsigned int i = 0; i < unsortedList.size(); i++)
        unsortedList[i]->printData();

    cout << endl << endl;
}

int main()
{
    vector<Comparator*> unsortedList1, unsortedList2;

    while (true)
    {
        string str;
        cout << "Type in strings to be sorted case insensitively (type \"N/A\" to quit): ";
        cin >> str;

        if (str == "N/A" || str == "n/a")
            break;
        else
            unsortedList1.push_back(new caseInsensitive(str));
    }

    while (true)
    {
        string str;
        cout << "Type in strings to be sorted in reverse alphabetical order (type \"N/A\" to quit): ";
        cin >> str;

        if (str == "N/A" || str == "n/a")
            break;
        else
            unsortedList2.push_back(new reverseAlpha(str));
    }

    sort(unsortedList1);
    sort(unsortedList2);
}
