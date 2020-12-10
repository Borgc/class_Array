#include <iostream>
#include "Array.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Array one(5, 1, 10);
    Array two(10, 2, 0);
    std::cout << one << '\n';
    std::cout << one << one[0] << '\n';
    std::cout << one.Test();
    return 0;
}
