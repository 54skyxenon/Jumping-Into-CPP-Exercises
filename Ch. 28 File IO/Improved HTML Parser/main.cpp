#include <iostream>
#include <fstream>
#include <vector>
#include "HTML_DOC.h"
#include "HTML_TAG.h"

int main()
{
    std::ifstream HTML_file("HTML Sample.txt");
    if (!HTML_file.is_open())
    {
        std::cout << "Could not open file!" << std::endl;
        return -1;
    }

    std::string parsedTagOrText;
    std::string raw_HTML = "";

    while (HTML_file >> parsedTagOrText)
        raw_HTML += parsedTagOrText + " ";

    HTML_file.close();
    HTML_DOC myHTMLDoc(raw_HTML);
    myHTMLDoc.parseTags();
}
