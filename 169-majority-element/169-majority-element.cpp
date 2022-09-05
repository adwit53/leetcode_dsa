class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int max=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(max<m[nums[i]])
            {
                ans=nums[i];
                max=m[nums[i]];
            }
        }
        return ans;
    }
};