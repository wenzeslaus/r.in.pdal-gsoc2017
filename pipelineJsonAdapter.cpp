#include <sstream>
#include "pipelineJsonAdapter.hpp"

using namespace std;


pipelineJsonAdapter::pipelineJsonAdapter()
{

}

#pragma GCC diagnostic ignored "-Wwrite-strings"

pipelineJsonAdapter::pipelineJsonAdapter(string inputFileName)
{

}

string pipelineJsonAdapter::GetJsonString()
{
    stringstream s;

    // write opening lines
    s <<
         "{" << endl <<
         "   \"pipeline\":[" << endl;

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
