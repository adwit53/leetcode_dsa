class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int maxc=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<maxc;j++)
            {
                if(matrix[i][j]>target)
                {
                    maxc=j;
                    break;
                }
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};