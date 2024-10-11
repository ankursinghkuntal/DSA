// with obstacles


// You are given a matrix grid of n x  m size consisting of values 0 and 1. A value of 1 means that you can enter that cell and 0 
// implies that entry to that cell is not allowed.

// You start at the upper-left corner of the grid (1, 1) and you have to reach the bottom-right corner (n, m) such that you can 
// only move in the right or down direction from every cell.

// Your task is to calculate the total number of ways of reaching the target modulo (109+7).
// Note: The first (1, 1) and last cell (n, m) of the grid can also be 0


//    int mod = 1000000007;
   
//     // 1.Recursion
//     int RecuniquePaths(int i, int j, vector<vector<int>> &grid) {
//         if (i >= 0 && j >= 0 && grid[i][j] == 0) return 0;
//         if (i == 0 && j == 0) return 1;
//         if (i < 0 || j < 0) return 0;
//         int up = RecuniquePaths(i - 1, j, grid) % mod;
//         int left = RecuniquePaths(i, j - 1, grid) % mod;
//         return (up + left) % mod;
//     }

//     // 2.Memoisation
//     int MemouniquePaths(int i, int j, vector<vector<int>> &grid, vector<vector<int>>&dp){
//         if (i >= 0 && j >= 0 && grid[i][j] == 0) return 0;
//         if(i == 0 && j == 0) return 1;
//         if(i < 0 || j < 0) return 0;
//         if(dp[i][j] != -1) return dp[i][j];
//         int up = MemouniquePaths(i-1,j,grid,dp)%mod;
//         int left = MemouniquePaths(i,j-1,grid,dp)%mod;
//         return dp[i][j] = (up + left)%mod;
//     }
    
//     // 3.Tabulation
//     int TabuniquePaths(int n, int m, vector<vector<int>> &grid){
//         vector<vector<int>>dp(n,vector<int>(m,0));
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if (i >= 0 && j >= 0 && grid[i][j] == 0) dp[i][j] = 0;
//                 else if(i == 0 && j == 0) dp[i][j] = 1;
//                 else{
//                     int up = 0, left = 0;
//                     if(i > 0) up = dp[i-1][j]%mod;
//                     if(j > 0) left = dp[i][j-1]%mod;
//                     dp[i][j] = (up + left)%mod;
//                 }
//             }
//         }
//         return dp[n-1][m-1];
//     }
//     // 3.1Space Optimisation
//     int TabuniquePaths1(int n, int m, vector<vector<int>> &grid) {
//         vector<int> prev(m, 0), curr(m, 0);
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 0) curr[j] = 0;
//                 else if (i == 0 && j == 0) curr[j] = 1;
//                 else {
//                     int up = 0, left = 0;
//                     if (i > 0) up = prev[j];
//                     if (j > 0) left = curr[j-1];
//                     curr[j] = (up + left) % mod;
//                 }
//             }
//             prev = curr;
//         }
//         return prev[m-1];
//     }


//     int uniquePaths(int n, int m, vector<vector<int>> &grid) {
//         // 1.
//         // return RecuniquePaths(n-1,m-1,grid);
//         // 2.
//         // vector<vector<int>>dp(n,vector<int>(m,-1));
//         // return MemouniquePaths(n-1,m-1,grid,dp);
//         // 3.
//         // return TabuniquePaths(n,m,grid);
//         return TabuniquePaths1(n,m,grid);
//     }