class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;

        for (int i = 0; i < details.size(); i++) {
            string s = details[i].substr(11, 2);
            int x = stoi(s);
            if (x > 60) {
                c++;
            }
        }

        return c;
    }
};
