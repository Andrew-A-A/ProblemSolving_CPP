#include <iostream>
#include "Problems_Sol_Functions/Merge Sorted Array.cpp"
using namespace std;


int main() {
    Solution sol =  Solution();
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};
    std::vector<int> ans = sol.merge(v1,3,v2,3);

    for each (int var in ans)
    {
        cout << var << endl;
    }

  
    return 0;
}
