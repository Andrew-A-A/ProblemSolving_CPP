#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string tictactoe(vector<vector<int>> moves) {
        vector<vector<char>> board{{' ',' ',' '},{' ',' ',' '} ,{' ',' ',' '} };
        for (int i = 0; i < moves.size(); i++) {
            int moveAxisX = moves[i][0];
            int moveAxisY = moves[i][1];
            if (i % 2 == 0) {
                board[moveAxisX][moveAxisY] = 'X';
            }
            else {
                board[moveAxisX][moveAxisY] = 'Y';
            }
       }

        //Hand rows win case
        if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] == 'X')
            return "A";

        if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] == 'X')
            return "A";

        if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] == 'X')
            return "A";

        // Diagonal win
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 'X')
            return "A";

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 'X')
            return "A";

        // Column win
        if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == 'X')
            return "A";

        if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] == 'X')
            return "A";

        if (board[0][2] == board[1][2] && board[2][2] == board[1][2] && board[0][2] == 'X')
            return "A";



        //Hand rows win case
        if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] == 'Y')
            return "B";

        if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] == 'Y')
            return "B";

        if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] == 'Y')
            return "B";

        // Diagonal win
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == 'Y')
            return "B";

        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == 'Y')
            return "B";

        // Column win
        if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == 'Y')
            return "B";

        if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] == 'Y')
            return "B";

        if (board[0][2] == board[1][2] && board[2][2] == board[1][2] && board[0][2] == 'Y')
            return "B";


        if (moves.size() < 9) {
            return "Pending";
        }
  

        return "Draw";
    }
};