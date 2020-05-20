#include <iostream>
using namespace std;

string** &init_board(int h, int w);
string** &drop1(string** &board, int h, int w);
string** &drop2(string** &board, int h, int w);
void printBoard(string** &board, int h, int w);
bool isWon(string **board, int h, int w);

int main()
{
    cout << "----------------------------Connect 4----------------------------" << endl << endl;
    cout << "Instructions: Select the following space you want to drop your piece in." << endl << endl;
    int height, width;
    cout << "Input your height, then your width(separated by a space): ";
    cin >> height >> width;
    while (height < 4 && width < 4)
    {
        cout << "You can't play with that kinda board. Try again: ";
        cin >> height >> width;
    }
    string **theBoard = init_board(height, width);
    printBoard(theBoard, height, width);

    while (true)
    {
        theBoard = drop1(theBoard, height, width);
        if (isWon(theBoard, height, width))
            break;
        else
            printBoard(theBoard, height, width);

        theBoard = drop2(theBoard, height, width);
        if (isWon(theBoard, height, width))
            break;
        else
            printBoard(theBoard, height, width);
    }

    for (int i = 0; i < height; i++)
        delete[] theBoard[i];

    delete[] theBoard;
}

string** &init_board(int h, int w)
{
    string **newBoard = new string*[h];

    for (int i = 0; i < h; i++)
        newBoard[i] = new string[w];

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            newBoard[i][j] = "__";

    return newBoard;
}

void printBoard(string** &board, int h, int w)
{
    cout << "\n";
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (j == 0 && i == 0)
            {
                for (int tracker = 0; tracker < w; tracker++)
                    cout << tracker + 1 << "  ";
                cout << endl << endl;
            }
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

string** &drop1(string** &board, int h, int w)
{
    int input;
    cout << endl << "Player 1's turn: ";
    cin >> input;
    while (input > w || input <= 0)
    {
        cout << "Um.... that's not part of the board, try again: ";
        cin >> input;
        if (input <= w && input > 0)
            break;
    }
    while (board[h-1][input - 1] != "__" && h > 1)
        h--;
    board[h-1][input-1] = "+ ";

    return board;
}
string** &drop2(string** &board, int h, int w)
{
    int input;
    cout << endl << "Player 2's turn: ";
    cin >> input;
    while (input > w || input <= 0)
    {
        cout << "Um.... that's not part of the board, try again: ";
        cin >> input;
        if (input <= w && input > 0)
            break;
    }
    while (board[h-1][input - 1] != "__" && h > 1)
        h--;
    board[h-1][input - 1] = "x ";

    return board;
}

bool isWon(string **board, int h, int w)
{
  //  int tracker = 0;
    return false;
}
