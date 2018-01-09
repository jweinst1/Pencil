#ifndef STR_STREAM_HEAD
#define STR_STREAM_HEAD
// Str Stream Header

struct StrStreamNode
{
public:
        StrStreamNode(const char* string = "");
        ~StrStreamNode()
        {
                delete[] _str;
        }
public:
        char* _str;
        StrStreamNode* _next;
};

class StrStream
{

};


#endif
