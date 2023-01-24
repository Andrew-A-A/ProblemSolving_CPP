#include <iostream>
#include "Problems_Sol_Functions/Find the Town Judge.cpp"

int main() {
    Solution sol;
    vector<vector<int>> vect;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    vect.push_back(v1);

    //vector<int> v2;
    //v2.push_back(2);
    //v2.push_back(3);
    //vect.push_back(v2);

   /* vector<int> v3;
    v3.push_back(3);
    v3.push_back(1);
    vect.push_back(v3);*/
  /*  for (int i = 0; i < 1; i++) {

        for (int j = 0; j < 2; j++) {
            vect
        }

    }*/
   
    cout << sol.findJudge(2, vect );
    return 0;
}
