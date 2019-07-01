#include <iostream>
using namespace std;

#include "Comparable.h"
#include "HighScoreElement.h"

HighScoreElement::HighScoreElement(int score, string name)
{
    this->score = score;
    this->name = name;
}

int HighScoreElement::compare(Comparable &other)
{
    int otherHighScore = dynamic_cast<HighScoreElement&>(other).score;
    string otherName = dynamic_cast<HighScoreElement&>(other).name;

    if (this->score > otherHighScore)
        return 1;

    else if (this->score == otherHighScore)
    {
        if (this->name > otherName)
            return 1;
        else if (this->name == otherName)
            return 0;
        else
            return -1;
    }

    else
        return -1;
}

void HighScoreElement::printInfo()
{
    cout << name << ": " << score;
}
