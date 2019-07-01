#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
void selectionSort(int arr[], int size);
void GccSort(int arr[], int size);

int main()
{
    int size, input, num = 0;
    srand(time(NULL));
    do
    {
    cout << "Specify the size of your array: ";
    cin >> size;
    while (size <= 0)
    {
        cout << endl << "Pick a positive size, please don't be stupid: ";
        cin >> size;
    }
    int theArray[size];

    cout << endl << "Your current array: {";

    for (int i = 0; i < size; i++)
    {
        theArray[i] = rand() % 10000;
        cout << theArray[i];

        if (i != size - 1)
        {
            cout << ", ";
        }
        if (i % 10 == 0 && i != 0)
        {
            cout << endl;
        }
    }
    cout << "}" << endl;

    cout << endl << "Which sort do you wish to test? Input 0 to terminate." << endl << endl;
    cout << "1. Bubble" << endl << "2. Insertion" << endl << "3. Selection" << endl << "4. GCC Sort" << endl;
    cout << endl << "Choose the corresponding number: ";
    cin >> input;

        switch (input)
        {
            case 0:
                num = 5;
                break;
            case 1:
                bubbleSort(theArray, size);
                break;
            case 2:
                insertionSort(theArray, size);
                break;
            case 3:
                selectionSort(theArray, size);
                break;
            case 4:
            {
                int begin = clock();
                sort(theArray, theArray + size);
                int end = clock();
                cout << endl << "Your sorted array is: {";
                for (int i = 0; i < size; i++)
                {
                    cout << theArray[i];
                    if (i != size - 1)
                    {
                        cout << ", ";
                    }
                    if (i % 10 == 0 && i != 0)
                    {
                        cout << endl;
                    }
                }
                cout << "}" << endl << endl << "Your sort took: " << end - begin << " seconds." << endl;
                break;
            }


            default:
                cout << "Follow instructions dammit!" << endl;
        }
    } while (num != 5);

}

void bubbleSort(int arr[], int size)
{
    clock_t begin = clock();
    for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size - 1; y++)
		{
			if(arr[y] > arr[y+1])
			{
				int temp = arr[y+1];
				arr[y+1] = arr[y];
				arr[y] = temp;
			}
		}
	}
	clock_t end = clock();

	cout << endl << "Your sorted array: {";
	for (int x = 0; x < size; x++)
    {
        cout << arr[x];
        if (x != size - 1)
        {
            cout << ", ";
        }
        if (x % 10 == 0 && x != 0 && x != size - 1)
        {
            cout << endl;
        }
    }

	cout << "}" << endl << endl << "Your sort took: " << end - begin << " milliseconds" << endl << endl;
}

void insertionSort(int arr[], int size)
{
    clock_t begin = clock();
    for (int i = 0; i < size; i++)
    {
        int j = i + 1;
        int temp = arr[j];

        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }

    }
    clock_t end = clock();

    cout << endl << "Your sorted array is: {";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
        if (i % 10 == 0 && i != 0)
        {
            cout << endl;
        }
    }

    cout << "}" << endl << endl << "Your sort took: " << end - begin << " milliseconds" << endl << endl;
}

void selectionSort(int arr[], int size)
{

    clock_t begin = clock();
    for(int x = 0; x < size; x++)
	{
		int index_of_min = x;
		for(int y = x; y < size; y++)
		{
			if(arr[index_of_min] > arr[y])
			{
				index_of_min = y;
			}
		}
		int temp = arr[x];
		arr[x] = arr[index_of_min];
		arr[index_of_min] = temp;
	}
	clock_t end = clock();

	cout << endl << "Your sorted array: {";
	for (int x = 0; x < size; x++)
    {
        cout << arr[x];
        if (x != size - 1)
        {
            cout << ", ";
        }
        if (x % 10 == 0 && x != 0 && x != size - 1)
        {
            cout << endl;
        }
    }

	cout << "}" << endl << endl << "Your sort took: " << end - begin << " milliseconds" << endl << endl;
}

