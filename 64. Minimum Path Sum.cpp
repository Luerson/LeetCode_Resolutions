class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int direitaValido = (j < n-1);
                int baixoValido = (i < m-1);
                int caso;

                if (direitaValido && baixoValido) {
                    caso = 1;
                } else if (direitaValido) {
                    caso = 2;
                } else if (baixoValido) {
                    caso = 3;
                }

                switch (caso) {
                    case 1:
                        grid[i][j] += min(grid[i+1][j], grid[i][j+1]); break;
                    case 2:
                        grid[i][j] += grid[i][j+1]; break;
                    case 3:
                        grid[i][j] += grid[i+1][j]; break;
                }
            }
        }

        return grid[0][0];
    }
};