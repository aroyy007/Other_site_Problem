class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i,j,c=0,n=nums.size();

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])<target)
                {
                    c++;
                }
            }
        }
        return c;
    }
};
