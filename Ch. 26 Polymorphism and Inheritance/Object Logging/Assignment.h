#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "StringConvertable.h"

class Assignment: public StringConvertable
{
    public:
        Assignment(string assignmentName, string category, int pointsAttained, int pointsTotal, bool isMissing);
        string toString();

    private:
        double finalPercentage;
        int pointsAttained;
        int pointsTotal;
        int itemNo;
        string assignmentName;
        bool isMissing;
        string category;
};

#endif // ASSIGNMENT_H
