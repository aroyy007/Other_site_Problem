class Solution {
public:
    bool isMagic(vector<vector<int>>& grid, int r, int c) {
        vector<int> count(10, 0);
        int sum = grid[r][c] + grid[r][c+1] + grid[r][c+2];

        for(int i = 0; i < 3; ++i) {
            int rowSum = 0, colSum = 0;
            for(int j = 0; j < 3; ++j) {
                int val = grid[r+i][c+j];
                if (val < 1 || val > 9 || ++count[val] > 1) return false;
                rowSum += val;
                colSum += grid[r+j][c+i];
            }
            if(rowSum != sum || colSum != sum) return false;
        }
        
        if(grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2] != sum) return false;
        if(grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c] != sum) return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for(int i = 0; i <= rows - 3; ++i) {
            for(int j = 0; j <= cols - 3; ++j) {
                if(isMagic(grid, i, j)) {
                    ++count;
                }
            }
        }

        return count;
    }
};
