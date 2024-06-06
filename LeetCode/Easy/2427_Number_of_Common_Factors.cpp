class Solution {
public:
    int commonFactors(int a, int b) {
        int m = max(a, b);
        int x = 0;
        for (int i = 1; i <= m; i++) {
            if (a % i == 0 && b % i == 0) {
                x++;
            }
        }

        return x;
    }
};
