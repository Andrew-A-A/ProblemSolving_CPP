#include <vector>
class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int matSize=mat.size()*mat[0].size(),R=0,C=0;
        if (matSize!=r*c)
            return mat;
        else{
            std::vector<std::vector<int>> ans(r, std::vector<int>(c, 0));
            for (int i = 0; i < mat.size(); ++i) {
                for (int j = 0; j < mat[i].size(); ++j) {
                    ans[R][C]=mat[i][j];
                    C++;
                    if (C==c){
                        C=0;
                        R++;
                    }
                }
            }
            return ans;



        }

    }
};