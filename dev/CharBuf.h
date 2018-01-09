#ifndef CHAR_BUF_HEAD
#define CHAR_BUF_HEAD
//util template char buff head
#include <iostream>
#include <fstream>

template <long size>
class CharBuf
{
public:
CharBuf()
{
        for(char* writer = _buf; writer != (end() + 1); writer++) *writer = '\0';
}
CharBuf(const char* string)
{
        for(char* writer = _buf; writer != (end()+ 1); writer++) *writer = '\0';
        write(string);
}
~CharBuf(){
}

const char* string(void) const
{
        return _buf;
}

const char* end(void) const
{
        return _buf + size;
}

void write(const char* mes)
{
        for(char* writer = _buf; writer != end() && *mes; writer++) *writer = *mes++;
}

void writeFile(const char* name)
{
        ifstream wrfile(name);
        if(wrfile.is_open())
        {
                wrfile.read(_buf, size);
        }
        else
        {
                std::cout << "IO Error: file '" << name << "' not found.";
        }
}

void print(void) const
{
        std::cout << _buf;
}

CharBuf& operator<<(const char* mes)
{
        write(mes);
        return *this;
}
private:
char _buf[size + 1];
};

#endif // CHAR_BUF_HEAD
