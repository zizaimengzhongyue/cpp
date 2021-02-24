#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 1.23;
    double c = 1.234234234324234;
    bool d = false;
    char e = 'e';
    char* f = "hello";
    char g[] = "world";
    cout << "整数：";
    cout << a << endl;
    cout << "单精度浮点数：";
    cout << b << endl;
    cout << "双精度浮点数：";
    cout << c << endl;
    cout << "布尔变量：";
    cout << d << endl;
    cout << "字符型：";
    cout << e << endl;
    cout << "字符串，通过向一个字符指针赋值声明，该声明方式会触发一个 "
            "deprecated 的报警：";
    cout << f << endl;
    cout << "字符串，赋值给字符数组的方式声明：";
    cout << g << endl;
}

