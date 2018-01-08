#include <iostream>
#include "RandomList.h"

int main(int argc, char const *argv[]) {
        RandomStr foo("Hello");
        RandomStr doo("Hillo");
        std::cout << (foo == doo) << std::endl;
        return 0;
}
