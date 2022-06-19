#include <iostream>
#include "Problems_Sol_Functions/Matrix Diagonal Sum.cpp"
#include <vector>

int main() {
    Solution sol;
        std::vector<std::vector<int>> n
        {{1,2,3},
         {4,5,6},
         {7,8,9}};

   std::cout<<sol.diagonalSum(n);

    return 0;
}
