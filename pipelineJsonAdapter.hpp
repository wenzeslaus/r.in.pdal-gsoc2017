#ifndef PIPELINEJSONADAPTER_H
#define PIPELINEJSONADAPTER_H
#include <string>
#include <vector>

class pipelineJsonAdapter
{
public:
    pipelineJsonAdapter();

public:
    pipelineJsonAdapter(std::string inputFileName);

    void addInputFile(std::string additionalInputFile);

    std::string GetJsonString();

    static std::string basicReaderWriter(char* inFile, char* outFile);
    static std::string basicVectorMapReaderWriter(char* inFile, char* outFile);

private:
    std::vector<std::string> inputFiles;

    static std::string enquote(char* str);

};

#endif // PIPELINEJSONADAPTER_H
