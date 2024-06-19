#include<vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
		int count = nums.size();
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == nums[i-1])
			{
				nums.erase(nums.begin() + i-1);
				i--;
				nums.push_back(-101);
				count--;
			}
			else {
				if (nums[i] == -101)
					break;
			}
		}
		return count;
    }
};