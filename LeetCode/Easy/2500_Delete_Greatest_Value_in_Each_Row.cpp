class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;

        for (int i = 0; i < grid.size(); i++) {
            sort(grid[i].begin(), grid[i].end());
            reverse(grid[i].begin(), grid[i].end());
        }

        for (int col = 0; col < grid[0].size(); col++) {
            int maxx = 0;
            for (int row = 0; row < grid.size(); row++) {
                maxx = max(maxx, grid[row][col]);
            }
            ans += maxx;
        }

        return ans;
    }
};
