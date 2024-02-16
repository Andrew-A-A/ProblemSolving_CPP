#include <algorithm>
#include <string>

using namespace std;
class Solution {
public:
    string addBinary(string &a, string &b) {
        
        string ans= "";
        fillTheGap(a, b);
        int n = a.size();
        bool carry = false;
        for (int i = n-1; i >= 0; i--) {
            if (a[i] == '1' && b[i] == '1') {
                if (carry) {
                    ans.append("1");
                    carry = true;
                    continue;
                }

                ans.append("0");
                carry = true;
            }
            else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
                if (carry) {
                    ans.append("0");
                    carry = true;
                    continue;
                }
                ans.append("1");
            }
            else {
                if (carry) {
                    ans.append("1");
                    carry = false;
                    continue;
                }
                ans.append("0");
            }
        }
        if (carry)
            ans.append("1");
        reverse(ans.begin(), ans.end());
        return ans;
    }
    void fillTheGap(string & a, string & b) {
        if (a.size() > b.size()) {
            b.insert(0, 1, '0');
            fillTheGap(a, b);
        }
        else if(a.size() < b.size()) {
            a.insert(0, 1, '0');
            fillTheGap(a, b);
        }
    }
};