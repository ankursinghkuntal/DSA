class Solution {
  public:
  
    bool isSafe(int row, int col, vector<string>& board, int n) {
        int dupRow = row, dupCol = col;
        
        // Check upper diagonal (↖)
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row--; col--;
        }
        
        row = dupRow, col = dupCol;
        
        // Check left side (←)
        while (col >= 0) {
            if (board[row][col] == 'Q') return false;
            col--;
        }
        
        row = dupRow, col = dupCol;
        
        // Check lower diagonal (↙)
        while (row < n && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row++; col--;
        }
        
        return true;
    }

    void solve(vector<vector<string>>& ans, vector<string> &board, int n, int col) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        
        for (int row = 0; row < n; row++) { 
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(ans, board, n, col + 1);
                board[row][col] = '.'; // Backtrack
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); // Initialize empty board
        solve(ans, board, n, 0);
        
        vector<vector<int>> ansReal;
        
        for (auto solution : ans) {
            vector<int> current;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (solution[i][j] == 'Q') { // FIXED: Iterate row-wise
                        current.push_back(j + 1); // Store column index (1-based)
                        break; // Move to next row after finding the queen
                    }
                }
            }
            ansReal.push_back(current);
        }
        
        return ansReal;
    }
};