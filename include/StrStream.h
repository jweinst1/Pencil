#ifndef STR_STREAM_HEAD
#define STR_STREAM_HEAD
// Str Stream Header
#include <iostream>


class StrStream
{
public:
struct Node
{
private:
        Node(const char* string = "") : _next(nullptr), _size(0)
        {
                const char* counter = string;
                while(*counter++) _size++;
                _str = new char[_size + 1];
                char* writer = _str;
                while((*writer++ = *string++)) ;
        }
        ~Node()
        {
                delete[] _str;
        }

        const char* string(void) const
        {
                return _str;
        }

        bool isEnd(void) const
        {
                return _next == nullptr;
        }
public:
        Node* _next;
        long _size;
        char* _str;
};

public:
StrStream();
~StrStream();

StrStream& operator<<(const char* string);

void print(void) const;

bool isEmpty(void) const
{
        return _front == nullptr && _back == nullptr;
}

bool isSing(void) const
{
        return _back == _front;
}

private:
Node* _front;
Node* _back;
};


#endif
