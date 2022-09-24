class Solution {
public:
    void solve(vector<int>ip,vector<int>op,vector<vector<int>>&ans){
        if(ip.size()==0){
 ans.push_back(op);return;
        }
        vector<int>op1=op;
            vector<int>op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip,op1,ans);
        solve(ip,op2,ans);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;vector<int>ip=nums;
        vector<vector<int>>an;
        set<vector<int>>st;vector<int>op;
        solve(ip,op,ans);
        for(auto i:ans){
            sort(i.begin(),i.end());
            st.insert(i);
        }
        for(auto i:st)an.push_back(i);
        return an;
    }
};