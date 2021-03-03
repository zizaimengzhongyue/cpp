#include <iostream>

using namespace std;

template <typename T>
T const& Max(T const& a, T const& b)
{
    return a > b ? a : b;
}

template <typename T>
bool cmp(T const& a, T const& b)
{
    return a < b;
}

int main()
{
    int a = 1;
    int b = 2;
    cout << Max(a, b) << endl;
    cout << cmp(a, b) << endl;

    double a1 = 1.1;
    double b1 = 1.2;
    cout << Max(a1, b1) << endl;
    cout << cmp(a, b) << endl;

    string s1 = "hello";
    string s2 = "world";
    cout << Max(s1, s2) << endl;
    cout << cmp(a, b) << endl;
    return 0;
}
