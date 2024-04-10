class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = mul_d(n);
        int sum = sum_d(n);

        return mul-sum;
    }

    int sum_d(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int mul_d(int n) {
        int mul = 1;
        while (n > 0) {
            mul *= n % 10;
            n /= 10;
        }
        return mul;
    }
};
