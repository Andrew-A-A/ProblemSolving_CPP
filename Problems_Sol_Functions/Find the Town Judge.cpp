#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> haveTrusted;
        vector<int> trustedCnt;
        if (trust.size() == n) {
            return -1;
        }
        haveTrusted.resize(n, false);
        trustedCnt.resize(n, 0);
        for (auto item : trust)
        {
            haveTrusted[item[0] - 1] = true;
            trustedCnt[item[1] - 1]++;
           
        }
        for(int i=0; i<n ; i++)
        {
            if (haveTrusted[i] == false && trustedCnt[i]==n-1)
                return i+1;
        }
        return -1;
    }
};