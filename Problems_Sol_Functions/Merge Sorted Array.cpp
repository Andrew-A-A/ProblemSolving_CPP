#include<vector>
class Solution {
public:
    std::vector<int> merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1;  // Pointer for the end of the elements in nums1
        int j = n - 1;  // Pointer for the end of nums2
        int k = m + n - 1;  // Pointer for the end of the merged array in nums1

        // Merge in reverse order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            }
            else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are any remaining elements in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        return nums1;
    }
};
