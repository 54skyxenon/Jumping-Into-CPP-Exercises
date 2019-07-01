#include <iostream>
using namespace std;

#include "ytUpload.h"

ytUpload::ytUpload(string vidName, string username, int numSubs, vector<string> tags, int minutes, int seconds)
{
    this->vidName = vidName;
    this->username = username;
    this->minutes = minutes;
    this->seconds = seconds;
    this->numSubs = numSubs;
    this->itemNo = ++StringConvertable::itemNo;

    for (unsigned int i = 0; i < tags.size(); i++)
        this->tags.push_back(tags[i]);
}

string ytUpload::toString()
{
    stringstream str, str2, str3;
    str << numSubs;
    str2 << minutes;
    str3 << seconds;

    stringstream itemNumber;
    itemNumber << this->itemNo;
    string vidInfo = itemNumber.str() + ". " + vidName;

    vidInfo += "\n" + username + ": " + str.str() + " subscribers\n";

    vidInfo += "Video length: " + str2.str() + ":";

    if (seconds >= 10)
        vidInfo += str3.str() + "\n";
    else
        vidInfo += "0" + str3.str() + "\n";

    vidInfo += "Tags: [";

    for (unsigned int i = 0; i < tags.size(); i++)
    {
        vidInfo += tags[i];
        if (i != tags.size() - 1)
            vidInfo += ", ";
    }
    vidInfo += "]";

    time_t now = time(NULL);
    string dt = ctime(&now);

    vidInfo += "\nPublished on: " + dt + "\n";
    return vidInfo;
}
