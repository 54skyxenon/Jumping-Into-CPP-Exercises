#ifndef HIGHSCOREELEMENT_H
#define HIGHSCOREELEMENT_H

class HighScoreElement: public Comparable
{
    public:
        HighScoreElement(int score, string name);
        int compare(Comparable &other);
        void printInfo();

    private:
        int score;
        string name;
};

#endif // HIGHSCOREELEMENT_H
