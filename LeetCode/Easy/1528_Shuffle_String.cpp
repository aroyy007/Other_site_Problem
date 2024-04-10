
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = "";

        for(int i=0; i<indices.size()-1;i++)
        {
            for(int j=i+1;j<indices.size();j++)
            {
                if(indices[i]>indices[j])
                {
                    swap(indices[i],indices[j]);
                    swap(s[i],s[j]);
                }
            }
        }

        return s;
    }
};
