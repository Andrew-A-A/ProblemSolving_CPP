#include <iostream>
#include "Problems_Sol_Functions/Remove Element.cpp"
using namespace std;


int main() {
    Solution sol =  Solution();
    vector<int> v1 = {0,1,2,2,3,0,4,2};
  
    int ans = sol.removeElement(v1,2);
    cout << ans;
  
  
    return 0;
}
