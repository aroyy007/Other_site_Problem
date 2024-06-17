/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return       -1 if num is higher than the picked number
 *               1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l = 1;  // The lowest number to guess should be 1, not 0.
        long long h = n;

        while (l <= h) {
            long long m = l + (h - l) / 2;
            int result = guess(m);  // Call guess only once per iteration

            if (result == -1) {
                h = m - 1;  // m is too high
            } else if (result == 1) {
                l = m + 1;  // m is too low
            } else {
                return m;  // m is correct
            }
        }

        return -1;  // This line is never reached if the number is guaranteed to be within [1, n]
    }
};
