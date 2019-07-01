#ifndef VECTOR_CLASS_H
#define VECTOR_CLASS_H

template <typename vectorType> class vectorOfAll
{
    private:
        vectorType* vecHead;
        int numOfElements;
        int indexOfLastOccupied;

        vectorType* resizeVec()
        {
            if (numOfElements == 0)
                numOfElements++;

            vectorType* newVec = new vectorType[numOfElements * 2];

            for (int i = 0; i < numOfElements; i++)
                newVec[i] = vecHead[i];

            delete[] vecHead;
            vecHead = NULL;
            numOfElements *= 2;

            return newVec;
        }

    public:
        vectorOfAll()
        {
            vecHead = new vectorType[32];
            numOfElements = 32;
            indexOfLastOccupied = 0;
        }

        vectorOfAll(int length)
        {
            vecHead = new vectorType[length];
            numOfElements = length;
            indexOfLastOccupied = 0;
        }

        vectorOfAll& operator= (const vectorOfAll &originalVec) //assignment operator
        {
            std::cout << "Assignment operator is being called!" << std::endl;

            if (this == &originalVec)
                return *this;

            delete[] this->vecHead;
            this->vecHead = new vectorType[numOfElements];

            for (vectorType i = 0; i < numOfElements; i++)
                this->vecHead[i] = originalVec.vecHead[i];

            this->numOfElements = originalVec.numOfElements;
            this->indexOfLastOccupied = originalVec.indexOfLastOccupied;

            return *this;
        }

        vectorOfAll(const vectorOfAll &originalVec)
        :vecHead(NULL)
        {
            std::cout << "Copy constructor is being called!" << std::endl;
            this->vecHead = new vectorType[originalVec.numOfElements];
            this->numOfElements = originalVec.numOfElements;
            this->indexOfLastOccupied = originalVec.indexOfLastOccupied;

            for (vectorType i = 0; i < numOfElements; i++)
                this->vecHead[i] = originalVec.vecHead[i];
        }

        ~vectorOfAll()
        {
            std::cout << "Destructor is being called!" << std::endl;
            delete[] vecHead;
            vecHead = NULL;
        }

        vectorType getIndex(int index)
        {
            while (!std::cin || index >= numOfElements)
            {
                std::cin.clear();
                std::cin.sync();
                std::cout << "U are dum m8, try again: ";
                std::cin >> index;
            }

            return vecHead[index];
        }

        void setIndex(int index, vectorType val)
        {
            while (!std::cin || index > numOfElements) //does not ensure you put in a correct value, beware
            {
                std::cin.clear();
                std::cin.sync();
                std::cout << "U are dum m8, try again (enter the index again): ";
                std::cin >> index;
            }

            if (index > indexOfLastOccupied)
                indexOfLastOccupied = index + 1;

            vecHead[index] = val;
        }
        void pushback(vectorType val)
        {
            if (indexOfLastOccupied < numOfElements)
                vecHead[indexOfLastOccupied++] = val;
            else
            {
                vecHead = resizeVec();
                vecHead[indexOfLastOccupied++] = val;
            }
        }
        void pushfront(vectorType val)
        {
            vectorType tmp = vecHead[0];
            indexOfLastOccupied++;
            vecHead[0] = val;

            if (numOfElements <= indexOfLastOccupied)
                vecHead = resizeVec();
            for (int i = numOfElements - 1; i > 0; i--)
            {
                if (i == 1)
                    vecHead[i] = tmp;
                else
                    vecHead[i] = vecHead[i - 1];
            }
        }
        void print()
        {
            std::cout << std::endl;
            for (int i = 0; i < numOfElements; i++)
                std::cout << i << ". " << vecHead[i] << std::endl;
        }
};
#endif // VECTOR_CLASS_H
