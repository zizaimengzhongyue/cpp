#include <iostream>

using namespace std;

namespace Hello {
char* hello(char* s)
{
    strcpy(s, "hello,world");
    return s;
}
};  // namespace Hello
