class Solution {
public:
    int sum_d(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int a = INT_MAX;

        for(int i = 0;i<nums.size();++i)
        {
            int x = sum_d(nums[i]);
            nums[i]=x;
            a = min(a,x);
        }

        return a;
    }
};
