#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

struct spaceship
{
    int x; // coordinates
    int y;
};

spaceship AmountOfShips[10];
spaceship updatePosition(spaceship ship);

int main()
{
    srand(time(NULL));
    cout << "Screen boundaries: (1028, 768)" << endl << endl;
    for (int i = 0; i < 10; i++)
    {
        AmountOfShips[i].x = rand() % 1024; // sets coordinates of ships
        AmountOfShips[i].y = rand() % 768;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << endl << endl << "Ship number " << i + 1 << " is at " << "( " << AmountOfShips[i].x << ", " << AmountOfShips[i].y << " )" << endl;
        cout << endl << "Ship number " << i + 1 << " has moved ";
        updatePosition(AmountOfShips[i]);
        cout << endl << endl << "Ship number " << i + 1 << " has moved out of the screen";
    }
    cout << endl;
    system("pause");
}

spaceship updatePosition(spaceship ship)
{
    while (ship.x < 1024 || ship.y < 768)
    {
        int a = rand() % 100;
        ship.x += a; // moves ship left-right an arbitrary amount
        cout << endl << a << " horizontally and ";
        int b = rand() % 100;
        cout << b <<  " vertically";
        ship.y += b; // moves ship up-down an arbitrary amount
    }

    return ship;
}
