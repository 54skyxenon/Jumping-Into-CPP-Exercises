#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void qsort(int[], int, int);
void isort(int[], int);
void search(int[], int, int, int);

int main()
{
    int length;
    cin >> length;
    int arr[length];
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % RAND_MAX;
        cout << arr[i] << endl;
    }

    int target;
    isort(arr, length);

    cout << endl << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }

    do {
    cin >> target;
    search(arr, 0, length, target);
    } while (target != -1);
}

void isort(int myArray[], int length)
{
    for (int i = 1; i < length; i++)
    {
        while (myArray[i] < myArray[i-1] && i > 0)
        {
            int tmp = myArray[i];
            myArray[i] = myArray[i-1];
            myArray[i-1] = tmp;
            i--;
        }
    }
}

void qsort(int myArray[], int left, int right)
{
    int pivot = myArray[(left+right)/2], l = left, r = right;
    while (l <= r)
    {
        while (l < right && myArray[l] < pivot)
            l++;
        while (r > left && myArray[r] > pivot)
            r--;

        if (l <= r)
        {
            swap(myArray[l], myArray[r]);
            l++;
            r--;
        }
    }

    if (r > left)
        qsort(myArray, left, r);
    if (l < right)
        qsort(myArray, l, right);
}

void search(int myArray[], int left, int right, int target)
{
    int index = ((left + right)/2);
    int selectedElement = myArray[index];

    if (selectedElement == target)
        cout << "Your element was found at element: " << index << endl;
    else if (right - left <= 1)
        cout << "Your element wasn't found at all" << endl;
    else if (target > selectedElement)
        search(myArray, index, right, target);
    else if (target < selectedElement)
        search(myArray, left, index, target);
}
