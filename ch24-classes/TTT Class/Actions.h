#ifndef ACTIONS_H
#define ACTIONS_H

enum BOARD
{
    BLANK,
    X_FILLED,
    O_FILLED
};

class TicTacToe
{
    public:
        void makeMove(int row, int column);
        void init(int firstMove);
        void display();
        bool won();
        int getMoveCount();
        char getTurn();

    private:
        int moveCount;
        char whoseMove;
        BOARD TTTBoard[3][3];
};

#endif
