#ifndef YTUPLOAD_H
#define YTUPLOAD_H

#include "StringConvertable.h"

class ytUpload: public StringConvertable
{
    public:
        ytUpload(string vidName, string username, int numSubs, vector<string> tags, int minutes, int seconds);
        string toString();

    private:
        string vidName;
        string username;
        vector<string> tags;
        int minutes;
        int seconds;
        int numSubs;
        int itemNo;
};

#endif // YTUPLOAD_H
