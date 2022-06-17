#include <iostream>
#include "Problems_Sol_Functions/Average Salary Excluding the Minimum and Maximum Salary.cpp"

using namespace std;
int main() {
    Solution sol;
    vector<int> salary{4000,3000,1000,2000};
    cout<<sol.average(salary);

    return 0;
}
