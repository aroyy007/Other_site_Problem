class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<int> tar = times[targetFriend];
        sort(times.begin(), times.end());

        int n = times.size();
        vector<int> rTime(n);

        for (auto time : times) {
            for (int i = 0; i < n; i++) {
                if (rTime[i] <= time[0]) {
                    rTime[i] = time[1];
                    if (time == tar)
                        return i;
                    break;
                }
            }
        }
        return 0;
    }
};
