#include <iostream>
#include "StrStream.h"
#include "CharBuf.h"

int main(int argc, char const *argv[]) {
        //StrStream fff;
        //fff << "Hello!" << "World!\n";
        //fff.writeToFile("foo.txt");
        CharBuf<50> food;
        food[0] = 'e';
        std::cout << food[0] << "\n";
        return 0;


}
