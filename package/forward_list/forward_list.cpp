#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> fl;
    for (int i = 0; i < 10; i++) {
        fl.push_front(i);
    }
    for (auto it = fl.begin(); it != fl.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = fl.cbegin(); it != fl.cend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << fl.empty() << endl;
    cout << fl.max_size() << endl;

    cout << fl.front() << endl;
    fl.front()++;
    cout << fl.front() << endl;

    forward_list<int> fl2;
    fl2.assign(10, 10);
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;

    fl2.push_front(1);
    cout << fl2.front() << endl;
    fl2.pop_front();
    cout << fl2.front() << endl;

    auto it = fl2.insert_after(fl2.before_begin(), -1);
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;
    fl2.erase_after(fl2.before_begin());
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;

    fl2.swap(fl);
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;

    fl2.resize(5);
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;
    fl2.resize(10, 10);
    for (int &val : fl2) {
        cout << val << " ";
    }
    cout << endl;
    fl2.clear();
    cout << fl2.empty() << endl;

    forward_list<int> fl3 = {1, 2, 3};
    forward_list<int> fl4 = {4, 5, 6};
    fl3.splice_after(fl3.begin(), fl4);
    for (int &val : fl3) {
        cout << val << " ";
    }
    cout << endl;

    fl3.remove(1);
    for (int &val : fl3) {
        cout << val << " ";
    }
    cout << endl;

    auto f = [](const int &x) -> bool { return x % 2; };
    fl3.remove_if(f);
    for (int &val : fl3) {
        cout << val << " ";
    }
    cout << endl;

    fl3.resize(10, 10);
    fl3.unique();
    for (int &val : fl3) {
        cout << val << " ";
    }
    cout << endl;

    forward_list<int> fl5 = {-1, -2, -3};
    fl5.merge(fl3);
    for (int &val : fl5) {
        cout << val << " ";
    }
    cout << endl;

    fl5.sort();
    for (int &val : fl5) {
        cout << val << " ";
    }
    cout << endl;

    fl5.reverse();
    for (int &val : fl5) {
        cout << val << " ";
    }
    cout << endl;

    cout << (fl3 < fl5) << endl;
    return 0;
}
