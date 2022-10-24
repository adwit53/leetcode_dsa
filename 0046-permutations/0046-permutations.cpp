class Solution {
   public: vector<vector<int>> ans; 
public:
   void func(vector<int>& nums, vector<int> temp, int i )
    {
        int t;
        if(i==nums.size()-1)
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            t=temp[j];
            temp[j]=temp[i];
            temp[i]=t;
            func(nums,temp,i+1);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        func(nums,nums,0);
        return ans;
        
    }
};