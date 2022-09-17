class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> triplets;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)//to initialize the 'i' pointer for first variable
        {
            if(i==0||(i>0&&nums[i]!=nums[i-1]))//so that the value 'i' pointer is pointing does not repeat
            {
                int low=i+1,high=nums.size()-1, sum=-nums[i];//initializing low and high pointer and sum variable
                while(low<high)//so that low and high pointer does not cross each other or they will repeat the values
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        triplets.push_back(temp);
                        //to skip the indexes with dublicate value
                        while(low<high&&(nums[low]==nums[low+1]))low++;
                        while(low<high&&(nums[high]==nums[high-1]))high--;
                        low++;
                        high--;
                    }
                    else if (nums[low]+nums[high]<sum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return triplets;
    }
};