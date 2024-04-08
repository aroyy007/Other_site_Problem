class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i = 0; i<words.size();i++)
        {
            if(checkPal(words[i]))
            {
                return words[i];
                break;
            }
        }
        return "";
    }

    bool checkPal(string s)
    {
        string a = s;
        reverse(a.begin(),a.end());

        if(a==s)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
