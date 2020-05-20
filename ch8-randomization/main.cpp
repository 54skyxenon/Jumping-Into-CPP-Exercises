#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void slot_spin();
void generate_result();
void reward_check();

string a = "7";
string b = "BAR";
string c = "Cherry";
string d = "Orange";
string e = "Diamond";
string f = "Lemon";
string g = "Horseshoe";
string h = "Bell";
string j = "Watermelon";

int x;
int y;
int z;

int rewardMoney = 0;

int main()
{
    char input;
    srand( time(NULL) );

    cout << "Spin the slot machine? (Y/N): ";
    cin >> input;
    cout << endl;


    while (input == 'Y' || input == 'y')
    {
        if (input == 'N' || input == 'n')
        {
            break;
        }

        slot_spin();
        generate_result();
        reward_check();

        cout << "Spin the slot machine again? (Y/N): ";
        cin >> input;
        cout << endl;
    }

    cout << "Total money earned: " << "$" << rewardMoney << endl;
}

void slot_spin()
{
    int high = 9;
    int low = 1;

    x = rand() % (high - low + 1) + low;
    y = rand() % (high - low + 1) + low;
    z = rand() % (high - low + 1) + low;
}

void generate_result()
{
    switch (x)
    {
        case 1:
            cout << a << endl;
            break;
        case 2:
            cout << b << endl;
            break;
        case 3:
            cout << c << endl;
            break;
        case 4:
            cout << d << endl;
            break;
        case 5:
            cout << e << endl;
            break;
        case 6:
            cout << f << endl;
            break;
        case 7:
            cout << g << endl;
            break;
        case 8:
            cout << h << endl;
            break;
        case 9:
            cout << j << endl;
            break;
    }

    switch (y)
    {
        case 1:
            cout << a << endl;
            break;
        case 2:
            cout << b << endl;
            break;
        case 3:
            cout << c << endl;
            break;
        case 4:
            cout << d << endl;
            break;
        case 5:
            cout << e << endl;
            break;
        case 6:
            cout << f << endl;
            break;
        case 7:
            cout << g << endl;
            break;
        case 8:
            cout << h << endl;
            break;
        case 9:
            cout << j << endl;
            break;
    }

    switch (z)
    {
        case 1:
            cout << a << endl << endl;
            break;
        case 2:
            cout << b << endl << endl;
            break;
        case 3:
            cout << c << endl << endl;
            break;
        case 4:
            cout << d << endl << endl;
            break;
        case 5:
            cout << e << endl << endl;
            break;
        case 6:
            cout << f << endl << endl;
            break;
        case 7:
            cout << g << endl << endl;
            break;
        case 8:
            cout << h << endl << endl;
            break;
        case 9:
            cout << j << endl << endl;
            break;
    }
}

void reward_check()
{
    if ( x == 1 && y == 1 && z == 1 )
    {
        cout << "You won something! You gain $15000!" << endl;
        rewardMoney += 15000;
    }

    if ( x == 2 && y == 2 && z == 2 )
    {
        cout << "You won something! You gain $10000!" << endl;
        rewardMoney += 10000;
    }

    if ( x == 3 && y == 3 && z == 3 )
    {
        cout << "You won something! You gain $500!" << endl;
        rewardMoney += 500;
    }

    if ( x == 4 && y == 4 && z == 4 )
    {
        cout << "You won something! You gain $500!" << endl;
        rewardMoney += 500;
    }

    if ( x == 5 && y == 5 && z == 5 )
    {
        cout << "You won something! You gain $10000!" << endl;
        rewardMoney += 10000;
    }

    if ( x == 6 && y == 6 && z == 6 )
    {
        cout << "You won something! You gain $500!" << endl;
        rewardMoney += 500;
    }

    if ( x == 7 && y == 7 && z == 7 )
    {
        cout << "You won something! You gain $5000!" << endl;
        rewardMoney += 5000;
    }

    if ( x == 8 && y == 8 && z == 8 )
    {
        cout << "You won something! You gain $5000!" << endl;
        rewardMoney += 5000;
    }

    if ( x == 9 && y == 9 && z == 9 )
    {
        cout << "You won something! You gain $500!" << endl;
        rewardMoney += 500;
    }

}
