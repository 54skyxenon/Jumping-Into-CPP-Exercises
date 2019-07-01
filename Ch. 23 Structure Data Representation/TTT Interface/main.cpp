#include <iostream>
#include <cstdlib>
using namespace std;

#include "Actions.h"

int main()
{
    int firstMove;
    cout << "Who wants to go first? \n 1. X \n 2. O" << endl;
    cin >> firstMove;

    TicTacToe board;
    board.init(firstMove);

    while (1)
    {
        cout << endl << "It's " << board.whoseMove << "'s turn!" << endl;
        board.display();

        int column, row;
        cout << "Enter the row (space) and then the column #: ";
        cin >> column >> row;
        board.makeMove(column - 1, row - 1);

        system("cls");
        if (board.won())
        {
            cout << endl << "You have won!" << endl;
            board.display();
            break;
        }
        if (board.moveCount == 9)
        {
            cout << "It's a tie." << endl;
            break;
        }
    }
}
