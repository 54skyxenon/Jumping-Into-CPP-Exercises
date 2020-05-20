#include <iostream>
using namespace std;

#include "MonsterCard.h"

MonsterCard::MonsterCard(int ATK, int DEF, int rankOrLevel, string cardType, string attribute, string cardName, bool hasEffect, bool isFusion, bool isSynchro, bool isXyz, bool isPendulum, bool isRitual, string additionalTypes, int scale)
{
    this->ATK = ATK;
    this->DEF = DEF;
    this->rankOrLevel = rankOrLevel;
    this->attribute = attribute;
    this->cardName = cardName;
    this->cardType = cardType;
    this->hasEffect = hasEffect;
    this->isXyz = isXyz;
    this->isFusion = isFusion;
    this->isSynchro = isSynchro;
    this->isPendulum = isPendulum;
    this->isRitual = isRitual;
    this->scale = scale;
    this->additionalTypes = additionalTypes;
    this->itemNo = ++StringConvertable::itemNo;
}

string MonsterCard::toString()
{
    stringstream itemNumber;
    itemNumber << this->itemNo;
    string fullCardDesc = itemNumber.str() + ". " + cardName + " (" + attribute + ") \n";

    stringstream str;
    str << rankOrLevel;

    if (isXyz)
    {
        fullCardDesc += "Rank " + str.str() + "\n[";
    }
    else
    {
        fullCardDesc += "Level " + str.str() + "\n[";
    }

    fullCardDesc += cardType;

    if (isXyz)
    {
        fullCardDesc += "/Xyz";
    }
    if (isSynchro)
    {
        fullCardDesc += "/Synchro";
    }
    if (isFusion)
    {
        fullCardDesc += "/Fusion";
    }
    if (isRitual)
    {
        fullCardDesc += "/Ritual";
    }
    if (isPendulum)
    {
        fullCardDesc += "/Pendulum";
    }
    if (additionalTypes != "")
    {
        fullCardDesc += "/" + additionalTypes;
    }
    if (hasEffect)
    {
        fullCardDesc += "/Effect";
    }
    fullCardDesc += "] ";

    stringstream str2;
    str2 << scale;

    if (scale != -1)
        fullCardDesc += str2.str() + "|" + str2.str() + "\n";
    else
        fullCardDesc += "\n";

    stringstream str3;
    str3 << ATK;
    fullCardDesc += "ATK/" + str3.str();
    stringstream str4;
    str4 << DEF;
    fullCardDesc += " DEF/" + str4.str() + "\n";

    time_t now = time(NULL);
    string dt = ctime(&now);
    fullCardDesc += "Added to YGOpro database on: " + dt + "\n";

    return fullCardDesc;
}
