class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSum;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                    return twoSum;  
                }
            }
        }

        
        return twoSum;
    }
};
