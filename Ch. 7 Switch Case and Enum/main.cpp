#include <iostream>
using namespace std;

int input;
string survey_question = "Enter: \n 1 for: Calculator for Addition \n 2 for: Full Lyrics to '99 Bottles of Beer' \n 3 for: A Short Survey";

int add_calc ();
void song();
void survey();

int main()
{
    cout << survey_question << endl;
    cin >> input;

    switch (input)
    {
        case 1:
            add_calc();
            break;

        case 2:
            song();
            break;

        case 3:
            survey();
            break;
    }

}

int add_calc()
{
    int input;
    int sum = 0;

    cout << "Enter 0 to terminate calculations. Enter your first number to add: " << endl;
    cin >> input;

    sum += input;

    while (input != 0)
    {
        cout << "Enter your next number: " << endl;
        cin >> input;

        sum += input;
        if (input == 0)
        {
            cout << "Your final sum is: " << sum << endl;
            break;
        }
        else
        {
            cout << "Enter 0 to terminate calculations. Your current sum is: " << sum << endl;
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
