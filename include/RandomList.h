#ifndef RANDOM_LIST_HEAD
#define RANDOM_LIST_HEAD
//Random List Header

// String node class used for random list
class RandomStr
{
public:
RandomStr(const char* string);
RandomStr(const RandomStr& string);
~RandomStr();

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

#endif
