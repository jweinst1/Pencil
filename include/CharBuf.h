#ifndef CHAR_BUF_HEAD
#define CHAR_BUF_HEAD

// custom-size buffer for parsing
template<long size>
class CharBuf
{
public:
CharBuf() : _len(0)
{
        for(long i = 0; i<size + 1; i++) _buf[i] = '\0';
}

~CharBuf()
{
}

long len(void) const
{
        return _len;
}

bool isFull(void) const
{
        return _len == size;
}

const char* string(void) const
{
        return _buf;
}

CharBuf& operator<< (char ch)
{
        if(isFull()) return *this;
        else
        {
                _buf[_len++] = ch;
                return *this;
        }
}

char& operator[] (long index)
{
        return _buf[index % size];
}
private:
long _len;
char _buf[size + 1];
};

#endif
