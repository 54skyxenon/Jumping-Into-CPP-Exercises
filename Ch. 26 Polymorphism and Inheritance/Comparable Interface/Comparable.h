#ifndef COMPARABLE_H
#define COMPARABLE_H

class Comparable
{
    public:
        virtual int compare(Comparable &other) = 0;
        virtual void printInfo() = 0;
};

#endif // COMPARABLE_H
