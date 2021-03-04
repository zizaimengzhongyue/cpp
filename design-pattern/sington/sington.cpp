#include <iostream>

using namespace std;

class sington {
public:
    int count = 1;
    static sington* getInstance()
    {
        if (!imp) {
            imp = new sington();
        }
        return imp;
    }
    void add() { this->count++; }
    int getCount() { return this->count; }
    ~sington() { cout << "执行析构函数" << endl; }

private:
    sington() { cout << "执行构造函数" << endl; }
    static sington* imp;
};

sington* sington::imp = NULL;

int main()
{
    // 这里两次调用只会执行一次构造函数
    sington* s1 = sington::getInstance();
    sington* s2 = sington::getInstance();
    s1->add();
    s2->add();
    // 这里两个调用都会输出 3
    cout << s1->getCount() << endl;
    cout << s2->getCount() << endl;
    cout << (s1 == s2) << endl;
    delete s1;
    // delete s2; 这行代码会报错，提示 s2 没有被分配内存
    return 0;
}
