class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        
        string s1 = string(4-to_string(num1).length(),'0')+to_string(num1);
        string s2 = string(4-to_string(num2).length(),'0')+to_string(num2);
        string s3 = string(4-to_string(num3).length(),'0')+to_string(num3);
        
        string ans="";
        
        for(int i = 0;i<4;i++)
        {
            char c = min({s1[i],s2[i],s3[i]});
            ans+=c;
        }
        
        return stoi(ans);
    }
};
