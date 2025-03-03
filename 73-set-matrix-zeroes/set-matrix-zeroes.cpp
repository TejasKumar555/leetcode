

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        // Step 1: Identify zeroes and mark the first row and column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    if (i == 0) firstRowZero = true;
                    if (j == 0) firstColZero = true;
                    matrix[i][0] = 0; // Mark first column
                    matrix[0][j] = 0; // Mark first row
                }
            }
        }

        // Step 2: Use the markers to set elements to zero
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Handle the first row and first column separately
        if (firstRowZero) {
            for (int j = 0; j < m; j++) matrix[0][j] = 0;
        }
        if (firstColZero) {
            for (int i = 0; i < n; i++) matrix[i][0] = 0;
        }
    }
};
