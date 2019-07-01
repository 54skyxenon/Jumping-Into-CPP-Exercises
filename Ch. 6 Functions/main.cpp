#include <iostream>
using namespace std;

int input;
string survey_question = "Enter: \n 1 for: Calculator for Addition \n 2 for: Full Lyrics to '99 Bottles of Beer' \n 3 for: A Short Survey";

int add_calc (int a, int b);
void song();
void survey();

int main()
{

    cout << survey_question << endl;
    cin >> input;

    if (input == 1)
    {
        int a;
        int b;
        add_calc(a, b);
    }

    if (input == 2)
    {
        song();
    }

    if (input == 3)
    {
        survey();
    }

}

int add_calc(int a, int b)
{
    cout << "Enter two numbers for addition. Enter 0 as a number to quit." << endl;
    cin >> a;
    cin >> b;

    cout << "Your sum is: " << a + b << endl;

    if (a != 0 || b != 0)
    {
        while (a != 0 || b != 0)
        {
            cout << "Enter two numbers for addition. Enter 0 as a number to quit." << endl;
            cin >> a;
            cin >> b;

            cout << "Your sum is: " << a + b << endl;

            if (a == 0 || b == 0)
                break;
        }
    }

}

void song()
{
     for (int x = 99; x > 0; x--)
        {
            cout << endl << x << " bottles of beer on the wall, " << x << " bottles of beer. " << "\n Take one down, pass it around, " << x - 1 << " bottles of beer on the wall... " << endl;
        }
}

void survey()
{
    string question = "If you like me, enter 1. If you like Kimberly, 2. For neither, 3. To end the poll, 0.";
    int vote;

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

