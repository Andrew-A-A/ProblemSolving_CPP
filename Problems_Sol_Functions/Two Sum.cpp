#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;
        int x,y;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target && i!=j) {
                    x=i; y=j;
                    break;
                }
            }
        }
        answer.push_back(y);
        answer.push_back(x);
        return answer;
    }
};