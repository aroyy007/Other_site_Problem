class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m = 0;
        int c = 0;
        for (int i = 0; i < gain.size(); i++) {
            c += gain[i];
            m = max(m, c);
        }

        return m;
    }
};
