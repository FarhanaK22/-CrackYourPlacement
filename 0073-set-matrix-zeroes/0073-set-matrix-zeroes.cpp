class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n= matrix.size();
    int m = matrix[0].size();
    vector<pair<int,int>> zero;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
               zero.push_back({i,j}); 
            }
        }
    }
    for(int k =0;k<zero.size();k++)
    {   
        for(int i=0;i<n;i++)
        matrix[i][zero[k].second]=0;
        for(int j=0;j<m;j++)
        matrix[zero[k].first][j]=0;
    }        

    }
};