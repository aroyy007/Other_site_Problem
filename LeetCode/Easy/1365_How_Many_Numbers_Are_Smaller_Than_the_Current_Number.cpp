class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int c = 0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    c++;
                }
            }
            a.push_back(c);
        }

        return a;
    }
};
