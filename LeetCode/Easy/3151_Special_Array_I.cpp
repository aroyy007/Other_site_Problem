class Solution {
public:
    int par(int n) {
        if (n % 2 == 0) {
            return 1;
        }
        else
        {
            return 2;
        }
        //return false;
    }
    bool isArraySpecial(vector<int>& nums) {

        if(nums.size()==1)
        {
            return true;
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            if (par(nums[i]) == par(nums[i + 1])) {
                return false;
            }
        }
        return true;;
    }
};
