#include <cmath>
class Solution {
public:
    bool isHappy(int n) {
        int newN=0;
        Step : while (n>0 ){
        newN+= pow(n%10,2);
        n/=10;

    }
        n=newN;
        if (newN==1)
            return 1;
        if (newN== 4)
            return 0;
        newN=0;
        goto Step;
    }
};