#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto j = nums.size()-1; j >= 2 ; j--) {
            if (nums[j-2]+nums[j-1]>nums[j])
                return nums[j-2]+nums[j-1]+nums[j];
        }
        return 0;

    }
};