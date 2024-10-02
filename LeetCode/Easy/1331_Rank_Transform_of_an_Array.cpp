class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {}; 
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = {arr[i], i}; 
        }

        sort(a.begin(), a.end());

        vector<int> rank(n);
        int current_rank = 1;

        rank[a[0].second] = current_rank;

        for (int i = 1; i < n; i++) {
            if (a[i].first != a[i - 1].first) {
                current_rank++; 
            }
            rank[a[i].second] = current_rank;
        }

        return rank; 
    }
};
