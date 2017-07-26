#include <sstream>
#include "pipelineJsonAdapter.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wwrite-strings"

string enquotee(string str){
    std::ostringstream s;
    s << "\"" << str << "\"";

    return s.str();

}

pipelineJsonAdapter::pipelineJsonAdapter()
{

}

pipelineJsonAdapter::pipelineJsonAdapter(string inputFileName)
{
    this->inputFiles.push_back(inputFileName);
}

string pipelineJsonAdapter::GetJsonString()
{
    stringstream s;

    // write opening lines
    s <<
         "{" << endl <<
         "   \"pipeline\":[" << endl;

    // write input files
    for(auto it = this->inputFiles.begin(); it != this->inputFiles.end(); it++){
        s <<
             "   " << enquotee(*it)  << endl;
    }



    // write closing lines
    s << "   ]" << endl <<
         "}" << endl;

    return s.str();
}

string pipelineJsonAdapter::enquote(char* str){
    std::ostringstream s;
    s << "\"" << str << "\"";

    return s.str();

}

string pipelineJsonAdapter::basicReaderWriter(char* inFile, char* outFile){
    std::ostringstream s;
    s <<
         "{" <<
         " \"pipeline\":[" << endl <<

         "   " << enquote(inFile) << "\"," << endl <<

         "   " << enquote(outFile)  << endl <<

         " ]" << endl <<
         "}";

    return s.str();

}

string pipelineJsonAdapter::basicVectorMapReaderWriter(char* inFile, char* outFile){
    std::ostringstream s;
    s <<
         "{" <<
         " \"pipeline\":[" << endl <<

         "   " << enquote(inFile) << //"," << endl <<

          " ]" << endl <<
         "}";

    return s.str();

}

#pragma GCC diagnostic pop
