#include <iostream>
using namespace std;

string question = "If you like me, enter 1. Kimberly = 2. Neither = 3. To end the poll = 0.";

int vote;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << question << endl;
    cin >> vote;

    while (vote != 0)
    {
        if (vote == 1)
        {
            cout << question << endl;
            cin >> vote;
            a = a + 1;
        }

        if (vote == 2)
        {
            cout << question << endl;
            cin >> vote;
            b = b + 1;
        }

        if (vote == 3)
        {
            cout << question << endl;
            cin >> vote;
            c = c + 1;
        }

        if (vote == 0)
        {
            cout << endl << "Your results were: \n Brandon is better: " << a << "\n Kimberly is better: " << b << "\n Neither are good: " << c << endl;
            break;
        }

   }
}
