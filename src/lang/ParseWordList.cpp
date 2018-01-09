#include "ParseWordList.h"

std::string ParseUtil::readFile(const char* fileName)
{
        std::ifstream ifs("myfile.txt");
        std::string content( (std::istreambuf_iterator<char>(ifs) ),
                             (std::istreambuf_iterator<char>()    ) );
        return content;
}
