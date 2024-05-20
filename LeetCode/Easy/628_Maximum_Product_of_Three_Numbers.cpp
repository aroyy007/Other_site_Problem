
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = 1, y = 1;
        // for (int i = 0; i < 3; i++) {
        //     x = x * nums[i];
        // }
        // for (int i = nums.size(); i >= (nums.size() - 3); i--) {
        //     y = y * nums[i];
        // }
        
        int n = nums.size();
        x = nums[n - 1] * nums[n - 2] * nums[n - 3];
        y = nums[0] * nums[1] * nums[n - 1];

        return max(x, y);
    }
};
