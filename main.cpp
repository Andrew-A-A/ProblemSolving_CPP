#include <iostream>
#include "Problems_Sol_Functions/Check If It Is a Straight Line.cpp"

using namespace std;
int main() {
    Solution sol;
    vector<vector<int>> n={{0,0},{0,1},{0,-1}};
    cout<<sol.checkStraightLine(n);

    return 0;
}
