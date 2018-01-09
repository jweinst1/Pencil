#ifndef STR_STREAM_HEAD
#define STR_STREAM_HEAD
// Str Stream Header
#include <iostream>
#include <fstream>

/** StrStream Utility Class
 * Used as a custom C-str linked list,
 * Allows for fast linear storage of C-strings without copying or reallocating memory
 */
class StrStream
{
public:
struct Node
{
public:
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

// prints to stdout
void print(void) const;

bool isEmpty(void) const
{
        return _front == nullptr && _back == nullptr;
}

bool isSing(void) const
{
        return _back == _front;
}

// writes to file.
bool writeToFile(const char* filename) const;

private:
Node* _front;
Node* _back;
};


#endif
