#include <iostream>
using namespace std;

bool isPrime(int num);
int sum = 0;

int main()
{
    cout << "This program displays the sum of the factors of prime numbers 1-1000: " << endl;
    for (int j = 0; j <= 1000; j++)
    {
        int sum = 0;
        sum += j + 1;
        if (isPrime(sum))
        {
            cout << sum - 1 << endl;
        }
    }
    cin.get();
}

bool isPrime(int num)
{
    if (num <= 2)
    {
        return true;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
