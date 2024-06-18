class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        
        vector<pair<int, int>> diffProf(profit.size());

        for (int i = 0; i < profit.size(); i++) {
            diffProf[i] = {difficulty[i], profit[i]};
        }

        sort(diffProf.begin(), diffProf.end());
        sort(worker.begin(), worker.end());

        int maxProf = 0, idx = 0, bprof = 0;
        int n = diffProf.size();
        int m = worker.size();

        for (int i = 0; i < m; i++) {
            while (idx < n && worker[i] >= diffProf[idx].first) {
                bprof = max(bprof, diffProf[idx].second);
                idx++;
            }
            maxProf += bprof;
        }
        return maxProf;
    }
};
