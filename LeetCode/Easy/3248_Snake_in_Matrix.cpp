class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans = 0;

        for(int i = 0;i<commands.size();i++)
        {
            if(commands[i]=="RIGHT")
            {
                ans++;
            }
            else if(commands[i]=="LEFT")
            {
                ans--;
            }
            else if(commands[i]=="DOWN")
            {
                ans+=n;
            }
            else
            {
                ans-=n;
            }
        }

        return ans;
    }
};
