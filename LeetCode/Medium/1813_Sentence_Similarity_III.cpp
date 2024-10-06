class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> newS1, newS2;
        string s = "";

        for (int i = 0; i < sentence1.size(); i++) {
            if (sentence1[i] != ' ') {
                s += sentence1[i];
            } else {
                newS1.push_back(s);
                s = "";
            }
        }
        newS1.push_back(s);

        s = "";

        for (int i = 0; i < sentence2.size(); i++) {
            if (sentence2[i] != ' ') {
                s += sentence2[i];
            } else {
                newS2.push_back(s);
                s = "";
            }
        }
        newS2.push_back(s);

        if (newS1.size() > newS2.size()) {
            return isSimilar(newS1, newS2);
        } else {
            return isSimilar(newS2, newS1);
        }
    }

    bool isSimilar(vector<string>& longer, vector<string>& shorter) {
        int m = longer.size(), n = shorter.size();
        int i = 0, j = 0;

        while (i < n && longer[i] == shorter[i]) {
            i++;
        }

        while (j < n - i && longer[m - 1 - j] == shorter[n - 1 - j]) {
            j++;
        }

        return i + j == n;
    }
};
