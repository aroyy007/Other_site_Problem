class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c+=nums[i];
            a.push_back(c);
        }

        return a;
    }
};
