#ifndef XML_DOC_H
#define XML_DOC_H

class XML_DOC
{
    public:
        XML_DOC(const std::string &input);
        void parse();
        void nodeStart(std::string nodeName);
        void attributeRead(std::string attributeName);
        void nodeTextRead(std::string text);
        void nodeEnd(std::string nodeName);

    private:
        std::string XML_data;
        std::vector<std::string> listOfNodes;
        std::vector<std::string> listOfEndNodes;
        std::vector<std::string> listOfAttributes;
        std::vector<std::string> chunksOfText;
};

#endif // XML_DOC_H
