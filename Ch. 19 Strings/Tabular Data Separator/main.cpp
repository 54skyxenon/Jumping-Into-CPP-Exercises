#include <iostream>
#include <string>
#include <vector>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijjklmnopqrstuvwxyz";
const string numbers = "0123456789 ";

char determineSeperator(const string &input)
{
    vector<char> eligible_seperators(0);

    for (unsigned int i = 0; i < input.length(); i++)
    {
        unsigned int isLetter = alphabet.find(input[i]);
        unsigned int isNumber = numbers.find(input[i]);
        bool contains = false;

        for (unsigned int j = 0; j < eligible_seperators.size(); j++)
            if (eligible_seperators[j] == input[i])
                contains = true;

        if (isLetter == string::npos && isNumber == string::npos && !contains)
            eligible_seperators.push_back(input[i]);
    }

    cout << "Which one do you want as your delimiter?" << endl;

    for (unsigned int i = 0; i < eligible_seperators.size(); i++)
        cout << "\n" << i + 1 << ". " << eligible_seperators[i];

    int choice;
    cout << endl << "Your choice: ";
    cin >> choice;

    return eligible_seperators[choice - 1];
}

int main()
{
    string input;
    cout << "Enter your full name, then your email (separate these two inputs with any delimiter you wish): ";
    getline(cin, input, '\n');

    char seperator = determineSeperator(input);
    string name = input.substr(0, input.find(seperator));
    string email = input.substr(input.find(seperator) + 1, input.length());

    cout << name << "'s email is " << email << endl;

    while (1)
    {
        string realName = "";
        cout << endl << "Enter your name, nationality, gender, hometown, email, and age (leave your name blank to quit): ";
        getline(cin, realName, seperator);

        if (realName.size() == 0 || realName == "\n")
            break;

        string nationality;
        getline(cin, nationality, seperator);

        string gender;
        getline(cin, gender, seperator);

        string hometown;
        getline(cin, hometown, seperator);

        string realEmail;
        getline(cin, realEmail, seperator);

        string age;
        getline(cin, age, '\n');

        cout << realName << " is a " << nationality << " " << gender << " living in " << hometown
        << " whose email is " << realEmail << " and who is currently "
        << age << " years old." << endl;
    }
}
