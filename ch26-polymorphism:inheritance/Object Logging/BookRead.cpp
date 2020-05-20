#include <iostream>
using namespace std;

#include "BookRead.h"

BookRead::BookRead(int pagesRead, string nameOfBook, string author, string timeRead)
{
    this->pagesRead = pagesRead;
    this->nameOfBook = nameOfBook;
    this->author = author;
    this->timeRead = timeRead;
    this->itemNo = ++StringConvertable::itemNo;
}

string BookRead::toString()
{
    string bookInfo;
    stringstream itemNumber;
    itemNumber << this->itemNo;
    bookInfo += itemNumber.str() + ". \"" + nameOfBook + "\" by " + author + "\n";

    stringstream str;
    str << pagesRead;
    bookInfo += "Pages read: " + str.str() + "\n";
    bookInfo += "Time read: " + timeRead + "\n";

    time_t now = time(NULL);
    string dt = ctime(&now);
    bookInfo += "Read on: " + dt + "\n";

    return bookInfo;
}
