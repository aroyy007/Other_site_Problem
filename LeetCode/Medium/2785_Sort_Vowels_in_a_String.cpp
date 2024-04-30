class Solution {
public:
    string sortVowels(string s) {
        string a = "aeiou";
        string b = "AEIOU";

        string x = "";
        vector<int> y;

        string p = "";
        // vector<int> q;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {
                x += s[i];
                y.push_back(i);
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                x += s[i];
                y.push_back(i);
            }
        }

        sort(x.begin(), x.end());
        //sort(p.begin(), p.end());

        for (int i = 0; i < y.size(); i++) {
            s[y[i]] = x[i];
            //s[y[i]] = p[i];
        }

        return s;
    }
};
