#include <iostream>
#include "Problems_Sol_Functions/Richest Customer Wealth.cpp"

using namespace std;



int main() {
    Solution sol;
    vector<vector<int>> n {{1,2,3},{3,2,1}};

   cout<<sol.maximumWealth(n);

    return 0;
}
