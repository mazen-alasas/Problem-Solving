class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> newMatrix(r, vector<int>(c, 0));
        if (r * c != mat.size() * mat[0].size())
            return mat;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                int k = i * mat[i].size() + j;
                newMatrix[k / c][k % c] = mat[i][j];
            }
        }
        return newMatrix;
    }
};
