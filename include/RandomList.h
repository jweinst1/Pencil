#ifndef RANDOM_LIST_HEAD
#define RANDOM_LIST_HEAD
//Random List Header

#include <cstdlib>
#define RandomList_DEF_SZ 20

//contains functions for getting random numbers
struct RandNum
{
        static int gen(int max)
        {
                return std::rand() % max;
        }
};

// String node class used for random list
class RandomStr
{
public:
RandomStr(const char* string = "");
RandomStr(const RandomStr& string);
~RandomStr();

RandomStr& operator= (const RandomStr& other);

long size(void) const
{
        return _size;
}

const char* string(void) const
{
        return _str;
}
private:
long _size;
char* _str;
};


class RandomList
{
public:
RandomList();
RandomList(const char* name);
~RandomList();

void setName(const char* name)
{
        char* writer = _name;
        while((*writer++ = *name++)) ;
}

const char* name(void) const
{
        return _name;
}

long size(void) const
{
        return _size;
}

long cap(void) const
{
        return _cap;
}

long space(void) const
{
        return _cap - _size;
}

bool isFull(void) const
{
        return (_cap - _size) == 0;
}

const RandomStr& front(void) const
{
        return *(_list[0]);
}
private:

RandomStr** _list;
char _name[50];
long _size;
long _cap;
};

#endif
