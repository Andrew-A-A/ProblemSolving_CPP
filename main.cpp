#include <iostream>
#include "Problems_Sol_Functions/Next Greater Element I.cpp"

using namespace std;



int main() {
    Solution sol;
    vector<int> n1={4,1,2},n2={1,3,4,2};

    vector<int>ans =sol.nextGreaterElement(n1,n2);
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i]<<endl;
    }
    return 0;
}
