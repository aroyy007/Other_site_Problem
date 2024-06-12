class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd, ans(nums.size());


        for(int i = 0; i < nums.size(); i++) 
        {
            if(i % 2 == 0) 
            {
                even.push_back(nums[i]);
            } 
            else 
            {
                odd.push_back(nums[i]);
            }
        }


        sort(even.begin(), even.end());
 
        sort(odd.begin(), odd.end(), greater<int>());

 
        for(int i = 0, j = 0, k = 0; i < nums.size(); i++) 
        {
            if(i % 2 == 0) 
            {
                ans[i] = even[j++];
            } 
            else 
            {
                ans[i] = odd[k++];
            }
        }

        return ans;
    }
};
