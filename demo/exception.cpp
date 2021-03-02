#include <iostream>

using namespace std;

// 一个基本的手动构造的异常
int run() { throw "手动抛出异常"; }

int main()
{
    try {
        run();
    }
    catch (const char* e) {
        cout << e << endl;
    }
}
