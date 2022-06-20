#include <string>
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int w1=word1.size(),w2=word2.size(),n=0;
        std::string ans;
        if (w1>w2)
            n=w1;
        else
            n=w2;
        for (int i = 0; i < n; ++i) {
            if (w1!=0){
                ans+=word1[i];
                w1--;
            }
            if (w2!=0){
                ans+=word2[i];
                w2--;
            }
        }
        return ans;
    }
};
