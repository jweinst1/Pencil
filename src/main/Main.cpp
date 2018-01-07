#include <iostream>
#include "RandomList.h"

int main(int argc, char const *argv[]) {
        RandomStr foo("Hello");
        std::cout << foo.string() << std::endl;
        std::cout << (*(foo.string() + foo.size()) == '\0') << std::endl;
        return 0;
}
