class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int opened = 0;

        for (char c : s) {
            if (c == '(') {
                if (opened > 0) {
                    result += c;
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};
