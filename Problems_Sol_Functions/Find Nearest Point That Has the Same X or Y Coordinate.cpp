#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min= 100000000000000,pos=-1;
        for (int i = 0; i < points.size(); ++i) {
            if(points[i][0]==x ||points[i][1]==y ){
                if (abs(x-points[i][0])+abs(y-points[i][1])<min) {
                    min = abs(x-points[i][0])+abs(y-points[i][1]);
                    pos=i;
                }
            }
        }
        return pos;
    }
};