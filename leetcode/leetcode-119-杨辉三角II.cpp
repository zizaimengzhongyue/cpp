#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res;
        for (int i = 0; i <= rowIndex; i++) {
            res.push_back(1);
        }
        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                res[j] = res[j] + res[j - 1];
            }
        }
        return res;
    }
};

int main()
{
    Solution* sol = new Solution();
    int a = 0;
    auto res = sol->getRow(a);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
