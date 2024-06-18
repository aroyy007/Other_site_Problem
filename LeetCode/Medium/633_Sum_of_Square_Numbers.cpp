class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0, h = sqrt(c);
        
        while (l <= h) {
            long long sum = l * l + h * h;
            
            if (sum == c) {
                return true;
            } else if (sum < c) {
                l++;
            } else {
                h--;
            }
        }
        
        return false;
    }
};
