#include <iostream>
#include "Problems_Sol_Functions/Two Sum.cpp"

int main() {
    vector<int> input;
    input.push_back(2);
    input.push_back(5);
    input.push_back(5);
    input.push_back(11);
    vector<int> answer=Solution::twoSum(input,10);
    for (int i : answer) {
        cout<<i<<" ";
    }
    return 0;
}
