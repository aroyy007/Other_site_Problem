class Solution {
public:
    int maxDepth(string s) {
        int c = 0;
        int m = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c++;
            }
            else if(s[i]==')')
            {
                c--;
            }
            m=max(c,m);
        }

        return m;
    }
};
