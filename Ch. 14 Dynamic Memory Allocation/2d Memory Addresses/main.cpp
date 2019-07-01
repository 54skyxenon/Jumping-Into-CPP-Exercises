#include <iostream>
using namespace std;

int main()
{
    int **pp = new int*[10];
    for (int i = 0; i < 10; i++)
    {
        pp[i] = new int[10];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << &pp[i][j] << endl;
        }
    }
}
