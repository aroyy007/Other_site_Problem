class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 0), right(n, 0), ans(n);
        
        int s = 0;
        for(int i = 0; i < n - 1; i++) {
            s += nums[i];
            left[i + 1] = s;
        }

        s = 0;
        for(int i = n - 1; i > 0; i--) {
            s += nums[i];
            right[i - 1] = s;
        }

        for(int i = 0; i < n; i++) {
            ans[i] = abs(left[i] - right[i]);
        }

        return ans;
    }
};
