class Solution {
public:
bool solve(vector<vector<char>>& board,int i, int j, string &word,int index ,int n ,int m )
{  if(index == word.size() )
    return true;
    if( i<0 || j<0 || i>=n || j>=m || board[i][j]=='#' ||board[i][j]!=word[index])
    return false;

    char visited =board[i][j];
    board[i][j] = '#';

    if(solve(board,i,j-1,word,index+1, n,m))
    return true;
    if(solve(board,i,j+1,word,index+1, n,m))
    return true;
    if(solve(board,i-1,j,word,index+1, n,m))
    return true;
    if(solve(board,i+1,j,word,index+1, n,m))
    return true;

    board[i][j]= visited;
    

    return false;

}
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for( int i=0;i<n ;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(board[i][j]== word[0])
                {
                    if(solve(board, i, j, word,0,n,m))
                    return true;
                }
            }
        }
        return false;
    }
};