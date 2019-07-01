#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generatePath(string** &theMaze, int height, int width);
void printMaze(string** &theMaze, int height, int width);
int getDirection();

int main()
{
    srand(time(NULL));

    cout << "For optimal results, select dimensions greater than 10x10" << endl;
    int height, width;
    cout << "Enter your maze dimensions: ";
    cin >> height >> width;

    string** emptyMaze = new string*[height];

    for (int i = 0; i < height; i++)
        emptyMaze[i] = new string[width];

    for (int k = 0; k < width - 1; k++)
        cout << "--";
    cout << endl;

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            emptyMaze[i][j] = "| ";

    generatePath(emptyMaze, height, width);

    for (int i = 0; i < height; i++)
        delete[] emptyMaze[i];

    delete[] emptyMaze;
}

void generatePath(string** &theMaze, int height, int width)
{
    bool endReached = false;
    int whereToStart = rand() % height;
    int y = 0;

    theMaze[whereToStart][y] = "  ";

    while (!endReached)
    {
        switch (getDirection())
        {
            case 1: //up
                whereToStart--;
                if (whereToStart == 0/* && y > 0*/)
                    endReached = true;
                theMaze[whereToStart][y] = "  ";
                break;
            case 2: //forward
                y++;
                theMaze[whereToStart][y] = "  ";
                if (y == width - 1)
                    endReached = true;
                break;
            case 3: //down
                whereToStart++;
                theMaze[whereToStart][y] = "  ";
                if (whereToStart == height - 1/* && y > 0*/)
                    endReached = true;
                break;
        }
    }

    printMaze(theMaze, height, width);
}

void printMaze(string** &theMaze, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            cout << theMaze[i][j];
        cout << endl;
    }
    for (int w = 0; w < width - 1; w++)
        cout << "--";
}

int getDirection()
{
    return (rand() % 3) + 1;
}
