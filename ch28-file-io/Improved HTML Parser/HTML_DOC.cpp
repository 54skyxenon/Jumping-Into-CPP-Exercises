#include <iostream>
#include <vector>
#include "HTML_DOC.h"
#include "HTML_TAG.h"

HTML_DOC::HTML_DOC(const std::string &input)
{
    HTML_data = input;
}

void HTML_DOC::parseTags()
{
    unsigned int currentChar = 0;
    while (currentChar != HTML_data.length())
    {
        int fromLastLocation = currentChar;

        currentChar = std::min(HTML_data.find("</", fromLastLocation), HTML_data.find("<", fromLastLocation));

        if (currentChar == HTML_data.find("</", fromLastLocation))
        {
            std::string anEndNode = "";
            currentChar += 2;

            while (HTML_data.at(currentChar) != '>')
            {
                anEndNode += HTML_data.at(currentChar);
                currentChar++;
            }
            nodeEnd(anEndNode);
            currentChar++;

            int textStart = currentChar;

            while (currentChar < HTML_data.length() && HTML_data.at(currentChar) != '<')
                currentChar++;

            std::string textInBetween = HTML_data.substr(textStart, currentChar - textStart);
            nodeTextRead(textInBetween);
        }

        else
        {
            std::string aNode = "";
            currentChar++;

            while (HTML_data.at(currentChar) != '>' && HTML_data.at(currentChar) != '=')
            {
                aNode += HTML_data.at(currentChar);
                currentChar++;
            }
            nodeStart(aNode);

            if (HTML_data.at(currentChar) == '=')
            {
                std::string anAttribute = "";
                currentChar++;

                while (HTML_data.at(currentChar) != '>')
                {
                    anAttribute += HTML_data.at(currentChar);
                    currentChar++;
                }
                attributeRead(anAttribute);
            }
            currentChar++;

            int textStart = currentChar;
            while (currentChar < HTML_data.length() && HTML_data.at(currentChar) != '<')
                currentChar++;

            std::string textInBetween = HTML_data.substr(textStart, currentChar - textStart); //problem is here
            nodeTextRead(textInBetween);
        }
    }
}

void HTML_DOC::nodeStart(std::string nodeName)
{
    listOfNodes.push_back(nodeName);
    HTML_TAG::parseNode(nodeName);
}

void HTML_DOC::attributeRead(std::string attributeName)
{
    listOfAttributes.push_back(attributeName);
    HTML_TAG::parseAttribute(attributeName);
}

void HTML_DOC::nodeTextRead(std::string text)
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
        if (!HTML_TAG::getMetadata())
        {
            if (HTML_TAG::isInLink())
                std::cout << ") ";
            std::cout << text;
        }
    }
}

void HTML_DOC::nodeEnd(std::string nodeName)
{
    listOfEndNodes.push_back(nodeName);
    HTML_TAG::parseEndNode(nodeName);
}
