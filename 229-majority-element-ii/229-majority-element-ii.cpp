class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        int k=nums.size()/3;
        k++;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==k)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};