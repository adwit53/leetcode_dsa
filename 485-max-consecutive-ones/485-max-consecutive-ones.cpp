class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0, c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                if(ans<c)
                    ans=c;
                c=0;
            }
        }
        if(ans<c)
            ans=c;
        return ans;
    }
};