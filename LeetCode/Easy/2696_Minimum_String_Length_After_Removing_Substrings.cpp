class Solution {
public:
    int minLength(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); ++i) {
            char cs = s[i];

            if (st.empty()) {
                st.push(cs);
                continue;
            }

            if (cs == 'B' && st.top() == 'A') {
                st.pop();
            } else if (cs == 'D' && st.top() == 'C') {
                st.pop();
            } else {
                st.push(cs);
            }
        }

        return st.size();
    }
};
