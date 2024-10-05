class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;

        vector<int> s1_count(26, 0), s2_count(26, 0);

        for (int i = 0; i < s1.size(); ++i) {
            ++s1_count[s1[i] - 'a'];
            ++s2_count[s2[i] - 'a'];
        }

        for (int i = s1.size(); i < s2.size(); ++i) {
            if (s1_count == s2_count)
                return true;

            ++s2_count[s2[i] - 'a'];
            --s2_count[s2[i - s1.size()] - 'a'];
        }

        return s1_count == s2_count;
    }
};
