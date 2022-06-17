#include <iostream>
#include <vector>
#include "Problems_Sol_Functions/Find Nearest Point That Has the Same X or Y Coordinate.cpp"

using namespace std;
int main() {
    Solution sol;
    vector<vector<int>> n{{1,2},{3,1},{2,4},{2,3},{4,4}};
    cout<<sol.nearestValidPoint(3,4,n);

    return 0;
}
