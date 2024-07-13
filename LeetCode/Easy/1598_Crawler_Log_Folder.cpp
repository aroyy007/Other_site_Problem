class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c = 0;

        for(int i = 0; i < logs.size(); i++) {
            if(logs[i] == "../") {
                if(c > 0) {
                    c--;
                }
            } else if(logs[i] != "./") {
                c++;
            }
        }

        return c;
    }
};
