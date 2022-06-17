#include <vector>

using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1=coordinates[0][0],y1=coordinates[0][1];
        int x2=coordinates[1][0] ,y2=coordinates[1][1];
        if (x2-x1==0){
            if (coordinates.size()>3) {
                x2 = coordinates[2][0];
                y2 = coordinates[2][1];
            } else return true;
        }
        double slope=((double )y2-y1)/(x2-x1);
        for (int i = 2; i < coordinates.size(); ++i) {
            int x3=coordinates[i][0] ,y3=coordinates[i][1];
            double s=((double )y3-y1)/(x3-x1);
            if (s!=slope)
                return false;
        }
        return true;
    }
};