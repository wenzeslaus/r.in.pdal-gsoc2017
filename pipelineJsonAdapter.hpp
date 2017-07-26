#ifndef PIPELINEJSONADAPTER_H
#define PIPELINEJSONADAPTER_H
#include <string>

class pipelineJsonAdapter
{
public:
    pipelineJsonAdapter();

public:
    pipelineJsonAdapter(std::string inputFileName);
    std::string GetJsonString();

    static std::string basicReaderWriter(char* inFile, char* outFile);
    static std::string basicVectorMapReaderWriter(char* inFile, char* outFile);

private:
    static std::string enquote(char* str);

};

#endif // PIPELINEJSONADAPTER_H
