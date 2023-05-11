#include <iostream>
#include "Problems_Sol_Functions/Find Center of Star Graph.cpp"

int main() {
    Solution sol;
    vector<vector<int>> vect {{1, 2}, {5, 1}, {1, 3}, {1, 4}};
   
   
    cout << sol.findCenter(vect);
    return 0;
}
