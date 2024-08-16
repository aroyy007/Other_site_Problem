class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // vector<int> a;

        int Mm = -1e5, Mn = 1e5, d = 0;

        for (auto& arr : arrays) {
            int a = arr[0];
            int b = arr.back();

            d = max({d, b - Mn, Mm - a});
            Mn = min(a, Mn);
            Mm = max(b, Mm);
        }

        return d;
    }
};
