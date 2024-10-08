class Solution {
public:
    int minSwaps(string s) {
        int c = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '[') {
                c++;
            } else {
                if (c > 0) {
                    c--;
                }
            }
        }

        return (c + 1) / 2;
    }
};
