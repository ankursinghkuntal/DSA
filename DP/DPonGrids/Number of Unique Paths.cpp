    
    
// Given a A X B matrix with your initial position at the top-left cell, find the number of possible unique paths to 
// reach the bottom-right cell of the matrix from the initial position.

// Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] 
// or matrix[i][j+1] from matrix[i][j] 
    
    
    // // 1.Recursion
    // int RecNumUniquePaths(int i, int j){
    //     if(i == 0 && j == 0) return 1;
    //     if(i < 0 || j < 0) return 0;
    //     int up = RecNumUniquePaths(i-1,j);
    //     int left = RecNumUniquePaths(i,j-1);
    //     return up + left;
    // }
    // // 2.Memoisation
    // int MemoNumUniquePaths(int i, int j, vector<vector<int>>&dp){
    //     if(i == 0 && j == 0) return 1;
    //     if(i < 0 || j < 0) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
    //     int up = MemoNumUniquePaths(i-1,j,dp);
    //     int left = MemoNumUniquePaths(i,j-1,dp);
    //     return dp[i][j] = up + left;
    // }
    
    // // 3.Tabulation
    // int TabNumUniquePaths(int n, int m){
    //     vector<vector<int>>dp(n,vector<int>(m,0));
        
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(i == 0 && j == 0) dp[i][j] = 1;
    //             else{
    //                 int up = 0, left = 0;
    //                 if(i > 0) up = dp[i-1][j];
    //                 if(j > 0) left = dp[i][j-1];
    //                 dp[i][j] = up + left;
    //             }
    //         }
    //     }
    //     return dp[n-1][m-1];
    // }
    // // 3.1Space Optimisation
    // int TabNumUniquePaths1(int n, int m){
    //     vector<int>prev(m,0),curr(m,0);
        
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(i == 0 && j == 0) curr[j] = 1;
    //             else{
    //                 int up = 0, left = 0;
    //                 if(i > 0) up = prev[j];
    //                 if(j > 0) left = curr[j-1];
    //                 curr[j] = up + left;
    //             }
    //         }
    //         prev = curr;
    //     }
    //     return prev[m-1];
    // }
    
    
    // int NumberOfPath(int a, int b)
    // {
    //     // 1.
    //     // RecNumUniquePaths(a-1,b-1);
    //     // 2.
    //     // vector<vector<int>>dp(a,vector<int>(b,-1));
    //     // return MemoNumUniquePaths(a-1,b-1,dp);
    //     // 3.
    //     return TabNumUniquePaths(a,b);
    //     return TabNumUniquePaths1(a,b);
    // }