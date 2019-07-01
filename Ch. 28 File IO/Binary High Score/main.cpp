#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    //Lesson learned: NEVER USE EOF AS A LOOP CONDITION, use while (read()) or (write())
    fstream highScoreFile("myHighScores.bin", ios::in | ios::out | ios::binary);

    if (!highScoreFile.is_open())
    {
        cout << "Could not open file!" << endl;
        return -1;
    }

    int new_high_score;
    cout << "Enter a new high score: " << endl;
    cin >> new_high_score;

    streampos pre_score_pos = highScoreFile.tellg();
    int cur_score;

    while (highScoreFile.read(reinterpret_cast<char*>(&cur_score), sizeof(cur_score)))
    {
        if (cur_score <= new_high_score)
            break;
        pre_score_pos = highScoreFile.tellg();
    }

    if (!highScoreFile.eof() && highScoreFile.fail())
    {
        cout << "Bad score read -- exiting" << endl;
        highScoreFile.close();
        return -1;
    }

    highScoreFile.clear();
    highScoreFile.seekg(pre_score_pos);

    vector<int> myRemainingScores(0);
    int currentScore;

    while (highScoreFile.read(reinterpret_cast<char*>(&currentScore), sizeof(currentScore)))
        myRemainingScores.push_back(currentScore);

    if (!highScoreFile.eof() && highScoreFile.fail())
    {
        cout << "Bad score read -- exiting" << endl;
        highScoreFile.close();
        return -1;
    }

    highScoreFile.clear();
    highScoreFile.seekp(pre_score_pos);

    highScoreFile.write(reinterpret_cast<char*>(&new_high_score), sizeof(new_high_score));

    for (unsigned int i = 0; i < myRemainingScores.size(); i++)
        highScoreFile.write(reinterpret_cast<char*>(&myRemainingScores[i]), sizeof(myRemainingScores[i]));

    highScoreFile.seekg(0, ios_base::beg);
    int scoreRead;

    while (highScoreFile.read(reinterpret_cast<char*>(&scoreRead), sizeof(scoreRead)))
        cout << endl << scoreRead;

    if (!highScoreFile.eof() && highScoreFile.fail())
    {
        cout << "Bad score read -- exiting" << endl;
        highScoreFile.close();
        return -1;
    }
    highScoreFile.clear();

    cout << endl;
    highScoreFile.close();
}
