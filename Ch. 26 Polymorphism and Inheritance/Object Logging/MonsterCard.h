#ifndef MONSTERCARDPURCHASE_H
#define MONSTERCARDPURCHASE_H

#include "StringConvertable.h"

class MonsterCard: public StringConvertable
{
    public:
        MonsterCard(int ATK, int DEF, int rankOrLevel, string cardType, string attribute, string cardName, bool hasEffect, bool isFusion, bool isSynchro, bool isXyz, bool isPendulum, bool isRitual, string additionalTypes, int scale);
        string toString();

    private:
        int ATK;
        int DEF;
        int rankOrLevel;
        int scale;
        int itemNo;
        string cardType;
        string attribute;
        string cardName;
        string additionalTypes;
        bool hasEffect;
        bool isXyz;
        bool isSynchro;
        bool isPendulum;
        bool isFusion;
        bool isRitual;
};

#endif // MONSTERCARDPURCHASE_H
