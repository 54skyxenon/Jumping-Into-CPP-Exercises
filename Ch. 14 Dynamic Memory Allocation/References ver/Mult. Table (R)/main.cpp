#include <iostream>
using namespace std;

void buildTable(int &var);

int main()
{
    cout << "-----------------------------Multiplication Table-------------------------------";
	int t_size;
	do
    {
        cout << endl << endl << "Specify the dimensions of your table (or 0 to quit): ";
        cin >> t_size;
        cout << "\n\n";
        buildTable(t_size);
	}
	while (t_size != 0);
}

void buildTable(int &var)
{
    int size = var + 1;
    int **length = new int*[size];
    for (int i = 0; i < size; i++)
    {
        length[i] = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            length[i][j] = i*j;
            cout << length[i][j] << "     ";
        }
        cout << endl << endl;
    }
    for (int i = 0; i < size; i++)
    {
        delete[] length[i];
    }
    delete[] length;
    length = NULL;
}
