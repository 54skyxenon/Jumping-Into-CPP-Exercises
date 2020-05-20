#include <iostream>
#include <cmath>
using namespace std;

int recursivePow(int base, int pow)
{
    if (pow < 0)
    {
        pow = abs(pow);
        return base * recursivePow(base, pow - 1);
    }
    if (pow == 0)
        return 1;
    else
        return base * recursivePow(base, pow - 1);
}

int main()
{
    int base, pow;
    cout << "Please enter your base, followed by the power: ";
    cin >> base >> pow;
    if (pow < 0)
        cout << "Your final result is: 1 / " << recursivePow(base, pow) << endl;
    else
        cout << "Your final result is: " << recursivePow(base, pow) << endl;
}
