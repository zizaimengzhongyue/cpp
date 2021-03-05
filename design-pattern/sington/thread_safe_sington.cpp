#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

once_flag flag;
mutex mu;

class Temp {
public:
    static Temp* getInstance()
    {
        if (imp == NULL) {
            call_once(flag, &Temp::initInstance);
        }
        return imp;
    }

private:
    static Temp* imp;
    static void initInstance() { imp = new Temp(); }
    Temp() { cout << "执行构造函数" << endl; }
    ~Temp() {}
};

Temp* Temp::imp = nullptr;

void run()
{
    Temp* imp = Temp::getInstance();
    mu.lock();
    cout << Temp::getInstance() << endl;
    mu.unlock();
}

int main()
{
    vector<thread> ts;
    for (int i = 0; i < 100; i++) {
        ts.push_back(thread(run));
    }
    for (int i = 0; i < 100; i++) {
        ts[i].join();
    }
    return 0;
}
