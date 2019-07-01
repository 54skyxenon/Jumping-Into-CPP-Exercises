#include <iostream>
using namespace std;

void hanoi(unsigned int n, char from, char temp, char to)
{
    if (n == 1)
        cout << from << " to " << to << endl;
	else
    {
        hanoi(n-1, from, to, temp);
        cout << from << " to " << to << endl;
        hanoi(n-1, temp, from, to);
    }
}

int main()
{
    unsigned int disks;
    cout << "Enter the number of disks to put on the 1st peg: ";
    cin >> disks;
    hanoi(disks, 'A', 'B', 'C');
}
