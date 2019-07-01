#ifndef HTML_TAG_H
#define HTML_TAG_H

enum listType
{
    NONE,
    NUMBERED,
    UNORDERED
};

class HTML_TAG
{
    public:
        static void parseNode(std::string nodeName);
        static void parseEndNode(std::string nodeName);
        static void parseAttribute(std::string attributeValue);
        static bool getMetadata();
        static bool isInLink();

    private:
        static listType myLI;
        static int liCount;
        static bool isMetadata;
        static bool inTheMiddleOfLink;
};

#endif // HTML_TAG_H
