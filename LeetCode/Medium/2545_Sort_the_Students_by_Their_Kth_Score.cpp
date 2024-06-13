class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {

        auto comparator = [k](const vector<int>& a, const vector<int>& b) {
            return a[k] > b[k];
        };

        sort(score.begin(), score.end(), comparator);

        return score;
    }
};
