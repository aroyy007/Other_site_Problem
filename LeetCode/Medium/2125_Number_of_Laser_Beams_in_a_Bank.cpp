class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> a;
        int ans = 0;
        int c = 0;
        for (int i = 0; i < bank.size(); i++) {
            // if(bank[i][j]=='1')
            // {
            //     c++;
            // }
            int l = count(bank[i].begin(), bank[i].end(), '1');
            if (l > 0) {
                ans += l * c;
                c = l;
            }

            // a.push_back(c);
        }

        // for (int i = 1; i < a.size(); i++) {
        //     if (a[i] == 0) {
        //         continue;
        //     } else {
        //         ans = ans + (ans * a[i]);
        //     }
        // }

        return ans;
    }
};
