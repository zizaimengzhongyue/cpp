#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<int> q;
    for (int i = 0; i < 5; i++) {
        q.push_back(i);
    }

    for (auto it = q.begin(); it != q.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = q.rbegin(); it != q.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = q.cbegin(); it != q.cend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = q.crbegin(); it != q.crend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << q.size() << endl;
    cout << q.max_size() << endl;
    cout << q.empty() << endl;

    q.resize(3);
    cout << q.size() << endl;
    for (auto it = q.begin(); it != q.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    q.resize(10, 10);
    cout << q.size() << endl;
    for (auto it = q.begin(); it != q.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    deque<int> q02(105);
    cout << q.size() << endl;
    q02.shrink_to_fit();
    cout << q.size() << endl;

    for (int i = 0; i < q.size(); i++) {
        cout << q[i] << " ";
        cout << q.at(i) << " ";
    }
    cout << endl;

    cout << q.front() << endl;
    cout << q.back() << endl;

    deque<int> q03;
    q03.assign(10, 100);
    for (int &v : q03) {
        cout << v << " ";
    }
    cout << endl;
    deque<int> q04;
    q04.assign(q03.begin() + 1, q03.end() - 1);
    for (int &v : q04) {
        cout << v << " ";
    }
    cout << endl;

    cout << q.size() << endl;
    q.push_back(10);
    cout << q.size() << endl;
    q.push_front(-1);
    cout << q.size() << endl;

    cout << q.front() << endl;
    q.pop_front();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop_back();
    cout << q.back() << endl;

    auto it = q.begin();
    it = q.insert(it, -2);
    cout << q.front() << endl;
    cout << *it << endl;
    deque<int> nq;
    nq.insert(nq.begin(), q.begin(), q.end());
    for (int i = 0; i < nq.size(); i++) {
        cout << nq[i] << " ";
    }
    cout << endl;

    cout << q.size() << endl;
    q.erase(q.begin());
    cout << q.size() << endl;
    q.erase(q.begin() + 2, q.end());
    cout << q.size() << endl;

    deque<int> nnq;
    nnq.assign(10, -1);
    q.swap(nnq);
    for (int &val : q) {
        cout << val << " ";
    }
    cout << endl;

    nnq.clear();
    cout << nnq.size() << endl;

    deque<int> eq;
    eq.emplace(eq.begin(), 1);
    eq.emplace_front(2);
    eq.emplace_back(3);
    for (int &v : eq) {
        cout << v << " ";
    }
    cout << endl;

    int *a = eq.get_allocator().allocate(10);
    for (int i = 0; i < 10; i++) {
        eq.get_allocator().construct(&a[i], i);
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << (q < eq) << endl;
    return 0;
}
