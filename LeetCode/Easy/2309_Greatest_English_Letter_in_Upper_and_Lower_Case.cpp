class Solution {
public:
    string greatestLetter(string s) {

        unordered_set<char> uppercase;
        unordered_set<char> lowercase;

        for (char c : s) {
            if (isupper(c)) {
                uppercase.insert(c);
            } else if (islower(c)) {
                lowercase.insert(c);
            }
        }

        char greatest = '\0';

        for (char c : uppercase) {
            if (lowercase.count(tolower(c))) {
                if (greatest == '\0' || c > greatest) {
                    greatest = c;
                }
            }
        }

        return greatest == '\0' ? "" : string(1, greatest);
    }
};
