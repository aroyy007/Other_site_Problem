class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(), sentence.end());

        if (sentence.size() < 26) {
            return false;
        }

        bool check[26] = {false};

        for (char ch : sentence) {
            int index = ch - 'a';
            check[index] = true;
        }

        for (int i = 0; i < 26; ++i) {
            if (!check[i]) {
                return false;
            }
        }
        return true;
    }
};
