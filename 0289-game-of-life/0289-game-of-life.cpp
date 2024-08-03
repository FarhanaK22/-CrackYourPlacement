class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
    int n = board.size();
    int m = board[0].size();

    vector<vector<int>> newBoard(n, vector<int>(m, 0)); // Create a new board

    // Define eight possible directions for neighbors
    vector<int> dx = {1, 1, 1, 0, 0, -1, -1, -1};
    vector<int> dy = {1, 0, -1, 1, -1, 1, 0, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int liveNeighbors = 0;

            // Count live neighbors
            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 1)
                    liveNeighbors++;
            }

            if (board[i][j] == 1) {
                // Cell is currently alive
                if (liveNeighbors < 2 || liveNeighbors > 3)
                    newBoard[i][j] = 0; // Cell dies
                else
                    newBoard[i][j] = 1; // Cell remains alive
            } else {
                // Cell is currently dead
                if (liveNeighbors == 3)
                    newBoard[i][j] = 1; // Cell becomes alive
                else
                    newBoard[i][j] = 0; // Cell remains dead
            }
        }
    }

    // Copy the new board back to the original board
    board = newBoard;
}

};