#include <iostream>

#include "deps/hello/hello.hpp"
#include "hello.hpp"

int main()
{
    char name[100];
    std::cout << Hello::hello(name) << std::endl;
    std::cout << DepsHello::hello(name) << std::endl;
    return 0;
}
