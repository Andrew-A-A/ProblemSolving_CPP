#include <string>
class Solution {
public:
    std::string interpret(std::string command) {
        std::string ans;
        for (int i = 0; i < command.size() ; ++i) {
            if (command[i]=='G')
                ans+='G';
            else if(command[i]=='('){
                if (command[i+1]==')')
                    ans+='o';
                else
                    ans+="al";
                i++;
            }
        }
        return ans;
    }
};