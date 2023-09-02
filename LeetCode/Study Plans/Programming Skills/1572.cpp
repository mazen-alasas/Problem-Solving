class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j || mat.size() - i - 1 == j)
                    sum += mat[i][j];
            }
        }
        return sum;
    }
};

/*
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33

00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
*/
