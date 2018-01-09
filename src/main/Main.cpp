#include <iostream>
#include "StrStream.h"
#include "CharBuf.h"

int main(int argc, char const *argv[]) {
        //StrStream fff;
        //fff << "Hello!" << "World!\n";
        //fff.writeToFile("foo.txt");
        CharBuf<50> food;
        food[0] = 'e';
        food << 'e' << '\n' << '\n';
        std::cout << food.string() << "\n";
        food.clear();
        std::cout << food.string() << "\n";
        return 0;


}
