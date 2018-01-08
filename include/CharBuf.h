#ifndef CHAR_BUF_HEAD
#define CHAR_BUF_HEAD
//util template char buff head

template <long size>
class CharBuf
{
public:
CharBuf(){
}
~CharBuf(){
}

const char* string(void) const
{
        return _buf;
}
private:
char _buf[size];
};

#endif // CHAR_BUF_HEAD
