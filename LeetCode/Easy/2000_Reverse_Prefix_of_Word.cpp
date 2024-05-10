class Solution {
public:
    string reversePrefix(string word, char ch) {
        int c = -1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                c = i;
                break;
            }
        }

        string a = "", b = "";
        if (c != -1) {
            a = word.substr(0, c + 1);
            reverse(a.begin(), a.end());
            b = word.substr(c + 1);
            return a + b;
        } 
        else {
            return word;
        }
    }
};
