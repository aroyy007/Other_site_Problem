class Solution {
public:
    bool checkOdd(int n) { return n % 2 != 0; }

    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (checkOdd(arr[i])) {
                c++;
                if (c == 3) {
                    return true;
                }
            } else {
                c = 0;
            }
        }
        return false;
    }
};
