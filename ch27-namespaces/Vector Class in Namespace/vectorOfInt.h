#ifndef VECTOR_CLASS_H
#define VECTOR_CLASS_H

namespace brandonsIntVector
{
    class vectorOfInt
    {
        public:
            vectorOfInt();
            vectorOfInt(int length); //2nd constructor
            vectorOfInt& operator= (const vectorOfInt &originalVec); //assignment operator
            vectorOfInt(const vectorOfInt &originalVec); //copy constructor
            ~vectorOfInt();

            int getIndex(int index);
            void setIndex(int index, int val);
            void pushback(int val);
            void pushfront(int val);
            void print();
        private:
            int* vecHead;
            int numOfElements;
            int indexOfLastOccupied;
            int* resizeVec();
    };
}
#endif // VECTOR_CLASS_H
