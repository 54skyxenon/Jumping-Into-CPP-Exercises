#include <iostream>
using namespace std;

char num;
int g = 0;
int omg = 0;
string specialCase[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
int input;

void one_to_ten(int input);

void everything_else(int input);

void printHundredThousand (int input);
void printTenThousand (int input);
void printThousand (int input);
void printHundred (int input);
void printTens (int input);
void printUnits (int input);

int HundredThousandsCheck (int input);
int TenThousandsCheck (int input);
int thousandsCheck(int input);
int hundredsCheck(int input);
int tensCheck(int input);
int unitCheck(int input);


int main()
{
    do {
        omg = 0;
        g = 0;
        cout << "Enter a number from 1 to 999999: ";
        cin >> input;

        if (input > -1000000 && input < 1000000)
        {
            cout << "Your number is: ";
            everything_else(input);
            cout << endl;
        }

        else if ( (input < -999999) || (input > 999999) )
        {
            do {
                cout << "Sorry, your number doesn't fit in that range! Try again: ";
                cin >> input;
            } while (input < -999999 && input > 999999);

            if (input > -1000000 && input < 1000000)
            {
                cout << "Your number is: ";
                everything_else(input);
                cout << endl;
            }
        }

        cout << "Enter another number? (Y/N)" << endl;
        cin >> num;
        cout << endl;

    } while ((num == 'y') || (num == 'Y'));

    cout << "Thank you for using!" << endl;
}

void everything_else(int input)
{
    if (input == 0)
    {
        cout << "zero";
    }
    if (!(HundredThousandsCheck(input) == 0))
    {
        printHundredThousand(input);
    }
    if (!(TenThousandsCheck(input) == 0))
    {
        if (TenThousandsCheck(input) == 1)
        {
            cout << specialCase[thousandsCheck(input)] << " ";
            omg++;
        }
        else if ( (TenThousandsCheck(input) != 1) && (omg == 0))
        {
            printTenThousand(input);
        }
    }

    if (input > 999)
    {
        printThousand(input);
        cout << "thousand ";
    }
    if (!(hundredsCheck(input) == 0))
    {
        printHundred(input);
        if (input > 99)
        {
            cout << "hundred ";
        }
    }

    if (!(tensCheck(input) < 2))
    {
        printTens(input);
    }

    if (input < 20)
    {
        if (input == 11)
            cout << "eleven ";
        else if (input == 12)
            cout << "twelve ";
        else if (input == 13)
            cout << "thirteen ";
        else if (input == 14)
            cout << "fourteen ";
        else if (input == 15)
            cout << "fifteen ";
        else if (input == 16)
            cout << "sixteen ";
        else if (input == 17)
            cout << "seventeen ";
        else if (input == 18)
            cout << "eighteen ";
        else if (input == 19)
            cout << "nineteen ";
    }

    if (tensCheck(input) == 1)
    {
        cout << specialCase[unitCheck(input)];
        g++;
    }

    if ( (!(unitCheck(input) == 0)) && (g == 0) ) // make a function, then use return to check if special case ran
    {
        printUnits(input);
    }
}

int HundredThousandsCheck (int input)
{
    int numCheck = (input % 1000000)/100000;
    return numCheck;
}
int TenThousandsCheck(int input)
{
    int numCheck = (input % 100000)/10000;
    return numCheck;
}
int thousandsCheck(int input)
{
    int numCheck = (input % 10000)/1000;
    return numCheck;
}
int hundredsCheck(int input)
{
    int numCheck = (input % 1000) /100;
    return numCheck;
}
int tensCheck(int input)
{
    int numCheck = (input % 100) /10;
    return numCheck;
}
int unitCheck(int input)
{
    int numCheck = input % 10;
    return numCheck;
}

void printHundredThousand(int input)
{
    if (HundredThousandsCheck(input) == 1)
    {
        cout << "one hundred ";
    }
    if (HundredThousandsCheck(input) == 2)
    {
        cout << "two hundred ";
    }
    if (HundredThousandsCheck(input) == 3)
    {
        cout << "three hundred ";
    }
    if (HundredThousandsCheck(input) == 4)
    {
        cout << "four hundred ";
    }
    if (HundredThousandsCheck(input) == 5)
    {
        cout << "five hundred ";
    }
    if (HundredThousandsCheck(input) == 6)
    {
        cout << "six hundred ";
    }
    if (HundredThousandsCheck(input) == 7)
    {
        cout << "seven hundred ";
    }
    if (HundredThousandsCheck(input) == 8)
    {
        cout << "eight hundred ";
    }
    if (HundredThousandsCheck(input) == 9)
    {
        cout << "nine hundred ";
    }
}
void printTenThousand (int input)
{
    if (TenThousandsCheck(input) == 1)
    {
        cout << "ten ";
    }
    if (TenThousandsCheck(input) == 2)
    {
        cout << "twenty ";
    }
    if (TenThousandsCheck(input) == 3)
    {
        cout << "thirty ";
    }
    if (TenThousandsCheck(input) == 4)
    {
        cout << "forty ";
    }
    if (TenThousandsCheck(input) == 5)
    {
        cout << "fifty ";
    }
    if (TenThousandsCheck(input) == 6)
    {
        cout << "sixty ";
    }
    if (TenThousandsCheck(input) == 7)
    {
        cout << "seventy ";
    }
    if (TenThousandsCheck(input) == 8)
    {
        cout << "eighty ";
    }
    if (TenThousandsCheck(input) == 9)
    {
        cout << "ninety ";
    }
}
void printThousand (int input)
{
    if (thousandsCheck(input) == 1)
    {
        cout << "one ";
    }
    if (thousandsCheck(input) == 2)
    {
        cout << "two ";
    }
    if (thousandsCheck(input) == 3)
    {
        cout << "three ";
    }
    if (thousandsCheck(input) == 4)
    {
        cout << "four ";
    }
    if (thousandsCheck(input) == 5)
    {
        cout << "five ";
    }
    if (thousandsCheck(input) == 6)
    {
        cout << "six ";
    }
    if (thousandsCheck(input) == 7)
    {
        cout << "seven ";
    }
    if (thousandsCheck(input) == 8)
    {
        cout << "eight ";
    }
    if (thousandsCheck(input) == 9)
    {
        cout << "nine ";
    }
}
void printHundred (int input)
{
    if (hundredsCheck(input) == 1)
    {
        cout << "one ";
    }
    if (hundredsCheck(input) == 2)
    {
        cout << "two ";
    }
    if (hundredsCheck(input) == 3)
    {
        cout << "three ";
    }
    if (hundredsCheck(input) == 4)
    {
        cout << "four ";
    }
    if (hundredsCheck(input) == 5)
    {
        cout << "five ";
    }
    if (hundredsCheck(input) == 6)
    {
        cout << "six ";
    }
    if (hundredsCheck(input) == 7)
    {
        cout << "seven ";
    }
    if (hundredsCheck(input) == 8)
    {
        cout << "eight ";
    }
    if (hundredsCheck(input) == 9)
    {
        cout << "nine ";
    }
}
void printTens (int input)
{
    if (tensCheck(input) == 1)
    {
        cout << "ten ";
    }
    if (tensCheck(input) == 2)
    {
        cout << "twenty ";
    }
    if (tensCheck(input) == 3)
    {
        cout << "thirty ";
    }
    if (tensCheck(input) == 4)
    {
        cout << "forty ";
    }
    if (tensCheck(input) == 5)
    {
        cout << "fifty ";
    }
    if (tensCheck(input) == 6)
    {
        cout << "sixty ";
    }
    if (tensCheck(input) == 7)
    {
        cout << "seventy ";
    }
    if (tensCheck(input) == 8)
    {
        cout << "eighty ";
    }
    if (tensCheck(input) == 9)
    {
        cout << "ninety ";
    }
}
void printUnits(int input)
{
    if (unitCheck(input) == 1)
        cout << "one " << endl;
    if (unitCheck(input) == 2)
        cout << "two " << endl;
    if (unitCheck(input) == 3)
        cout << "three " << endl;
    if (unitCheck(input) == 4)
        cout << "four " << endl;
    if (unitCheck(input) == 5)
        cout << "five " << endl;
    if (unitCheck(input) == 6)
        cout << "six " << endl;
    if (unitCheck(input) == 7)
        cout << "seven " << endl;
    if (unitCheck(input) == 8)
        cout << "eight " << endl;
    if (unitCheck(input) == 9)
        cout << "nine " << endl;
}
