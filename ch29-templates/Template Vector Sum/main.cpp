#include <iostream>
#include <vector>

template<typename numericType>
numericType vectorSum(std::vector<numericType> myVector)
{
    numericType count = 0;

    for (unsigned int i = 0; i < myVector.size(); i++)
        count += myVector[i];

    return count;
}

template<typename numericType>
void fetchValues(std::vector<numericType> &myVector)
{
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y')
    {
        numericType input;
        std::cout << "Enter a numeric value to store in the vector: ";
        std::cin >> input;

        while (!input)
        {
            std::cin.clear();
            std::cin.sync();
            std::cout << "Incompatible data, enter again: ";
            std::cin >> input;
        }

        myVector.push_back((numericType)input);
        std::cin.sync(); //new content: purges input stream

        std::cout << "Continue? (Y/N): ";
        std::cin >> ch;
    }
}

int main()
{
    std::vector<double> myVector(0);
    fetchValues(myVector);
    std::cout << std::endl << "Your total vector sum is: " << vectorSum(myVector) << std::endl;
}
