#ifndef PARSE_WORD_LIST
#define PARSE_WORD_LIST

#include <string>
#include "RandomList.h"


// custom-size buffer for parsing
template<long size>
class CharBuf
{
public:
long len(void) const
{
        return _len;
}
private:
long _len;
char _buf[size];
};

#endif //PARSE_WORD_LIST
