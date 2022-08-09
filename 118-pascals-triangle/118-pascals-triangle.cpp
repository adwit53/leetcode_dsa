class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<int> temp;
        vector<vector<int>> ans;
    
        if(n>=1)
        {
            temp.push_back(1);
           ans.push_back(temp); 
        }
          if(n>=2)
        {
              temp.push_back(1);
           ans.push_back(temp); 
        }
        temp.clear();
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<i-1;j++)
            {
               temp.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            temp.insert(temp.begin(),1);
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};