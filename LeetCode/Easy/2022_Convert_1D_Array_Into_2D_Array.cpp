class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if (original.size() != (m * n)) {
            return {};
        }

        int idx = 0;
        vector<vector<int>> a(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = original[idx];
                idx++;
            }
        }

        return a;
    }
};
