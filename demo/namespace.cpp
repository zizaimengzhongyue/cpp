#include <iostream>

namespace a {
char* hello(char* h)
{
    strcpy(h, "a:hello,world");
    return h;
}
}  // namespace h

namespace b {
char* hello(char* h)
{
    strcpy(h, "b:hello,world");
    return h;
}
}  // namespace b

using namespace std;
using namespace a;
using namespace b;

int main()
{
    char name[100];
    cout << a::hello(name) << endl;
    cout << b::hello(name) << endl;
}
