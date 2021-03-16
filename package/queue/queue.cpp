#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    for (int i = 0; i < 10; i++) {
        q.push(i);
    }
    cout << q.empty() << endl;
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.emplace(11);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << q.size() << endl;

    queue<int> q2;
    q2.push(-1);
    q.swap(q2);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
