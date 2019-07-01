#include <iostream>
using namespace std;

int board[3][3], input;
bool isWon(int arr[][3]);

void moveX();
void moveO();
void drawBoard(int arr[][3]);
bool checkColumn(int arr[][3]);
bool checkRow(int arr[][3]);
bool checkDiag(int arr[][3]);
bool checkTie(int arr[][3]);

enum boardSpaces {BLANK = 0, X_FILLED = 1, O_FILLED = 2};

int main()
{
    cout << "Instructions are simple: input the number of the space you wish to fill and do  not be stupid" <<
    " and fill in what's already been filled!" << endl << endl;
    int tracker = 1;
    for (int i = 0; i < 3; i++) // prints and initializes board
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = BLANK;
            cout << tracker++ << ". __ ";
        }
        cout << endl << endl;
    }

    while (true)
    {
        moveX();
        drawBoard(board);
        if (isWon(board))
        {
            cout << endl << "Player X has won!" << endl;
            break;
        }
        if(checkTie(board))
        {
            cout << endl << "Sorry I guess it's a tie!" << endl;
            break;
        }

        moveO();
        drawBoard(board);
        if (isWon(board))
        {
            cout << endl << "Player O has won!" << endl;
            break;
        }

        if(checkTie(board))
        {
            cout << endl << "Sorry I guess it's a tie!" << endl;
            break;
        }

    }

}

void drawBoard(int arr[][3])
{
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (arr[i][j] == X_FILLED)
                cout << "X ";
            else if (arr[i][j] == O_FILLED)
                cout << "O ";
            else if (arr[i][j] == BLANK)
                cout << "__ ";
        }
        cout << endl << endl;
    }
    cout << endl;
}

void moveX()
{
    cout << "Enter the square you wish to fill for X: ";
    cin >> input;

    switch (input) // implement this in a for loop with mod
    {
        case 1:
            board[0][0] = X_FILLED;
            break;
        case 2:
            board[0][1] = X_FILLED;
            break;
        case 3:
            board[0][2] = X_FILLED;
            break;
        case 4:
            board[1][0] = X_FILLED;
            break;
        case 5:
            board[1][1] = X_FILLED;
            break;
        case 6:
            board[1][2] = X_FILLED;
            break;
        case 7:
            board[2][0] = X_FILLED;
            break;
        case 8:
            board[2][1] = X_FILLED;
            break;
        case 9:
            board[2][2] = X_FILLED;
            break;
        default:
            cout << "Follow instructions! You've lost your turn!" << endl;
            break;
    }
}

void moveO()
{
    cout << "Enter the square you wish to fill for O: ";
    cin >> input;

    switch (input) // implement this in a for loop with mod
    {
        case 1:
            board[0][0] = O_FILLED;
            break;
        case 2:
            board[0][1] = O_FILLED;
            break;
        case 3:
            board[0][2] = O_FILLED;
            break;
        case 4:
            board[1][0] = O_FILLED;
            break;
        case 5:
            board[1][1] = O_FILLED;
            break;
        case 6:
            board[1][2] = O_FILLED;
            break;
        case 7:
            board[2][0] = O_FILLED;
            break;
        case 8:
            board[2][1] = O_FILLED;
            break;
        case 9:
            board[2][2] = O_FILLED;
            break;
        default:
            cout << "Follow instructions! You've lost your turn!" << endl;
            break;
    }

}

bool isWon(int arr[][3]) // modify this
{
    if (checkColumn(arr))
    {
        return true;
    }
    else if (checkRow(arr))
    {
        return true;
    }
    else if (checkDiag(arr))
    {
        return true;
    }
    return false;
}

bool checkDiag(int arr[][3])
{
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        if ((arr[i][i] == arr[i+1][i+1]) && (arr[i][i] != 0))
            count++;
    }
    if (count == 2)
        return true;
    else
        count = 0;

    int j = 0;
    for (int i = 2; i > 0; i--)
    {
        if ((arr[j][i] == arr[j+1][i-1]) && (arr[j][i] != 0))
                count++;
        j++;
    }

    if (count == 2)
        return true;

    return false;
}

bool checkColumn(int arr[][3])
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == arr[i][j+1] && arr[i][j] != 0)
                count++;
        }
        if (count == 2)
            return true;
        else
            count = 0;
    }

    return false;
}

bool checkRow(int arr[][3])
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j][i] == arr[j+1][i] && arr[j][i] != 0)
                count++;
        }
        if (count == 2)
            return true;
        else
            count = 0;
    }

    return false;
}

bool checkTie(int arr[][3])
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
                count++;
            else
                return false;
        }
    }
    return true;
}
