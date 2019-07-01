#ifndef HTML_DOC_H
#define HTML_DOC_H

class HTML_DOC
{
    public:
        HTML_DOC(const std::string &input);
        void parseTags();
        void nodeStart(std::string nodeName);
        void attributeRead(std::string attributeName);
        void nodeTextRead(std::string text);
        void nodeEnd(std::string nodeName);

    private:
        std::string HTML_data;
        std::vector<std::string> listOfNodes; //these four members were just for reference
        std::vector<std::string> listOfEndNodes;
        std::vector<std::string> listOfAttributes;
        std::vector<std::string> chunksOfText;
};

#endif // HTML_DOC_H
