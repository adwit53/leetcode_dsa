class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> nums1;
        int j=0;int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums1.insert(nums1.begin(),0);
                j++;
                k++;
            }
            else if(nums[i]==1)
            {
                nums1.insert(nums1.begin()+j,1);
                j++;
                k++;
            }
            else
            {
                nums1.insert(nums1.begin()+k,2);
                k++;
            }
        }
        nums=nums1;
    }
};