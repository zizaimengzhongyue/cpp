#include <iostream>
#include <list>

using namespace std;

void output(list<int> l)
{
    for (int &val : l) {
        cout << val << " ";
    }
    cout << endl;
    return;
}

int main()
{
    list<int> l;
    for (int i = 0; i < 5; i++) {
        l.push_back(i);
    }
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = l.cbegin(); it != l.cend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = l.rbegin(); it != l.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = l.crbegin(); it != l.crend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << l.empty() << endl;
    cout << l.size() << endl;
    cout << l.max_size() << endl;

    l.front() = -1;
    l.back() = 10;
    output(l);

    l.assign(10, -1);
    output(l);

    l.emplace_front(-2);
    output(l);
    l.push_front(3);
    output(l);
    l.pop_front();
    output(l);
    l.emplace_back(11);
    output(l);
    l.push_back(12);
    output(l);
    l.pop_back();
    output(l);
    l.emplace(l.begin(), 13);
    output(l);
    l.insert(l.begin(), 14);
    output(l);
    l.erase(l.begin());

    list<int> l2;
    l2.assign(10, -2);
    l.swap(l2);
    output(l);
    l2.resize(0);
    cout << l2.size() << endl;
    l.clear();
    cout << l.size() << endl;

    list<int> l3;
    l3.assign(3, 1);
    list<int> l4;
    l4.assign(4, 2);
    l3.splice(l3.end(), l4);
    output(l3);

    l3.push_front(-5);
    l3.remove(-5);
    output(l3);

    l3.push_front(-10);
    auto f = [](int x) -> bool { return x > 0; };
    l3.remove_if(f);
    output(l3);

    l3.push_front(30);
    l3.push_back(30);
    l3.unique();
    output(l3);
    l3.sort();
    output(l3);
    l3.reverse();
    output(l3);
    l3.unique();
    output(l3);

    list<int> l5;
    l5.assign(1, 100);
    cout << (l3 < l5) << endl;
    return 0;
}
