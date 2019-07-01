#include <iostream>
using namespace std;

#include "Actions.h"

void TicTacToe::makeMove(int row, int column)
{
    if (TTTBoard[row][column] == BLANK)
    {
        switch (whoseMove)
        {
            case 'X':
                TTTBoard[row][column] = X_FILLED;
                break;
            case 'O':
                TTTBoard[row][column] = O_FILLED;
        }
        moveCount++;
    }

    else
        cout << "That space is taken or invalid! Your move is lost!" << endl;

    switch (whoseMove)
    {
        case 'X':
            whoseMove = 'O';
            break;
        case 'O':
            whoseMove = 'X';
            break;
    }

}

void TicTacToe::display()
{
    cout << "   1    " << "2    " << "3    " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                cout << i + 1 << " ";
            switch (TTTBoard[i][j])
            {
                case BLANK:
                    cout << "____ ";
                    break;
                case X_FILLED:
                    cout << "X    ";
                    break;
                case O_FILLED:
                    cout << "O    ";
                    break;
            }
        }
        cout << endl << endl;
    }
}

bool TicTacToe::won()
{
    if (TTTBoard[0][0] == TTTBoard[1][1] && TTTBoard[1][1] == TTTBoard[2][2] && TTTBoard[0][0] != BLANK) //check diagonal
        return true;
    if (TTTBoard[0][2] == TTTBoard[1][1] && TTTBoard[1][1] == TTTBoard[2][0] && TTTBoard[0][2] != BLANK) //check reverse diagonal
        return true;
    for (int i = 0; i < 3; i++) //check rows
    {
        if (TTTBoard[i][0] == TTTBoard[i][1] && TTTBoard[i][1] == TTTBoard[i][2] && TTTBoard[i][0] != BLANK)
            return true;
    }
    for (int i = 0; i < 3; i++) //check columns
    {
        if (TTTBoard[0][i] == TTTBoard[1][i] && TTTBoard[1][i] == TTTBoard[2][i] && TTTBoard[0][i] != BLANK)
            return true;
    }

    return false;
}

void TicTacToe::init(int firstMove)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            TTTBoard[i][j] = BLANK;
    }
    switch (firstMove)
    {
        case 1:
            whoseMove = 'X';
            break;
        case 2:
            whoseMove = 'O';
            break;
        default:
            cout << "X automatically goes!" << endl;
            whoseMove = 'X';
            break;
    }

    moveCount = 0;
}
