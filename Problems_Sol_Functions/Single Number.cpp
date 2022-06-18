#include <vector>
#include <algorithm>
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (std::count(nums.begin(),nums.end(),nums[i])==1)
                return nums[i];
        }
    }
};