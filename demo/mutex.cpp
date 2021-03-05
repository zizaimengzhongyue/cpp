#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

int cnt = 1;
mutex mu;

void get_count() { cout << cnt++ << endl; }

void get_mutex_count()
{
    mu.lock();
    cout << cnt++ << endl;
    mu.unlock();
}

int main()
{
    // get_count 无序输出
    vector<thread> ts;
    for (int i = 0; i < 100; i++) {
        ts.push_back(thread(get_count));
    }
    for (int i = 0; i < 100; i++) {
        ts[i].join();
    }

    // get_mutex_count 有序输出
    vector<thread> tss;
    for (int i = 0; i < 100; i++) {
        tss.push_back(thread(get_mutex_count));
    }
    for (int i = 0; i < 100; i++) {
        tss[i].join();
    }
    return 0;
}
