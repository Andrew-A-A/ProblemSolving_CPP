#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n-1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
            }
            else {
                count++;
                if (count > n / 2)
                    return nums[i];
                count = 0;
            }


        }
        return nums[n-1];
    }
};