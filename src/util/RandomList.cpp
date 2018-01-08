#include "RandomList.h"

RandomStr::RandomStr(const char* string) : _size(0)
{
        const char* sPtr = string;
        // Allows room for null char
        while(*sPtr++) _size++;
        _str = new char[_size + 1];
        char* writer = _str;
        while((*writer++ = *string++)) ;
        *writer = '\0';
}

RandomStr::RandomStr(const RandomStr& string) : _size(string.size())
{
        _str = new char[_size + 1];
        char* writer = _str;
        const char* reader = string.string();
        while((*writer++ = *reader++)) ;
        *writer = '\0';
}

RandomStr& RandomStr::operator=(const RandomStr& other)
{
        if(this == &other) return *this;
        _size = other.size();
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


RandomList::RandomList() : _size(0), _cap(RandomList_DEF_SZ)
{
        _name[0] = '\0';
        _list = new RandomStr*[_cap];
}

RandomList::RandomList(const char* name) : _size(0), _cap(RandomList_DEF_SZ)
{
        _list = new RandomStr*[_cap];
        char* writer = _name;
        while((*writer++ = *name++)) ;
}

RandomList::~RandomList()
{
        for(long i=0; i<_size; i++)
        {
                delete _list[i];
        }
        delete[] _list;
}

void RandomList::expand(int factor)
{
        _cap *= factor;
        RandomStr** newlist = new RandomStr*[_cap];
        for(long i=0; i<_size; i++)
        {
                newlist[i] = _list[i];
        }
        delete[] _list;
        _list = newlist;
}
