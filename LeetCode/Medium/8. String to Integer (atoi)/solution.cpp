class Solution {
public:
    int myAtoi(string s) {
        bool checkMinus = false;

        long long int num = 0;
        int i = 0, n = s.size();

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                checkMinus = true;
            }
            i++;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            if (num > INT_MAX) {
                if (checkMinus) {
                    return INT_MIN;
                } else {
                    return INT_MAX;
                }
            }

            i++;
        }

        if (checkMinus) {
            return -num;
        } else {
            return num;
        }
    }
};
