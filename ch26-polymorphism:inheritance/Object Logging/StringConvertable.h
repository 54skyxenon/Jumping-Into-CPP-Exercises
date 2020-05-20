#ifndef STRINGCONVERTABLE_H
#define STRINGCONVERTABLE_H

#include <ctime>
#include <sstream>
#include <vector>

class StringConvertable
{
    public:
        virtual string toString() = 0; //returns string representation of object
    protected:
        static int itemNo; //static member among all subclasses, use of protected too :)
};

#endif // STRINGCONVERTABLE_H
