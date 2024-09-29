class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int a = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] > nums[k]) {
                        a++;
                    }
                }
            }
        }

        return a;
    }
};
