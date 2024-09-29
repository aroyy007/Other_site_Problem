class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        int n = maximumHeight.size();

        sort(maximumHeight.begin(), maximumHeight.end());

        long long a = 0, p = -1;

        for (int i = n - 1; i >= 0; i--) {
            if (p == -1) {
                a += maximumHeight[i];
                p = a;
            } else {
                if (p > maximumHeight[i]) {
                    p = maximumHeight[i];
                    a += p;
                } else {
                    p--;
                    a += p;
                }
            }
            if (p == 0) {
                return -1;
            }
        }
        return a;
    }
};
