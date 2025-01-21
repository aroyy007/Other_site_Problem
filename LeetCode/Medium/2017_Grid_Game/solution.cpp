class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> top(n + 1, 0);
        vector<long long> bottom(n + 1, 0);

        for (int i = 0; i < n; i++) {
            top[i + 1] = top[i] + grid[0][i];
            bottom[i + 1] = bottom[i] + grid[1][i];
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long scoreTop = top[n] - top[i + 1];
            long long scoreBottom = bottom[i];
            long long secondPlayerScore = max(scoreTop, scoreBottom);
            ans = min(ans, secondPlayerScore);
        }

        return ans;
    }
};
