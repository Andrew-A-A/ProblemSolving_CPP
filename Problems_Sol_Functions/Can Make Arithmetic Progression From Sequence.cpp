#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int> sorted= arr;

        std::sort(sorted.begin(), sorted.end());
        int diff=sorted[1]-sorted[0];
        for (int i = 1; i < sorted.size()-1; ++i) {
            if (sorted[i+1]-sorted[i]!=diff)
                return false;
        }
        return true;
    }
};