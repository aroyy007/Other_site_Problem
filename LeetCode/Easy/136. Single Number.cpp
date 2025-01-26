class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> f;

        for (int num : nums) {
            f[num]++;
        }

        for (const auto& pair : f) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1;
    }
};
