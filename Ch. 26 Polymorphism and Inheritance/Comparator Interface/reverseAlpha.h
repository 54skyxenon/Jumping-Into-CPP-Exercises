#ifndef REVERSEALPHA_H
#define REVERSEALPHA_H

#include "Comparator.h"

class reverseAlpha: public Comparator
{
    public:
        reverseAlpha(string myString);
        int compare(const string& lhs, const string& rhs);
        void printData();
        string getData();

    private:
        string myString;
};

#endif // REVERSEALPHA_H
