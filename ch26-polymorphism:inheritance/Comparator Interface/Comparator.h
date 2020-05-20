#ifndef COMPARATOR_H
#define COMPARATOR_H

class Comparator
{
    public:
        virtual int compare(const string& lhs, const string& rhs) = 0;
        virtual void printData() = 0;
        virtual string getData() = 0;
};

#endif // COMPARATOR_H
