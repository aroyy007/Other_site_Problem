class Solution {
public:
    bool isPerfectSquare(int num) {
        int root = static_cast<int>(sqrt(num));
        return root * root == num;
    }

    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> streak;
        int maxStreak = -1;

        for (int num : nums) {

            int root = static_cast<int>(sqrt(num));

            if (streak.find(root) != streak.end() && root * root == num) {
                streak[num] = streak[root] + 1;
                maxStreak = max(maxStreak, streak[num]);
            } else {
                streak[num] = 1;
            }
        }

        return maxStreak;
    }
};
