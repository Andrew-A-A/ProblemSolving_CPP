#include <iostream>
#include "Problems_Sol_Functions/Remove Duplicates from Sorted Array.cpp"
using namespace std;


int main() {
    Solution sol =  Solution();
    vector<int> v1 = {-3,-1,0,0,0,3,3};
  
    int ans = sol.removeDuplicates(v1);
    cout << ans;
  
  
    return 0;
}
