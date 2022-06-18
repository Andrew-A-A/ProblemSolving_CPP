class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        l:
        if(num==0)
            return cnt;
        if(num%2==0)
            num/=2;
        else
            num--;
        cnt++;
        goto l;
    }
};