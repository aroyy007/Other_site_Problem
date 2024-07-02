class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a;
        a.reserve(m + n);

        for (int i = 0; i < m; i++) {
            a.push_back(nums1[i]);
        }

        for (int j = 0; j < n; j++) {
            a.push_back(nums2[j]);
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < m + n; i++) {
            nums1[i] = a[i];
        }
    }
};
