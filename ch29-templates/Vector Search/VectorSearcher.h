#ifndef VECTOR_SEARCH_H
#define VECTOR_SEARCH_H

template <typename vectorElementType>
class VectorSearcher
{
    public:
        VectorSearcher();
        bool elementInVector();
        void fetch();

    private:
        std::vector<vectorElementType> myVector;
};

template <typename vectorElementType>
VectorSearcher<vectorElementType>::VectorSearcher()
: myVector(0)
{}

template <typename vectorElementType>
bool VectorSearcher<vectorElementType>::elementInVector()
{
    vectorElementType element;
    std::cout << "Enter a value to find in the vector: ";
    std::cin >> element; //won't implement getline() for this

    while (std::cin.fail()) //replacement for !std::cin that WORKS FOR STRINGS!!!!!
    {
        std::cin.clear();
        std::cin.sync();
        std::cout << "Incompatible data, enter again: ";
        std::cin >> element;
    }

    for (unsigned int i = 0; i < myVector.size(); i++)
        if (myVector[i] == element)
            return true;

    return false;
}

template<typename vectorElementType>
void VectorSearcher<vectorElementType>::fetch()
{
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y')
    {
        vectorElementType input;
        std::cout << "Enter a value to store in the vector: ";
        std::cin >> input;

        while (std::cin.fail()) //replacement for !std::cin that WORKS FOR STRINGS!!!!!
        {
            std::cin.clear();
            std::cin.sync();
            std::cout << "Incompatible data, enter again: ";
            std::cin >> input;
        }

        myVector.push_back(input);
        std::cin.sync(); //purges stream

        std::cout << "Continue? (Y/N): ";
        std::cin >> ch;
    }
}

#endif
