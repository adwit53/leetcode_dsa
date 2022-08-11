class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int infpt=0;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                infpt=i;
                break;
            }
        }
        if(infpt==0) sort(nums.begin(),nums.end());
        else{
            int to_swap=nums[infpt-1];
            int to_swap2=-1;
            int mindiff=INT_MAX;
            for(int i=infpt;i<n;i++){
                if(nums[i]>to_swap && nums[i]-to_swap<mindiff){
                    mindiff=nums[i]-to_swap;
                    to_swap2=i;
                }
            }
            swap(nums[infpt-1],nums[to_swap2]);
            sort(nums.begin()+infpt,nums.end());
        }
    }
};