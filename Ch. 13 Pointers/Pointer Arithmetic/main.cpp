#include <iostream>
using namespace std;

int a, b, sum;

int functionPtr(int *addition, int *num1, int *num2);

int main()
{
    cin >> a >> b;
    cout << "Your product is: " << functionPtr(&sum, &a, &b) << endl;
    cout << "Your sum is: " << sum;
}

int functionPtr(int *addition, int *num1, int *num2)
{
    *addition = *num1 + *num2;
    return *num1 * *num2;
}


