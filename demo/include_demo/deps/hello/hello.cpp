#include <iostream>

using namespace std;

namespace DepsHello {
char* hello(char* s)
{
    strcpy(s, "deps:hello,world");
    return s;
}
};  // namespace DepsHello
