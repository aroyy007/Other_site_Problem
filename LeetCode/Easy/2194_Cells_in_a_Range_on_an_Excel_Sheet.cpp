class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> a;

        char c1 = s[0];
        int c2 = s[1] - '0';
        char c3 = s[3];
        int c4 = s[4] - '0';

        for (char c = c1; c <= c3; c++) {
            for (int i = c2; i <= c4; i++) {
                string cell = "";
                cell += c;
                cell += to_string(i);
                a.push_back(cell);
            }
        }

        return a;
    }
};
