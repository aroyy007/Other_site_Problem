class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";

        for(int i=0;i<s.size();i++)
        {
            char x = tolower(s[i]);
            ans+=x;
        }

        return ans;
    }
};
