#include <vector>
#include <iostream>
#include <string>
class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> ans;
        for (int i = 1; i <= n; ++i) {
            if (i%5==0 && i%3==0)
                ans.emplace_back("FizzBuzz");
            else if (i%3==0)
                ans.emplace_back("Fizz");
            else if (i%5==0)
                ans.emplace_back("Buzz");
            else
                ans.push_back(std::to_string(i));
        }
        return ans;
    }
};