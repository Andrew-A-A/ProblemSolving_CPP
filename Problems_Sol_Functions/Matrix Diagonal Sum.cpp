#include <vector>
class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        int sum=0;

        for (int i = 0; i < mat.size(); ++i) {
            sum+=mat[i][i];
            if (i!=mat[i].size()-1-i)
            sum+=mat[i][mat[i].size()-1-i];
        }
        return sum;
    }
};