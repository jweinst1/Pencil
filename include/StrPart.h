#ifndef STR_PART_HEAD
#define STR_PART_HEAD
// Util str object that functions as a linked node as well.

class StrPart
{
public:
StrPart(const char* string);
~StrPart();
private:
char* _str;
StrPart* _next;
};

#endif
