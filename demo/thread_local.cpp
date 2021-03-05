#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

mutex mu;
int cnt;
thread_local int localcnt;

void get_count(int n)
{
    cnt = n;
    mu.lock();
    cout << cnt << endl;
    mu.unlock();
}

void get_local_count(int n)
{
    localcnt = n;
    mu.lock();
    cout << localcnt << endl;
    mu.unlock();
}

int main()
{
    // get_count 输出会乱
    vector<thread> ts;
    for (int i = 0; i < 100; i++) {
        ts.push_back(thread(get_count, i));
    }
    for (int i = 0; i < 100; i++) {
        ts[i].join();
    }

    // get_local_count 有序输出
    vector<thread> tss;
    for (int i = 0; i < 100; i++) {
        tss.push_back(thread(get_local_count, i));
    }
    for (int i = 0; i < 100; i++) {
        tss[i].join();
    }
    return 0;
}
