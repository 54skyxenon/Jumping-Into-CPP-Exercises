#ifndef CASEINSENSITIVE_H
#define CASEINSENSITIVE_H

#include "Comparator.h"

class caseInsensitive: public Comparator
{
    public:
        caseInsensitive(string myString);
        int compare(const string& lhs, const string& rhs);
        void printData();
        string getData();

    private:
        string myString;
};

#endif // CASEINSENSITIVE_H
