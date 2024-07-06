class Solution {
public:
    int passThePillow(int n, int time) {
        int bP = 0, d = 1;

        for (int i = 0; i < time; i++) {
            if (d == 1) {
                if (bP == n - 1) {
                    d = -1;
                }
                bP += d;
            } else {
                if (bP == 0) {
                    d = 1;
                }
                bP += d;
            }
        }

        return bP + 1;
    }
};
