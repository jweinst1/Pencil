#include <iostream>
#include "RandomList.h"

int main(int argc, char const *argv[]) {
        RandomStr foo("Hello");
        std::cout << foo.string() << std::endl;
        RandomStr doo = foo;
        std::cout << (*(doo.string() + doo.size()) == '\0') << std::endl;
        RandomList f("words");
        f.push("fooo");
        f.push("dooo");
        return 0;
}
