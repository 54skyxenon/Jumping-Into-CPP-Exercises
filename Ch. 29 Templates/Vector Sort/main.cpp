#include <iostream>
#include <vector>
#include <utility>
#include <ctime>
#include <cstdlib>

template <typename sortableVector>
void printVector(const std::vector<sortableVector> &myVector)
{
    for (unsigned int i = 0; i < myVector.size(); i++)
        std::cout << myVector[i] << std::endl;
}

template <typename sortableVector>
void sortVector(std::vector<sortableVector> &myVector)
{
    for (unsigned int i = 1; i < myVector.size(); i++)
    {
        while (i > 0 && myVector[i] < myVector[i - 1])
        {
            std::swap(myVector[i], myVector[i - 1]);
            i--;
        }
    }
    printVector(myVector);
}

int main()
{
    srand(time(NULL));
    std::vector<double> myVector(0);

    char ch = 'Y';

    while (ch == 'y' || ch == 'Y')
    {
        double input;
        std::cin.sync();
        std::cout << "Enter your double: ";
        std::cin >> input;

        myVector.push_back(input);
        std::cout << "Continue? (Y/N): ";
        std::cin >> ch;
    }

    sortVector(myVector);
}
