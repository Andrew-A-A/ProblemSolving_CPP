#include <iostream>
#include "Problems_Sol_Functions/1275. Find Winner on a Tic Tac Toe Game.cpp"
//C:\Users\andro\source\repos\Andrew-A-A\ProblemSolving_CPP\Problems_Sol_Functions\1275. Find Winner on a Tic Tac Toe Game.cpp
using namespace std;
int main() {
    Solution sol;
   vector<int> nums1{2,2,4,4 };
  vector<int> nums2{ 2, 2, 4, 4 };
  vector<vector<int>> moves{ {2,0},{1,1},{0,2},{2,1},{1,2},{1,0},{0,0},{0,1} };
  cout << sol.tictactoe(moves);
    return 0;
}
