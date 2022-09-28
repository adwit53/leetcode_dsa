class Solution {
public:
    vector<int>v;
    vector<vector<int>>ans;
    void f(int i,int n,vector<int>& can, int tar)
    {
        if(tar==0)
        {
            ans.push_back(v);
            return;
        }
        if(i>=n) return;
        for(int idx=i;idx<n;idx++)
        {
            if(can[idx]<=tar)
            {
                if(idx>i and can[idx]==can[idx-1]) continue;
                v.push_back(can[idx]);
                f(idx+1,n,can,tar-can[idx]);
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        sort(can.begin(),can.end());
        int n=can.size();
        f(0,n,can,tar);
        return ans;
    }
};