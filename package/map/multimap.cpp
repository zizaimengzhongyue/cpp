#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string, string> m;
    m.insert(pair<string, string>("key1", "key1-value1"));
    m.insert(pair<string, string>("key1", "key1-value2"));
    m.insert(pair<string, string>("key2", "key2-value2"));
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;
    return 0;
}
