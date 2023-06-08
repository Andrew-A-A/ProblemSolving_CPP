#include <iostream>
#include "Problems_Sol_Functions/Median of Two Sorted Arrays.cpp"
using namespace std;
int main() {
    Solution sol;
   vector<int> nums1{2,2,4,4 };
  vector<int> nums2{ 2, 2, 4, 4 };
  cout << sol.findMedianSortedArrays(nums1, nums2);
    return 0;
}
