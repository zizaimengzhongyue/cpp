#include <iostream>

using namespace std;

int main()
{
    auto f = [](int x) -> int { return x * x; };
    cout << f(10) << endl;

    auto f1 = [](int x, int y) -> int { return x + y; };
    cout << f1(10, 15) << endl;

    int a = 10;
    int b = 15;
    auto f2 = [a, b](int x, int y) -> int { return a * x + b * y; };
    cout << f2(10, 15) << endl;
    return 0;
}
