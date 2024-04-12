class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        int prevValue = 0;

        for (int i = s.size() - 1; i >= 0; i--) 
        {
            int currentValue = romanValues[s[i]];

            if (currentValue < prevValue) {
                sum -= currentValue;
            } 
            else 
            {
                sum += currentValue;
            }

            prevValue = currentValue;
        }

        return sum;
    }
};
