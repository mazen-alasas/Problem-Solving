class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int ctr = 9;
        bool row[ctr][ctr] = {0}, col[ctr][ctr] = {0}, sub[ctr][ctr] = {0};
        for(int i = 0; i < ctr; i++) {
            for(int j = 0; j < ctr; j++) {
                if(board[i][j] == '.')
                    continue;                
                int idx = board[i][j] - '0' - 1;
                int area = (i / 3) * 3 + (j / 3);
                if(row[i][idx] || col[j][idx] || sub[area][idx])
                    return 0;
                row[i][idx] = 1;
                col[j][idx] = 1;
                sub[area][idx] = 1;
            }
        }
        return 1;
    }
};
