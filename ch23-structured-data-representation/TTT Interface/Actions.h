#ifndef ACTIONS_H
#define ACTIONS_H

enum BOARD
{
    BLANK,
    X_FILLED,
    O_FILLED
};

struct TicTacToe
{
    int moveCount;
    char whoseMove;
    BOARD TTTBoard[3][3];

    void makeMove(int row, int column);
    void init(int firstMove);
    void display();
    bool won();
};

#endif // ACTIONS_H

