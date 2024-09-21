class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for (int i = 1; i <= 9; ++i) {
            dfs(i, n, result);
        }
        return result;
    }

    void dfs(int cur, int n, vector<int>& result) {
        if (cur > n)
            return;
        result.push_back(cur);
        for (int i = 0; i <= 9; ++i) {
            if (cur * 10 + i > n)
                return;
            dfs(cur * 10 + i, n, result);
        }
    }
};
