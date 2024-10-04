class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int n = skill.size();
        long long tar = skill[0] + skill[n - 1], tot = 0;

        for (int i = 0; i < n / 2; i++) {
            long long c = skill[i] + skill[n - i - 1];

            if (c != tar) {
                return -1;
            }
            tot += (long long)skill[i] * (long long)skill[n - i - 1];
        }

        return tot;
    }
};
