#include <iostream>
#include <vector>
#include "XML_DOC.h"

XML_DOC::XML_DOC(const std::string &input)
{
    XML_data = input;
}

void XML_DOC::parse()
{
    unsigned int currentChar = 0;
    while (currentChar != XML_data.length())
    {
        int fromLastLocation = currentChar;

        currentChar = std::min(XML_data.find("</", fromLastLocation), XML_data.find("<", fromLastLocation));

        if (currentChar == XML_data.find("</", fromLastLocation))
        {
            std::string anEndNode = "";
            currentChar += 2;

            while (XML_data.at(currentChar) != '>')
            {
                anEndNode += XML_data.at(currentChar);
                currentChar++;
            }
            nodeEnd(anEndNode);
            currentChar++;

            int textStart = currentChar;

            while (currentChar < XML_data.length() && XML_data.at(currentChar) != '<')
                currentChar++;

            std::string textInBetween = XML_data.substr(textStart, currentChar - textStart);
            nodeTextRead(textInBetween);
        }

        else
        {
            std::string aNode = "";
            currentChar++;

            while (XML_data.at(currentChar) != '>' && XML_data.at(currentChar) != '=')
            {
                aNode += XML_data.at(currentChar);
                currentChar++;
            }
            nodeStart(aNode);

            if (XML_data.at(currentChar) == '=')
            {
                std::string anAttribute = "";
                currentChar++;

                while (XML_data.at(currentChar) != '>')
                {
                    anAttribute += XML_data.at(currentChar);
                    currentChar++;
                }
                attributeRead(anAttribute);
            }
            currentChar++;

            int textStart = currentChar;
            while (currentChar < XML_data.length() && XML_data.at(currentChar) != '<')
                currentChar++;

            std::string textInBetween = XML_data.substr(textStart, currentChar - textStart); //problem is here
            nodeTextRead(textInBetween);
        }
    }
}

void XML_DOC::nodeStart(std::string nodeName)
{
    listOfNodes.push_back(nodeName);
    std::cout << "Node started: " << nodeName << std::endl;
}

void XML_DOC::attributeRead(std::string attributeName)
{
    listOfAttributes.push_back(attributeName);
    std::cout << "Attribute parsed: " << attributeName << std::endl;
}

void XML_DOC::nodeTextRead(std::string text)
{
    bool noText = true;
    for (unsigned int i = 0; i < text.length(); i++)
    {
        if (text.at(i) != ' ')
        {
            noText = false;
            break;
        }
    }
    if (noText)
        return;
    else
    {
        chunksOfText.push_back(text);
        std::cout << "Text parsed: " << text << std::endl;
    }
}

void XML_DOC::nodeEnd(std::string nodeName)
{
    listOfEndNodes.push_back(nodeName);
    std::cout << "Node ended: " << nodeName << std::endl;
}
