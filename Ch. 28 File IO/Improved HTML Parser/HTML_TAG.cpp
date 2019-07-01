#include <iostream>
#include "HTML_TAG.h"

listType HTML_TAG::myLI = NONE;
int HTML_TAG::liCount = 1;
bool HTML_TAG::isMetadata = false;
bool HTML_TAG::inTheMiddleOfLink = false;

bool HTML_TAG::getMetadata()
{
    return HTML_TAG::isMetadata;
}

bool HTML_TAG::isInLink()
{
    return HTML_TAG::inTheMiddleOfLink;
}

void HTML_TAG::parseNode(std::string nodeName)
{
    if (nodeName == "a href" && !isMetadata)
    {
        std::cout << "(";
        inTheMiddleOfLink = true;
    }
    else if (nodeName == "body")
    {
        isMetadata = false;
        std::cout << std::endl;
    }
    else if (nodeName == "head")
    {
        isMetadata = true;
    }
    else if (nodeName == "b" && !isMetadata)
    {
        std::cout << "*";
    }
    else if (nodeName == "i" && !isMetadata)
    {
        std::cout << "_";
    }
    else if (nodeName == "ul" && !isMetadata)
    {
        myLI = UNORDERED;
        std::cout << std::endl << std::endl;
    }
    else if (nodeName == "li" && !isMetadata)
    {
        if (myLI == NUMBERED)
            std::cout << liCount++ << ". ";
        else if (myLI == UNORDERED)
            std::cout << "* ";
    }
    else if (nodeName == "nl" && !isMetadata)
    {
        myLI = NUMBERED;
        std::cout << std::endl << std::endl;
    }
}

void HTML_TAG::parseAttribute(std::string attributeValue)
{
    std::cout << attributeValue.substr(1, attributeValue.length() - 2);
}

void HTML_TAG::parseEndNode(std::string nodeName)
{
    if (nodeName == "a" && !isMetadata)
    {
        inTheMiddleOfLink = false;
    }
    else if (nodeName == "head")
    {
        isMetadata = false;
    }
    else if (nodeName == "b" && !isMetadata)
    {
        std::cout << "*" << std::endl;
    }
    else if (nodeName == "i" && !isMetadata)
    {
        std::cout << "_" << std::endl;
    }
    else if ((nodeName == "ul" || nodeName == "nl") && !isMetadata)
    {
        myLI = NONE;
        liCount = 1;
        std::cout << std::endl;
    }
    else if (nodeName == "li" && !isMetadata)
    {
        std::cout << std::endl;
    }
}
