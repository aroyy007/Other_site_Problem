class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long totalSum = accumulate(nums.begin(), nums.end(), 0LL);
        int remainder = totalSum % p;
        
        if (remainder == 0) return 0;

        unordered_map<int, int> prefixMod;
        prefixMod[0] = -1;
        
        long long prefixSum = 0;
        int minLength = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            int currentMod = prefixSum % p;
            int targetMod = (currentMod - remainder + p) % p;

            if (prefixMod.find(targetMod) != prefixMod.end()) {
                minLength = min(minLength, i - prefixMod[targetMod]);
            }

            prefixMod[currentMod] = i;
        }

        return minLength == nums.size() ? -1 : minLength;
    }
};
