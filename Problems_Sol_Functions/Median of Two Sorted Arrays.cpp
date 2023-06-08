#include<vector>
class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        int totalSize = s1 + s2;
        bool isNums2Ended = nums2.empty();
        bool isNums1Ended = nums1.empty();
        bool oneMedian = true;
        if (s1 < s2) {
            std::vector<int> tmp=nums1;
            nums1 = nums2;
            nums2 = tmp;
            int t = s1;
            s1 = s2;
            s2 = t;
        }
       
        
        if (totalSize % 2 != 0) totalSize++;
        else { 
            totalSize += 2;
            oneMedian = false;
        }

        int i1=0, i2=0;

        std::vector<int> mergedArr(totalSize/2);

        for (int i = 0; i < totalSize/2; i++)
        {
            if (!isNums2Ended&&!isNums1Ended) {
                if (nums1[i1] < nums2[i2]) {
                    mergedArr[i] = nums1[i1];
                    i1++;
                    if (i1 == s1) {
                        isNums1Ended = true;
                        i1--;
                    }
                }
                else if (nums2[i2] < nums1[i1]) {
                    mergedArr[i] = nums2[i2];
                    i2++;
                    if (i2 == s2) {
                        isNums2Ended = true;
                    }
                }
                else {
                    mergedArr[i] = nums1[i1];
                    i1++;
                    if (i1 == s1) {
                        isNums1Ended = true;
                        i1--;
                    }
                    if(i<(totalSize/2)-1)
                    i++;
                    mergedArr[i] = nums2[i2];
                    i2++;
                    if (i2 == s2) {
                        isNums2Ended = true;
                    }
                }
            }
            else if(!isNums1Ended){
                mergedArr[i] = nums1[i1];
                i1++;
            }
            else  {
                mergedArr[i] = nums2[i2];
                i2++;
            }
        }
        if (oneMedian)
            return mergedArr.back();
        else {
            double d = mergedArr[mergedArr.size() - 2] + mergedArr.back();
            return d / 2;

        }
         
    }
};