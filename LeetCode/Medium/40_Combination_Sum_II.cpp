class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> c;
        combination2(res,c,candidates,target,0);
        return res;
    }

    void combination2(vector<vector<int>> &res,vector<int> &c,vector<int> &candidates,int target,int ind)
    {
        if(target==0)
        {
            res.push_back(c);
            return;
        }

        for(int i = ind;i<candidates.size();i++)
        {
            if(i>ind && candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(candidates[i]>target)
            {
                break;
            }

            c.push_back(candidates[i]);
            combination2(res,c,candidates,target-candidates[i],i+1);
            c.pop_back();
        }
    }
};
