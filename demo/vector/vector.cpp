#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (vector<int>::iterator item = a.begin(); item != a.end(); item++) {
        cout << *item << " ";
    }
    cout << endl;

    for (int item : a) {
        cout << item << " ";
    }
    cout << endl;
}
