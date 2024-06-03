class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) 
        {
            vector<int> aa;
            for (int i = 0; i < nums.size() - 1; ++i) 
            {
                int x = (nums[i] + nums[i + 1]) % 10; 
                aa.push_back(x);
            }
            nums = aa; 
        }
        return nums[0]; 
    }
};
