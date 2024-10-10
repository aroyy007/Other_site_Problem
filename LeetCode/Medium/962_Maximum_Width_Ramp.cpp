class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            if (s.empty() || nums[s.top()] > nums[i]) {
                s.push(i);
            }
        }
        int maxD = 0;
        for (int j = n - 1; j >= 0; --j) {
            while (!s.empty() && nums[j] >= nums[s.top()]) {
                maxD = max(maxD, j - s.top());
                s.pop();
            }
        }

        return maxD;
    }
};
