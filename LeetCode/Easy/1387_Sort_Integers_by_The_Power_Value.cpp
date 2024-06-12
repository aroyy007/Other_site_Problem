class Solution {
public:
    int powerArr(int n) 
    {
        int c = 0;
        while (n != 1) 
        {
            if (n % 2 == 0) 
            {
                n = n / 2;
            } 
            else 
            {
                n = 3 * n + 1;
            }
            c++;
        }
        return c;
    }

    int getKth(int lo, int hi, int k) 
    {
        vector<pair<int, int>> powerValues;

        for (int i = lo; i <= hi; i++) 
        {
            int power = powerArr(i);
            powerValues.push_back({power, i});
        }

        sort(powerValues.begin(), powerValues.end());

        return powerValues[k - 1].second;
    }
};
