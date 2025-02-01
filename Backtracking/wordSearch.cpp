// class Solution {
//   public:
  
//     bool isValid(int nr, int nc, int n, int m){
//         return nr >= 0 && nr < n && nc >= 0 && nc < m;
//     }
  
//     bool find(vector<vector<char>>& mat, vector<vector<bool>>& vis, string& word, int row, int col, int idx) {
//         if (idx == word.length()) return true; // Base case: If all characters are matched
        
//         if (!isValid(row, col, mat.size(), mat[0].size()) || vis[row][col] || mat[row][col] != word[idx]) {
//             return false;
//         }
        
//         vis[row][col] = true; // Mark as visited
        
//         vector<int> delRow = {-1, 0, 0, 1};
//         vector<int> delCol = {0, -1, 1, 0};
        
//         for (int i = 0; i < 4; i++) {
//             int nr = row + delRow[i];
//             int nc = col + delCol[i];
            
//             if (find(mat, vis, word, nr, nc, idx + 1)) {
//                 return true;
//             }
//         }
        
//         vis[row][col] = false; // Backtrack
        
//         return false;
//     }
  
//     bool isWordExist(vector<vector<char>>& mat, string word) {
//         int n = mat.size();
//         int m = mat[0].size();
        
//         vector<vector<bool>> vis(n, vector<bool>(m, false));
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (mat[i][j] == word[0]) { // Start DFS from matching first letter
//                     if (find(mat, vis, word, i, j, 0)) return true;
//                 }
//             }
//         }
        
//         return false;
//     }
// };
