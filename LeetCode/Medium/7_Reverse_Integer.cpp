class Solution {
public:
    int reverse(int x) {
        long long result = 0;  
        while (x != 0) {
            int digit = x % 10;   
            result = result * 10 + digit;  
            x /= 10;  
        }

        if (result > INT_MAX || result < INT_MIN) {
            return 0;  
        }
        
        return result;
    }
};
