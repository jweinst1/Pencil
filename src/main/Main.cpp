#include <iostream>
#include "StrStream.h"

int main(int argc, char const *argv[]) {
        StrStream fff;
        fff << "Hello!" << "World!\n";
        fff.writeToFile("foo.txt");
        return 0;

}
