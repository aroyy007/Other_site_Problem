class Solution {
public:
    bool isThree(int n) {
        int x = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                x++;
            }
        }
        return x == 3;
    }
};
