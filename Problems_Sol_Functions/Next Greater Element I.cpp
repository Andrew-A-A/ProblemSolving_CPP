#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        std::vector<int>::iterator it;
        for (int i = 0; i < nums1.size(); ++i) {
            it = find(nums2.begin(), nums2.end(), nums1[i]);
            if (it==nums2.end()-1) {
                ans.push_back(-1);
                continue;
            }
            it.operator++();
            if (*it>nums1[i]){
                ans.push_back(*it);
            } else {
                bool fnd=false;
                for (auto j = it; j < nums2.end() ; ++j) {
                    if (*j>nums1[i]){
                        ans.push_back(*j);
                        fnd= true;
                        break;

                    }
                }
                if (!fnd)
                ans.push_back(-1);
            }
        }
        return ans;
    }
};