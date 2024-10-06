class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invs) {
        unordered_set<int> sus;
        sus.insert(k);
        bool chg = true;

        while (chg) {
            chg = false;
            for (const auto& inv : invs) {
                int a = inv[0];
                int b = inv[1];
                if (sus.count(a) && !sus.count(b)) {
                    sus.insert(b);
                    chg = true;
                }
            }
        }

        for (const auto& inv : invs) {
            int a = inv[0];
            int b = inv[1];
            if (!sus.count(a) && sus.count(b)) {
                return genArray(n);
            }
        }

        vector<int> rem;
        for (int i = 0; i < n; ++i) {
            if (!sus.count(i)) {
                rem.push_back(i);
            }
        }

        return rem;
    }

private:
    vector<int> genArray(int n) {
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            res[i] = i;
        }
        return res;
    }
};
