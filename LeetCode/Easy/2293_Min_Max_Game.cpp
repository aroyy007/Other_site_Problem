class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        while (nums.size() > 1) {
            int n = nums.size();

            vector<int> newNum;

            for (int i = 0; i < n / 2; i++) {
                if (i % 2 == 0) {
                    newNum.emplace_back(min(nums[2 * i], nums[2 * i + 1]));
                } else {
                    newNum.emplace_back(max(nums[2 * i], nums[2 * i + 1]));
                }
            }

            nums = newNum;
        }

        return nums[0]; 
    }
};
