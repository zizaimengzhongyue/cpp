#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        vector<int> dp;
        dp.push_back(0);
        for (int i = 1; i < prices.size(); i++) {
            int tmp = dp[i - 1];
            if (prices[i] > prices[i - 1])
                tmp = tmp + prices[i] - prices[i - 1];
            dp.push_back(tmp);
        }
        int max = 0;
        for (int i = 0; i < dp.size(); i++) {
            if (dp[i] > max) {
                max = dp[i];
            }
        }
        return max;
    }
};

int main()
{
    Solution* sol = new Solution();
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(6);
    a.push_back(5);
    a.push_back(0);
    a.push_back(3);
    cout << sol->maxProfit(a) << endl;
    return 0;
}
