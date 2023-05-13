#include <iostream>
#include "Problems_Sol_Functions/Find if Path Exists in Graph.cpp"
using namespace std;
int main() {
    Solution sol;
    vector<vector<int>> edges1{ {0,1},{0,2},{1,2} };
    vector<vector<int>> edges2{ {4,3},{1,4},{4,8},{1,7},{6,4},{4,2},{7,4},{4,0},{0,9},{5,4} };
   cout<<sol.validPath(10,edges2,5,9 );
    return 0;
}
