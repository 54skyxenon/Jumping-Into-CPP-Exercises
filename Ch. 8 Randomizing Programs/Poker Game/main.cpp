#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string card1 = "Ace of Spades",  card2 = "Two of Spades",  card3 = "Three of Spades",  card4 = "Four of Spades",  card5 = "Five of Spades",  card6 = "Six of Spades",  card7 = "Seven of Spades",  card8 = "Eight of Spades",  card9 = "Nine of Spades",  card10 = "Ten of Spades",  card11 = "Jack of Spades",  card12 = "Queen of Spades",  card13 = "King of Spades";
string card14 = "Ace of Hearts",  card15 = "Two of Hearts",  card16 = "Three of Hearts",  card17 = "Four of Hearts",  card18 = "Five of Hearts",  card19 = "Six of Hearts",  card20 = "Seven of Hearts",  card21 = "Eight of Hearts",  card22 = "Nine of Hearts",  card23 = "Ten of Hearts",  card24 = "Jack of Hearts",  card25 = "Queen of Hearts",  card26 = "King of Hearts";
string card27 = "Ace of Clubs",  card28 = "Two of Clubs",  card29 = "Three of Clubs",  card30 = "Four of Clubs",  card31 = "Five of Clubs",  card32 = "Six of Clubs",  card33 = "Seven of Clubs",  card34 = "Eight of Clubs",  card35 = "Nine of Clubs",  card36 = "Ten of Clubs",  card37 = "Jack of Clubs",  card38 = "Queen of Clubs",  card39 = "King of Clubs";
string card40 = "Ace of Diamonds",  card41 = "Two of Diamonds",  card42 = "Three of Diamonds",  card43 = "Four of Diamonds",  card44 = "Five of Diamonds",  card45 = "Six of Diamonds",  card46 = "Seven of Diamonds",  card47 = "Eight of Diamonds",  card48 = "Nine of Diamonds",  card49 = "Ten of Diamonds",  card50 = "Jack of Diamonds",  card51 = "Queen of Diamonds",  card52 = "King of Diamonds";

int num;
char input;

int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0, g2 = 0, h2 = 0, i2 = 0, j2 = 0, k2 = 0, l2 = 0, m2 = 0, n2 = 0, o2 = 0, p2 = 0, q2 = 0, r2 = 0, s2 = 0, t2 = 0, u2 = 0, v2 = 0, w2 = 0, x2 = 0, y2 = 0, z2 = 0;

void generate_hand();
void cards_in_hand();
void generate_cards();
void card_check();

int main()
{
    srand(time(NULL));
    generate_hand();

    cout << endl << "Another hand? (Y/N)" << endl;
    cin >> input;
    cout << endl;
    while (input == 'Y' || input == 'y'){generate_hand(); cout << endl << "Another hand? (Y/N)" << endl; cin >> input; cout << endl;}
}

void generate_hand()
{
    cards_in_hand();
}

void cards_in_hand()
{
    cout << "Your hand is:" << endl << endl;
    generate_cards();
}

void generate_cards()
{
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }

        card_check();
        card_check();
        card_check();
        card_check();
}

void card_check()
{
    if(a == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(b == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(c == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }

    }
    else if(d == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(e == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(f == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(g == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(h == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(i == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(j == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(k == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(l == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(m == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(n == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(o == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(p == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(q == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(r == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(s == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(t == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(u == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(v == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(w == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(x == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(y == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(z == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(a2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(b2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(c2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(d2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(e2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(f2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(g2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(h2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(i2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(j2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(k2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(l2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(m2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(n2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(o2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }

    else if(p2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(q2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(r2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(s2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(t2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(u2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(v2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(w2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(x2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 51: cout << card51 << endl; y2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(y2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 52: cout << card52 << endl; z2++; break;
        }
    }
    else if(z2 == 1)
    {
        num = rand() % (52 - 1 + 1) + 1;
        switch (num)
        {
            case 1: cout << card1 << endl; a++; break;
            case 2: cout << card2 << endl; b++; break;
            case 3: cout << card3 << endl; c++; break;
            case 4: cout << card4 << endl; d++; break;
            case 5: cout << card5 << endl; e++; break;
            case 6: cout << card6 << endl; f++; break;
            case 7: cout << card7 << endl; g++; break;
            case 8: cout << card8 << endl; h++; break;
            case 9: cout << card9 << endl; i++; break;
            case 10: cout << card10 << endl; j++; break;
            case 11: cout << card11 << endl; k++; break;
            case 12: cout << card12 << endl; l++; break;
            case 13: cout << card13 << endl; m++; break;
            case 14: cout << card14 << endl; n++; break;
            case 15: cout << card15 << endl; o++; break;
            case 16: cout << card16 << endl; p++; break;
            case 17: cout << card17 << endl; q++; break;
            case 18: cout << card18 << endl; r++; break;
            case 19: cout << card19 << endl; s++; break;
            case 20: cout << card20 << endl; t++; break;
            case 21: cout << card21 << endl; u++; break;
            case 22: cout << card22 << endl; v++; break;
            case 23: cout << card23 << endl; w++; break;
            case 24: cout << card24 << endl; x++; break;
            case 25: cout << card25 << endl; y++; break;
            case 26: cout << card26 << endl; z++; break;
            case 27: cout << card27 << endl; a2++; break;
            case 28: cout << card28 << endl; b2++; break;
            case 29: cout << card29 << endl; c2++; break;
            case 30: cout << card30 << endl; d2++; break;
            case 31: cout << card31 << endl; e2++; break;
            case 32: cout << card32 << endl; f2++; break;
            case 33: cout << card33 << endl; g2++; break;
            case 34: cout << card34 << endl; h2++; break;
            case 35: cout << card35 << endl; i2++; break;
            case 36: cout << card36 << endl; j2++; break;
            case 37: cout << card37 << endl; k2++; break;
            case 38: cout << card38 << endl; l2++; break;
            case 39: cout << card39 << endl; m2++; break;
            case 40: cout << card40 << endl; n2++; break;
            case 41: cout << card41 << endl; o2++; break;
            case 42: cout << card42 << endl; p2++; break;
            case 43: cout << card43 << endl; q2++; break;
            case 44: cout << card44 << endl; r2++; break;
            case 45: cout << card45 << endl; s2++; break;
            case 46: cout << card46 << endl; t2++; break;
            case 47: cout << card47 << endl; u2++; break;
            case 48: cout << card48 << endl; v2++; break;
            case 49: cout << card49 << endl; w2++; break;
            case 50: cout << card50 << endl; x2++; break;
            case 51: cout << card51 << endl; y2++; break;
        }
    }
}
