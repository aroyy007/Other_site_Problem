class Solution {
public:
    string makeFancyString(string s) {
        string a = "";
        int c = 1;

        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] != s[i - 1]) {
                a += s[i];
                c = 1;
            } else if (c < 2) {
                a += s[i];
                c++;
            }
        }

        return a;
    }
};
