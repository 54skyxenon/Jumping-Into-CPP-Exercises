#include <iostream>
using namespace std;

void renderHTML(const string &embed)
{
    unsigned int i = 0;
    unsigned int currentLetter = 0;
    string linkurl;

    while (i != embed.length())
    {
        int j = i;
        i = min(embed.find("</b>", i), min(embed.find("</i>", i), min(embed.find("</a>", i), min(embed.length(),
        min(embed.find("<a href=", i), min(embed.find("</body>", i), min(embed.find("<head>", i),
        min(embed.find("<body>", i), min(embed.find("<b>", i), embed.find("<i>", i)))))))))); //search for closest tag to parse

        while (currentLetter != i)
            cout << embed[currentLetter++]; //print everything up to a tag/end tag

        //one if statement to handle each tag and its end tag
        if (i == embed.find("<head>", j))
        {
            i = embed.find("</head>", i);
            i += 7;
            currentLetter = i;
        }

        else if (i == embed.find("</body>", j))
        {
            i += 7;
            currentLetter = i;
        }

        else if (i == embed.find("<body>", j))
        {
            i += 6;
            currentLetter = i;
        }

        else if (i == embed.find("<b>", j))
        {
            cout << "*";
            i += 3;
            currentLetter = i;
        }

        else if (i == embed.find("</b>", j))
        {
            cout << "*" << endl;
            i += 4;
            currentLetter = i;
        }

        else if (i == embed.find("<i>", j))
        {
            cout << "_";
            i += 3;
            currentLetter = i;
        }

        else if (i == embed.find("</i>", j))
        {
            cout << "_" << endl;
            i += 4;
            currentLetter = i;
        }

        else if (i == embed.find("<a href=", j))
        {
            linkurl = embed.substr(embed.find("=", i) + 1, embed.find(">", i) - embed.find("=", i) - 1); //
            i = embed.find(">", i) + 1;
            currentLetter = i;
        }

        else if (i == embed.find("</a>", j))
        {
            cout << "(" << linkurl << ")" << endl;
            i += 4;
            currentLetter = i;
        }
    }
}

int main()
{
    string HTML;
    getline(cin, HTML, '\n');

    if (HTML.find("<html>") == string::npos || HTML.find("</html>") == string::npos)
        cout << "Hey, enter HTML code! That means with the tags <html> and </html>!" << endl;
    else
        renderHTML(HTML.substr(6, HTML.length() - 13));
}
