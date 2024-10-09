class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();

        int c = 0;
        int minR = 0;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == '(') {
                c++;
            } else {
                if (c > 0) {
                    c--;
                } else {
                    minR++;
                }
            }
        }

        return c + minR;
    }
};
