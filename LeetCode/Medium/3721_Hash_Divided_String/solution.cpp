class Solution {
public:
    string stringHash(string s, int k) {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        vector<string> substrings;
        

        for(int i = 0; i <= s.size() - k; i += k) {
            string y = s.substr(i, k);
            substrings.push_back(y);
        }
        
        string result = "";
        

        for(int i = 0; i < substrings.size(); i++) {
            int sum = 0;
            for(int j = 0; j < substrings[i].size(); j++) {
                int c = alphabet.find(substrings[i][j]);
                sum += c;
            }
            int ans = sum % 26;
            result += alphabet[ans];
        }
        
        return result;
    }
};
