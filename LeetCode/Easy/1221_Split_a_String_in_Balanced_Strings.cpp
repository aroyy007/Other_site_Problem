class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0,l=0,r=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='L')
            {
                l++;
            }
            if(l==r)
            {
                c++;
                l=0;
                r=0;
            }
        }

        return c;
    }
};
