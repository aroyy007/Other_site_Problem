class Solution {
public:
    string getEncryptedString(string s, int k) {
        string a = "";

        for (int i = 0; i < s.size(); i++) {
            int b = (i + k) % s.size();

            a += s[b];
        }
        return a;
    }
};
