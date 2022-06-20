#include <string>
#include<algorithm>
class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        int AscIS = 0, AsciT = t.back();

        for (int i = 0; i < s.size(); ++i) {
        AscIS+=s[i];
        AsciT+=t[i];
        }
        return AsciT-AscIS;
    }
};
//Another Solution :
/*
 class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        for (int i = 0; i < t.size(); ++i) {
            if (t[i]!=s[i])
                return t[i];
        }
        return -1;
    }
};
 */