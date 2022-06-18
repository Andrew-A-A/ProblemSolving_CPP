#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>

using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>sums;
        for (int i = 0; i < accounts.size(); ++i) {
            sums.push_back(0);
            sums[i]= accumulate(accounts[i].begin(),accounts[i].end(),0);
        }
        sort(sums.begin(),sums.end());
       return sums[sums.size()-1];

    }
};