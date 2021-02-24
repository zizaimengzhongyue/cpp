/**
 * @file: const.cpp
 * @author: xxx
 * @mail: xxx@baidu.com
 * @date 2021-02-23 14:09:44
 * @brief
 **/
#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    const double b = 1.23456;
    const char *c = "hello";
    cout << a << endl;
    cout << b << endl;
    cout << "通过 const char *c = \"hello\"; 这种方式赋值的时候，编译器没有 "
            "deprecated 报警信息：";
    cout << c << endl;
}
