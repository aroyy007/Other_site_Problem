class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int nZ = count(nums.begin(), nums.end(), 0);
        int nO = count(nums.begin(), nums.end(), 1);
        int nT = n - nZ - nO;

        for (int i = 0; i < nZ; i++) {
            nums[i] = 0;
        }

        for (int i = nZ; i < nZ + nO; i++) {
            nums[i] = 1;
        }

        for (int i = nZ + nO; i < n; i++) {
            nums[i] = 2;
        }
    }
};
