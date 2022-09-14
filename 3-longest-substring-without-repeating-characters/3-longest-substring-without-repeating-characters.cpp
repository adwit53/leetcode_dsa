class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0,start = 0;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(!m.count(s[i]))
                m.insert({s[i],i});
            else{
                ans = max(ans,(int)m.size());
                for(int j=start;j<m[s[i]];j++)
                    m.erase(s[j]);
                start = m[s[i]]+1;
                m[s[i]] = i;
            }
        }
        return max(ans,(int)m.size());
    }
};