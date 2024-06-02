class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a, p, n;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                p.push_back(nums[i]);
            } else {
                n.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size() / 2; i++) {
            a.push_back(p[i]);
            a.push_back(n[i]);
        }

        return a;
    }
};
