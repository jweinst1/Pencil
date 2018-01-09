#include "StrStream.h"


StrStream::StrStream() : _front(nullptr), _back(nullptr)
{

}


StrStream::~StrStream()
{
        for(Node* traverse = _front; traverse != nullptr; traverse = traverse->_next)
        {
                delete traverse;
        }
}

StrStream& StrStream::operator<<(const char* string)
{
        if(isEmpty())
        {
                _front = new Node(string);
                _back = _front;
                return *this;
        }
        else
        {
                _back->_next = new Node(string);
                _back = _back->_next;
                return *this;
        }
}

void StrStream::print(void) const
{
        for(Node* nPtr = _front; nPtr != nullptr; nPtr = nPtr->_next)
        {
                std::cout << nPtr->string();
        }
}
