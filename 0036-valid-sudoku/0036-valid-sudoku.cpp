class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //rows
        unordered_map<int, bool> dig;
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                if(board[i][j] != '.'){
                    if(dig[board[i][j]] == false)
                        dig[board[i][j]] = true;
                    else
                        return false;
                }
            }
            dig.clear();
        }

        //rows
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                if(board[j][i] != '.'){
                    if(dig[board[j][i]] == false)
                        dig[board[j][i]] = true;
                    else
                        return false;
                }
            }   
            dig.clear();
        }

        //squares
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 3; ++j){
                for(int k = 0; k < 3; ++k){
                    if(board[j + i/3*3][k + i%3*3] != '.'){
                        if(dig[board[j + i/3*3][k + i%3*3]] == false)
                            dig[board[j + i/3*3][k + i%3*3]] = true;
                        else
                            return false;
                    }
                }
            }
            dig.clear();
        }

        return true;
    }
};