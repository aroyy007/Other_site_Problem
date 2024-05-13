class Solution {
public:
    string replaceDigits(string s) {
        // string a="";

        for (int i = 1; i < s.size(); i = i + 2) {
            s[i] += s[i - 1] - '0';
        }

        return s;
    }
};
