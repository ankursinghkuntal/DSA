// class Solution {
//   public:
//     // Function to find a solved Sudoku.
    
//     bool isValid(vector<vector<int>>& mat, int row, int col, int val){
//         for(int i = 0; i < 9; i++){
//             if(mat[i][col] == val) return false;
//             if(mat[row][i] == val) return false;
//             if(mat[(row/3)*3 + i/3][(col/3)*3 + i%3] == val) return false;
//         } 
//         return true;
//     }
    
//     bool solve(vector<vector<int>>& mat){
//         int n = mat.size();
//         int m = mat[0].size();
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(mat[i][j] == 0){
//                     for(int val = 1; val <= 9; val++){
                        
//                         if(isValid(mat, i, j, val)){
//                             mat[i][j] = val;
                            
//                             if(solve(mat)) return true;
//                             else mat[i][j] = 0;
                            
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
        
//         return true;
//     }
    
//     void solveSudoku(vector<vector<int>> &mat) {
//         solve(mat);
//     }
    
// };