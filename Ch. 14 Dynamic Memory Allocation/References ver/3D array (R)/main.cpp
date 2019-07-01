#include <iostream>
using namespace std;

void construct3dArr(int length, int width, int height);
void free3dArr(int*** &triplePtr, int arrLength, int arrWidth);

int main()
{
    int l, w, h;
    cout << "Please input (L x W x H) for your table, in that order: ";
    cin >> l >> w >> h;
    construct3dArr(l, w, h);
}

void construct3dArr(int length, int width, int height)
{
    int ***arr = new int**[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = new int*[width];
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            arr[i][j] = new int[height];
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << "Element #" << i << " of array's 1st dimension: " << endl << endl;
        for (int j = 0; j < width; j++)
        {
            for (int c = 0; c < height; c++)
            {
                arr[i][j][c] = (i+1)*(j+1)*(c+1);
                cout << arr[i][j][c];
                if (c != height - 1)
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }
    free3dArr(arr, length, width);
}

void free3dArr(int*** &triplePtr, int arrLength, int arrWidth)
{
    for (int i = 0; i < arrLength; i++)
        for (int j = 0; j < arrWidth; j++)
            delete[] triplePtr[i][j];

    delete[] triplePtr;
    triplePtr = NULL;
}
