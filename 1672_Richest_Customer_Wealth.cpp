class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c,Mc=0;

        for(int i=0;i<accounts.size();i++)
        {
            c=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                c+=accounts[i][j];
            }
            Mc=max(Mc,c);
        }

        return Mc;
    }
};
