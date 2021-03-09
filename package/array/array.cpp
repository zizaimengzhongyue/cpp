#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
        *it = (*it) + 1;
    }
    cout << endl;
    for (auto it = arr.rbegin(); it != arr.rend(); it++) {
        cout << *it << " ";
        *it = (*it) + 1;
    }
    cout << endl;
    for (auto it = arr.cbegin(); it != arr.cend(); it++) {
        cout << *it << " ";
        //*it = (*it) + 1; // 与 begin 和 rbegin 不同，cbegin
        //返回的结果是只读的，不能修改
    }
    cout << endl;

    cout << arr.size() << endl;
    cout << arr.max_size() << endl;
    cout << arr.empty() << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    cout << arr.front() << endl;
    cout << arr.back() << endl;

    for (int& val : arr) {
        cout << val << " ";
    }
    cout << endl;

    int i = 0;
    for (auto ptr = arr.data(); i < arr.size(); i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    arr.fill(10);
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    array<int, 5> arr02 = {1, 2, 3, 4, 5};
    arr02.swap(arr);
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = arr02.begin(); it != arr02.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << get<0>(arr) << endl;
    cout << get<4>(arr) << endl;

    cout << (arr < arr02) << endl;
    return 0;
}
