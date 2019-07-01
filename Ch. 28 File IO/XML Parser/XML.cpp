#include <iostream>
#include <fstream>
#include <vector>
#include "XML_DOC.h"

int main()
{
    std::ifstream XML_file("XML Sample.txt");
    if (!XML_file.is_open())
    {
        std::cout << "Could not open file!" << std::endl;
        return -1;
    }

    std::string parsedTagOrText;
    std::string raw_XML = "";

    while (XML_file >> parsedTagOrText)
        raw_XML += parsedTagOrText + " ";

    XML_file.close();

    XML_DOC myXMLDoc(raw_XML);
    myXMLDoc.parse();
}
