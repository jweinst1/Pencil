#include "RandomList.h"

RandomStr::RandomStr(const char* string) : _size(0), _state(true)
{
        const char* sPtr = string;
        // Allows room for null char
        while(*sPtr++) _size++;
        _str = new char[_size + 1];
        char* writer = _str;
        while((*writer++ = *string++)) ;
        *writer = '\0';
}

RandomStr::RandomStr(const RandomStr& string) : _size(string.size()), _state(true)
{
        _str = new char[_size + 1];
        char* writer = _str;
        const char* reader = string.string();
        while((*writer++ = *reader++)) ;
        *writer = '\0';
}

RandomStr& RandomStr::operator=(const RandomStr& other)
{
        _size = other.size();
        _state = other.state();
        _str = new char[_size + 1];
        char* writer = _str;
        const char* reader = other.string();
        while((*writer++ = *reader++)) ;
        *writer = '\0';
        return *this;
}

RandomStr::~RandomStr()
{
        delete[] _str;
}
