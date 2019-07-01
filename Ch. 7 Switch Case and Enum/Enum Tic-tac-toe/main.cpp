#include <iostream>
using namespace std;

void playerTurnO();
void playerTurnX();
void spaces();
void space_check();
void play_game();

enum space_filler{blank = 0, X = 1, O = 2};

space_filler center = blank;
space_filler Upper_center = blank;
space_filler Bottom_center = blank;
space_filler Left_center = blank;
space_filler Right_center = blank;
space_filler Upper_Left_Corner = blank;
space_filler Upper_Right_Corner = blank;
space_filler Bottom_left_corner = blank;
space_filler Bottom_right_corner = blank;

int input;

int main()
{
    cout << "TIC-TAC-TOE:" << endl << endl;
    cout << "Player 1 is O!" << endl;
    cout << "Player 2 is X!" << endl;
    cout << endl << "Instructions: Press the number of the space that you wish to put your O/X." << endl;
    cout << "Objective: Get 3 in a row of O/X to win! That's it!" << endl << endl;

    spaces();
    play_game();

}

void play_game()
{
    for (int i = 0; i < 9;)
    {
        playerTurnO();
        space_check();
        switch(input)
        {
            case 1: center = O; break;
            case 2: Upper_center = O; break;
            case 3: Bottom_center = O; break;
            case 4: Left_center = O; break;
            case 5: Right_center = O; break;
            case 6: Upper_Left_Corner = O; break;
            case 7: Upper_Right_Corner = O; break;
            case 8: Bottom_left_corner = O; break;
            case 9: Bottom_right_corner = O; break;
        }
        spaces();
        i++;
        if(center == O && Left_center == O && Upper_Right_Corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(center == O && Upper_center == O && Bottom_center == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(center == O && Right_center == O && Bottom_right_corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(Upper_center == O && Right_center == O && Bottom_left_corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(Bottom_center == O && Upper_Left_Corner == O && Bottom_right_corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(Left_center == O && Right_center == O && Upper_Left_Corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(Upper_Right_Corner == O && Bottom_left_corner == O && Bottom_right_corner == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if(Upper_Right_Corner == O && Right_center == O && Bottom_center == O)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        if (i == 9){cout << "Sorry I guess it's a tie!" << endl; break;}

        playerTurnX();
        space_check();
        switch(input)
        {
            case 1: center = X; break;
            case 2: Upper_center = X; break;
            case 3: Bottom_center = X; break;
            case 4: Left_center = X; break;
            case 5: Right_center = X; break;
            case 6: Upper_Left_Corner = X; break;
            case 7: Upper_Right_Corner = X; break;
            case 8: Bottom_left_corner = X; break;
            case 9: Bottom_right_corner = X; break;
        }
        spaces();
        i++;

        if(center == X && Left_center == X && Upper_Right_Corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(center == X && Upper_center == X && Bottom_center == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(center == X && Right_center == X && Bottom_right_corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(Upper_center == X && Right_center == X && Bottom_left_corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(Bottom_center == X && Upper_Left_Corner == X && Bottom_right_corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(Left_center == X && Right_center == X && Upper_Left_Corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(Upper_Right_Corner == X && Bottom_left_corner == X && Bottom_right_corner == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
        else if(Upper_Right_Corner == X && Right_center == X && Bottom_center == X)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }

        if (i == 9){cout << "Sorry I guess it's a tie!" << endl; break;}
    }
}

void spaces()
{
    switch (center)
    {
        case 0: cout << "1. __     "; break;
        case 1: cout << "1. X     "; break;
        case 2: cout << "1. O     "; break;
    }
    switch (Upper_center)
    {
        case 0: cout << "2. __     "; break;
        case 1: cout << "2. X     "; break;
        case 2: cout << "2. O     "; break;
    }
    switch (Bottom_center)
    {
        case 0: cout << "3. __     " << endl << endl; break;
        case 1: cout << "3. X     " << endl << endl; break;
        case 2: cout << "3. O     " << endl << endl; break;
    }
    switch (Left_center)
    {
        case 0: cout << "4. __     "; break;
        case 1: cout << "4. X     "; break;
        case 2: cout << "4. O     "; break;
    }
    switch (Right_center)
    {
        case 0: cout << "5. __     "; break;
        case 1: cout << "5. X     "; break;
        case 2: cout << "5. O     "; break;
    }
    switch (Upper_Left_Corner)
    {
        case 0: cout << "6. __     " << endl << endl; break;
        case 1: cout << "6. X     " << endl << endl; break;
        case 2: cout << "6. O     " << endl << endl; break;
    }
    switch (Upper_Right_Corner)
    {
        case 0: cout << "7. __     "; break;
        case 1: cout << "7. X     "; break;
        case 2: cout << "7. O     "; break;
    }
    switch (Bottom_left_corner)
    {
        case 0: cout << "8. __     "; break;
        case 1: cout << "8. X     "; break;
        case 2: cout << "8. O     "; break;
    }
    switch (Bottom_right_corner)
    {
        case 0: cout << "9. __     " << endl << endl; break;
        case 1: cout << "9. X     " << endl << endl; break;
        case 2: cout << "9. O     " << endl << endl; break;
    }
}


void playerTurnO()
{
    cout << endl << endl << "Player 1's (o) turn: ";
    cin >> input;
    cout << endl << endl;
}

void playerTurnX()
{
    cout << endl << endl << "Player 2's (x) turn: ";
    cin >> input;
    cout << endl << endl;
}

void space_check()
{
    if (input == 1 && (center == X || center == O))
    {
        while (input == 1)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 2 && (Upper_center == X || Upper_center == O))
    {
        while (input == 2)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 3 && (Bottom_center == X || Bottom_center == O))
    {
        while (input == 3)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 4 && (Left_center == X || Left_center == O))
    {
        while (input == 4)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 5 && (Right_center == X || Right_center == O))
    {
        while (input == 5)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 6 && (Upper_Left_Corner == X || Upper_Left_Corner == O))
    {
        while (input == 6)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 7 && (Upper_Right_Corner == X || Upper_Right_Corner == O))
    {
        while (input == 7)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 8 && (Bottom_left_corner == X || Bottom_left_corner == O))
    {
        while (input == 8)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
    if (input == 9 && (Bottom_right_corner == X || Bottom_right_corner == O))
    {
        while (input == 9)
        {
            cout << "Sorry, that space is taken! Try again: ";
            cin >> input;
            cout << endl;
        }
    }
}
