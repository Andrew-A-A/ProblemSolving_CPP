#include<vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
		int count = 0;
		for (int i=0;i<nums.size();i++)
		{
			if (nums[i] == val)
			{
				nums.erase(nums.begin() + i);
				i--;
				nums.push_back(-1);
			}
			else {
				if (nums[i] == -1)
					break;
				count++;
			}
		}
		return count;
    }
};