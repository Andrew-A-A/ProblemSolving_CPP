#include <string>
#include <cctype>
class Solution {
public:
    std::string toLowerCase(std::string s) {
        std::string a;
        for (int i = 0; i <s.size() ; ++i)
        { a+=(char)tolower(s[i]); }
        return a;
    }
};