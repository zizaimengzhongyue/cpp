#include <iostream>

using namespace std;

auto Hello()
{
    char* h = "hello,world";
    return h;
}

int main()
{
    auto a = 6;
    auto b = 1.5;
    auto c = 'c';
    auto *d = "hello,world";
    auto e = &a;
    auto f = Hello();
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}
