class Solution {
public:
    int getLucky(string s, int k) {
        string a = "abcdefghijklmnopqrstuvwxyz";
        string b = "";

        for(int i = 0; i < s.size(); i++) {
            int x = a.find(s[i]) + 1;
            b += to_string(x);
        }

        
        int res = 0;
        for(char c : b) {
            res += c - '0';
        }
         
        while (--k > 0) {
            int sum = 0;
            while (res > 0) {
                sum += res % 10;
                res /= 10;
            }
            res = sum;
        }

        return res;
    }
};
