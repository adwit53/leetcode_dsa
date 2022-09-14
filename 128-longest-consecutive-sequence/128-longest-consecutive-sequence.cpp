class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)
            return n;
        unordered_map<int, bool>mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]] = true;
        }
        int ans = 1;
        for(int i = 0; i < n; i++){
            if(mp.find(nums[i] - 1) == mp.end()){
                int k = nums[i];
                int ct = 1;
                while(mp.find(++k) != mp.end()){
                    ct++;
                }
                ans = max(ans, ct);
            }
        }
        return ans;
    }
};