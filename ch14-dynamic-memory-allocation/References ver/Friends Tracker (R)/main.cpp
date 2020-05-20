#include <iostream>
#include <algorithm> // you can easily sort the dates via the sort function, i'm not implementing that
using namespace std;

string* &growList(string* &theList, int *size);
string* &growDateList(string* &theList, int *size);
string* &update(string* &theList, int size);
void presentList(string* &listOf, string* &listOf2, int size);

int Size = 1, numDates = 1, friendNum = 0, selection;
bool plsContinue = true;
string name, date;

int main()
{
    cout << "------------------Mini Social Media-----------------" << endl;
    string* numFriends = new string[Size];
    string* dates = new string[Size];

    do
    {
        cout << endl << "Make a selection (or press 0 to quit): ";
        cout << endl << "1. Add New Friend" << endl;
        cout << "2. Update When They Last Talked to You" << endl;
        cin >> selection;

        switch (selection)
        {
            case 0:
                plsContinue = false;
                break;
            case 1:
                cout << endl << "Name (please only enter 1st): ";
                cin >> name;
                numFriends[friendNum] = name;
                friendNum++;
                presentList(numFriends, dates, friendNum);
                numFriends = growList(numFriends, &Size);
                dates = growDateList(dates, &numDates);
                break;
            case 2:
                cout << "OK, which friend: ";
                cin >> selection;
                while (selection >= Size || selection <= 0)
                {
                    if (Size == 1)
                    {
                        cout << endl << "Name (please only enter 1st): ";
                        cin >> name;
                        numFriends[friendNum] = name;
                        friendNum++;
                        presentList(numFriends, dates, friendNum);
                        numFriends = growList(numFriends, &Size);
                        dates = growDateList(dates, &numDates);
                        break;
                    }
                    cout << "Sorry but that isn't a valid choice! Try again." << endl;
                    cin >> selection;
                }
                dates = update(dates, selection);
                presentList(numFriends, dates, friendNum);
                break;
            default:
                cout << "I don't think that's a valid choice :/" << endl;
        }
    } while(plsContinue);
    delete[] numFriends;
    delete[] dates;
}

void presentList(string* &listOf, string* &listOf2, int size)
{
    cout << "Your friends are: " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << listOf[i] << " - " << listOf2[i] << endl;
    }
}

string* &growList(string* &theList, int *size)
{
    *size += 1;
    string *newList = new string[*size];
    for (int i = 0; i < *size - 1; ++i)
    {
        newList[i] = theList[i];
    }
    delete[] theList;
    return newList;
}

string* &update(string* &theList, int size)
{
    string measurement, unit;
    cout << endl << "And when might this be? (quantity, unit): ";
    cin >> measurement >> unit;
    theList[selection - 1] = measurement + " " + unit + " ago";
    return theList;
}

string* &growDateList(string* &theList, int *size)
{
    *size += 1;
    string *newList = new string[*size];
    for (int i = 0; i < *size - 1; ++i)
    {
        newList[i] = theList[i];
    }
    delete[] theList;
    return newList;
}
