class Solution {
public:
    int uniquePaths(int m, int n) {
        int matriz[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;
            }
        }

        matriz[m-1][n-1] = 1;

        for (int i = m-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {

                if (i < m-1) {
                    matriz[i][j] += matriz[i+1][j];
                }

                if (j < n-1) {
                    matriz[i][j] += matriz[i][j+1];
                }
            }
        }

        return matriz[0][0];
    }
};