class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> matrix;

        //fill top row
        matrix.push_back({1});
        for (int i=1; i<n; i++){
            matrix[0].push_back(1);
        }

        // fill rest
        for (int i=1; i<m; i++){
            matrix.push_back({1});
            for (int j=1; j<n; j++){
                matrix[i].push_back(matrix[i-1][j] + matrix[i][j-1]);
            }
        }

        return matrix[m-1][n-1];
    }
};
