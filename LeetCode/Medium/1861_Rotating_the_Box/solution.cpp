class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();

        vector<vector<char>> ans(n, vector<char>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = box[j][i];
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(ans[i].begin(), ans[i].end());
        }

        for (int j = 0; j < m; j++) {

            for (int i = n - 1; i >= 0; i--) {
                if (ans[i][j] == '.') {

                    int next = -1;

                    for (int k = i - 1; k >= 0; k--) {
                        if (ans[k][j] == '*')
                            break;
                        if (ans[k][j] == '#') {
                            next = k;
                            break;
                        }
                    }

                    if (next != -1) {
                        ans[next][j] = '.';
                        ans[i][j] = '#';
                    }
                }
            }
        }

        return ans;
    }
};
