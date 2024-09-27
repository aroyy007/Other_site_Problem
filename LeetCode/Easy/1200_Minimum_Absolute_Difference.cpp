class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> a;
        int b = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            int m = arr[i] - arr[i - 1];
            b = min(b, m);
        }

        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] - arr[i - 1] == b) {
                a.push_back({arr[i - 1], arr[i]});
            }
        }

        return a;
    }
};
