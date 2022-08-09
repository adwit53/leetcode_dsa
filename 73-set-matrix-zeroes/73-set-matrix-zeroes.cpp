class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> row;
        unordered_map<int,int> column;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    column[j]=1;
                }
                
            }
            if(row[i]==1)
            {
                fill(matrix[i].begin(),matrix[i].end(),0);
            }
        }
        for(int j=0;j<matrix[0].size();j++)
            {
            if(column[j]==1)
            {
                for(int i=0;i<matrix.size();i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};