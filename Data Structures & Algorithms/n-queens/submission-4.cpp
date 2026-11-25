class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        backtrack(0, board, 0, 0);
       return res; 
    }

    void backtrack(int n, vector<string> &board, int row, int col){
        if (row == board.size()){
            res.push_back(board);
            return;
        }

        for (int c{}; c < board.size(); c++) {

            if (validate(n, board, row, c)){

                board[row][c] = 'Q';
                backtrack(n + 1, board, row + 1, c);
                board[row][c] = '.';
            }
        }

        return ;
    }

    bool validate(int n, vector<string> &board, int row, int col){

        if (row >= board.size() || col >= board.size())
            return false;

        for (int r{}, c{}; r < board.size(); r++, c++){
            int c1 = col - (row - r) ;
            int c2 = col + (row - r) ;
            if (board[r][col] == 'Q'){return false;}
            if (c1 >= 0 && board[r][c1] == 'Q') {return false;}
            if (c2 >= 0 && board[r][c2] == 'Q') {return false;}
            if (board[row][c] == 'Q') return false;
        }

        return true;
    }
};
