class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> a;

        for (int i = 0; i < timePoints.size(); i++) {
            int h = stoi(timePoints[i].substr(0, 2));
            int m = stoi(timePoints[i].substr(3));
            a.push_back(h * 60 + m);
        }

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        for (int i = 0; i < a.size() - 1; i++) {
            ans = min(ans, a[i + 1] - a[i]);
        }

        return min(ans, 24 * 60 - a[a.size() - 1] + a[0]);
    }
};
