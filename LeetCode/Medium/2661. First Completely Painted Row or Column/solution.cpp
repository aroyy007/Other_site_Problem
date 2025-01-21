class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> rowCount(rows, 0);
        vector<int> colCount(cols, 0);
        unordered_map<int, pair<int, int>> posMap;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                posMap[mat[i][j]] = {i, j};
            }
        }

        for (int k = 0; k < arr.size(); k++) {
            int num = arr[k];
            if (posMap.find(num) != posMap.end()) {
                int row = posMap[num].first;
                int col = posMap[num].second;

                rowCount[row]++;
                colCount[col]++;

                if (rowCount[row] == cols || colCount[col] == rows) {
                    return k; 
                }
            }
        }

        return -1; 
    }
};
