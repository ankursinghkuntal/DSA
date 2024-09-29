// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right,
//  which minimizes the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.


    // #define ll   long long
    // // 1.Recursive
    // ll RecMinPathSum(int n, int m, vector<vector<int>>& grid){
    //     if(n == 0 && m == 0) return grid[0][0];
    //     if(n < 0 || m < 0) return INT_MAX;
    //     ll up = grid[n][m] + RecMinPathSum(n-1,m,grid);
    //     ll left = grid[n][m] + RecMinPathSum(n,m-1,grid);
    //     return min(up,left);
    // }
    // // 2.Memoisation
    // ll MemoMinPathSum(int n, int m, vector<vector<int>>& grid, vector<vector<ll>>& dp){
    //     if(n == 0 && m == 0) return grid[0][0];
    //     if(n < 0 || m < 0) return INT_MAX;
    //     if(dp[n][m] != -1) return dp[n][m];
    //     ll up = grid[n][m] + MemoMinPathSum(n-1,m,grid,dp);
    //     ll left = grid[n][m] + MemoMinPathSum(n,m-1,grid,dp);
    //     return dp[n][m] = min(up,left);
    // }
    // // 3.Tabulation
    // ll TabMinPathSum(int n, int m, vector<vector<int>>& grid){
    //     vector<vector<ll>>dp(n,vector<ll>(m,LLONG_MAX));
    //     for(int i = 0;i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(i == 0 && j == 0) dp[i][j] = grid[i][j];
    //             else{
    //                 ll up = LLONG_MAX, left = LLONG_MAX;
    //                 if(i > 0) up = grid[i][j] + dp[i-1][j];
    //                 if(j > 0) left = grid[i][j] + dp[i][j-1];
    //                 dp[i][j] = min(up,left);
    //             }
    //         }
    //     }
    //     return dp[n-1][m-1];
    // }
    // // 3.1  space Optimisation
    // ll TabMinPathSum1(int n, int m, vector<vector<int>>& grid){
    //     vector<ll>prev(m,LLONG_MAX),curr(m,LLONG_MAX);
    //     for(int i = 0;i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(i == 0 && j == 0) curr[j] = grid[i][j];
    //             else{
    //                 ll up = LLONG_MAX, left = LLONG_MAX;
    //                 if(i > 0) up = grid[i][j] + prev[j];
    //                 if(j > 0) left = grid[i][j] + curr[j-1];
    //                 curr[j] = min(up,left);
    //             }
    //         }
    //         prev = curr;
    //     }
    //     return prev[m-1];
    // }

    // int minPathSum(vector<vector<int>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     // return RecMinPathSum(n-1,m-1,grid);
    //     // vector<vector<ll>>dp(n,vector<ll>(m,-1));
    //     // return MemoMinPathSum(n-1,m-1,grid,dp);
    //     return TabMinPathSum1(n,m,grid);
    // }