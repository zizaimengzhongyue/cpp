#include <iostream>
#include <map>

using namespace std;

void output(map<string, string> m)
{
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;
}

int main()
{
    map<string, string> m;
    m["key1"] = "value1";
    m["key2"] = "value2";
    m["key3"] = "value3";
    output(m);

    for (auto it = m.rbegin(); it != m.rend(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;

    for (auto it = m.cbegin(); it != m.cend(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;

    for (auto it = m.crbegin(); it != m.crend(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;

    cout << m.empty() << endl;
    cout << m.size() << endl;
    cout << m.max_size() << endl;

    m.at("key3") = "new-value3";
    output(m);

    m.insert(m.begin(), pair<string, string>("key4", "value4"));
    output(m);

    m.erase(m.begin());
    output(m);

    map<string, string> m2;
    m2["m_key2"] = "m_value2";
    m.swap(m2);
    output(m);

    m.swap(m2);
    m2.clear();
    cout << m2.size() << endl;

    m.emplace("key5", "value5");
    output(m);

    m.emplace_hint(m.begin(), "key_new", "value_new");
    output(m);

    map<string, string> m3;
    m3["b"] = "b1";
    m3["a"] = "a2";
    m3["c"] = "c3";
    output(m3);

    map<string, string, greater<string>> m4;
    m4["b"] = "b1";
    m4["a"] = "a2";
    m4["c"] = "c3";
    for (auto it = m4.begin(); it != m4.end(); it++) {
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;

    auto it = m4.find("a");
    cout << it->first << " " << it->second << endl;

    cout << m4.count("a") << endl;

    it = m4.lower_bound("b");
    cout << it->first << " " << it->second << endl;
    it = m4.upper_bound("b");
    cout << it->first << " " << it->second << endl;
    auto its = m4.equal_range("b");
    cout << its.first->first << " " << its.first->second << endl;
    return 0;
}
