#include <iostream>
#include <thread>
#include <vector>

using namespace std;

int cnt = 0;

void test()
{
    cout << cnt << endl;
    cnt++;
}

void run(char *s) { cout << s << endl; }

int main()
{
    char h[6] = "hello";
    thread t1(run, h);
    cout << t1.get_id() << endl;
    t1.join();

    char w[6] = "world";
    thread t2(run, w);
    cout << t2.get_id() << endl;
    t2.join();

    vector<thread> ts;
    for (int i = 0; i <= 100; i++) {
        ts.push_back(thread(test));
    }
    for (int i = 0; i < ts.size(); i++) {
        ts[i].join();
    }
    return 0;
}
