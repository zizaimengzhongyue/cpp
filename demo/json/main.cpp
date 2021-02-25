#include <iostream>

#include "deps/nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

int main()
{
    char js[105] =
        "{\"hello\": \"world\", \"key\": 2, \"double\": 1.23, \"bool\": false}";
    auto j = json::parse(js);
    cout << j["hello"] << endl;
    cout << j["key"] << endl;
    cout << j["double"] << endl;
    cout << j["bool"] << endl;
    cout << j.dump() << endl;

    json j2;
    j2["string"] = "hello";
    j2["int"] = 10;
    j2["double"] = 1.23;
    j2["bool"] = true;
    j2["list"] = {1, 2, 3, 4, 5};
    j2["list_str"] = {"hello", "world"};
    j2["list_mixed"] = {
        "hello", 1.23, true, {"hello_deep", "world_deep", 10, false}};
    auto key = "key_variable";
    j2[key] = "value";
    cout << j2.dump() << endl;
}
