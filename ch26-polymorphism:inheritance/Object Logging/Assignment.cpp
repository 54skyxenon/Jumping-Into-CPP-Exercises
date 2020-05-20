#include <iostream>
#include <iomanip>
using namespace std;

#include "Assignment.h"

Assignment::Assignment(string assignmentName, string category, int pointsAttained, int pointsTotal, bool isMissing)
{
    this->assignmentName = assignmentName;
    this->category = category;
    this->isMissing = this->isMissing;
    if (!isMissing)
    {
        this->pointsAttained = pointsAttained;
        this->pointsTotal = pointsTotal;
        this->finalPercentage = ((double)pointsAttained / (double)pointsTotal) * 100;
    }
    else
    {
        this->pointsAttained = 0;
        this->pointsTotal = pointsTotal;
        this->finalPercentage = 0;
    }
    this->itemNo = ++StringConvertable::itemNo;
}

string Assignment::toString()
{
    stringstream itemNumber;
    itemNumber << this->itemNo;

    string gradeDetails = itemNumber.str() + ". " + assignmentName;
    gradeDetails += "\n" + category + "\n";

    stringstream str, str2, str3;
    str << pointsAttained;
    str2 << pointsTotal;
    str3 << finalPercentage;

    if (!isMissing)
        gradeDetails += str.str() + "/" + str2.str() + "\n";

    else
        gradeDetails += str.str() + "/" + str2.str() + "MISSING \n";


    gradeDetails += str3.str() + "% \n";

    time_t now = time(NULL);
    string dt = ctime(&now);
    gradeDetails += "Due on: " + dt + "\n";

    return gradeDetails;
}
