#ifndef BOOKREAD_H
#define BOOKREAD_H

#include "StringConvertable.h"

class BookRead: public StringConvertable
{
    public:
        BookRead(int pagesRead, string nameOfBook, string author, string timeRead);
        string toString();

    private:
        int pagesRead;
        int itemNo;
        string nameOfBook;
        string author;
        string timeRead;
};

#endif // BOOKREAD_H
