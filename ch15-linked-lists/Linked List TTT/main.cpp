#include <iostream>
using namespace std;

struct boardSpace
{
    string space;
    boardSpace* nextSpace;
};

boardSpace* firstSpace = NULL;

void displayBoard()
{
    int t = 0;
    boardSpace* tracker = firstSpace;
    while (tracker != NULL)
    {
        ++t;
        cout << tracker->space << " ";
        if (t % 3 == 0)
            cout << endl << endl;
        tracker = tracker->nextSpace;
    }
}
void init_board()
{
    for (int i = 0; i < 9; i++) //initializes the board
    {
        boardSpace* newSpace = new boardSpace;
        newSpace->space = "__";
        newSpace->nextSpace = firstSpace;
        firstSpace = newSpace;
    }

    int t = 0;
    boardSpace* tracker = firstSpace;
    while (tracker != NULL)
    {
        ++t;
        cout << t << ". " << tracker->space << " ";
        if (t % 3 == 0)
            cout << endl << endl;
        tracker = tracker->nextSpace;
    }
}
void oTurn()
{
    int selection;
    cout << "Select your space (O's Turn): ";
    cin >> selection;

    boardSpace* tracker = firstSpace;

    for (int i = 0; i < selection - 1; i++)
        tracker = tracker->nextSpace;

    if (tracker->space == "__")
        tracker->space = "O";
    displayBoard();
}
void xTurn()
{
    int selection;
    cout << "Select your space (X's Turn): ";
    cin >> selection;

    boardSpace* tracker = firstSpace;

    for (int i = 0; i < selection - 1; i++)
        tracker = tracker->nextSpace;

    if (tracker->space == "__")
        tracker->space = "X";
    displayBoard();
}

bool checkColumns(boardSpace* head)
{
    int check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0, check6 = 0;
    boardSpace* tracker = head;

    for (int i = 1; i <= 9; i++)
    {
        if (i == 1 || i == 4 || i == 7)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        else if (i == 2 || i == 5 || i == 8)
        {
            if (tracker->space == "X")
                check3++;
            else if (tracker->space == "O")
                check4++;
        }
        else if (i == 3 || i == 6 || i == 9)
        {
            if (tracker->space == "X")
                check5++;
            else if (tracker->space == "O")
                check6++;
        }
        tracker = tracker->nextSpace;
    }

    if (check1 == 3 || check2 == 3 || check3 == 3 || check4 == 3 || check5 == 3 || check6 == 3)
        return true;

    return false;
}

bool checkRows(boardSpace* head)
{
    int check1 = 0, check2 = 0;
    boardSpace* tracker = head;

    for (int i = 0; i < 3; i++)
    {
        if (tracker->space == "X")
            check1++;
        else if (tracker->space == "O")
            check2++;
        tracker = tracker->nextSpace;
    }
    if (check1 == 3 || check2 == 3)
        return true;

    check1 = 0;
    check2 = 0;

    for (int i = 0; i < 3; i++)
    {
        if (tracker->space == "X")
            check1++;
        else if (tracker->space == "O")
            check2++;
        tracker = tracker->nextSpace;
    }
    if (check1 == 3 || check2 == 3)
        return true;

    check1 = 0;
    check2 = 0;

    for (int i = 0; i < 3; i++)
    {
        if (tracker->space == "X")
            check1++;
        else if (tracker->space == "O")
            check2++;
        tracker = tracker->nextSpace;
    }
    if (check1 == 3 || check2 == 3)
        return true;

    return false;
}

bool checkDiagonals(boardSpace* head)
{
    int check1 = 0, check2 = 0;
    boardSpace* tracker = head;

    for (int i = 1; i <= 9; i++)
    {
        if (i == 1)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        else if (i == 5)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        else if (i == 9)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        tracker = tracker->nextSpace;
    }
    if (check1 == 3 || check2 == 3)
        return true;

    return false;
}

bool checkDiagonals2(boardSpace* head)
{
    int check1 = 0, check2 = 0;
    boardSpace* tracker = head;

    for (int i = 1; i <= 9; i++)
    {
        if (i == 3)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        else if (i == 5)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        else if (i == 7)
        {
            if (tracker->space == "X")
                check1++;
            else if (tracker->space == "O")
                check2++;
        }
        tracker = tracker->nextSpace;
    }
    if (check1 == 3 || check2 == 3)
        return true;

    return false;
}

bool isWon(boardSpace* head)
{
    if (checkColumns(head))
        return true;
    else if(checkRows(head))
        return true;
    else if (checkDiagonals(head))
        return true;
    else if (checkDiagonals2(head))
        return true;
    else
        return false;
}

int main()
{
    cout << "---------WARNING: If you pick a filled space, you will lose your turn!----------" << endl << endl;
    init_board();
    while (true)
    {
        oTurn();
        if (isWon(firstSpace))
        {
            cout << endl << "O has won!" << endl;
            break;
        }
        xTurn();
        if (isWon(firstSpace))
        {
            cout << endl << "X has won!" << endl;
            break;
        }
    }
}
