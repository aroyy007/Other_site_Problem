class Solution {
public:
    int binarysearch(vector<int>row)
    {
        int low = 0;
        int high = row.size()-1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;

            if(row[mid]>=0)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return row.size()-1-high;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;

        for(int i=0;i<grid.size();i++)
        {
            ans += binarysearch(grid[i]);
        }

        return ans;
    }
};
