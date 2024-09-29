    
// Given a n x n matrix of positive integers. There are only three possible moves from a cell mat[r][c].

// mat[r+1] [c]
// mat[r+1] [c-1]
// mat [r+1] [c+1]
// Starting from any column in row 0 return the largest sum of any of the paths up to row n -1. Return the highest maximum path sum.

// Note : We can start from any column in zeroth row and can end at any column in (n-1)th row.
    
    
    // int mini = -1e8;
    // // 1.Recursive
    // int RecMaxPath(int i, int j, vector<vector<int>>& Matrix){
    //     if(j < 0 || j >= Matrix[0].size()) return mini;
    //     if(i == 0) return Matrix[0][j];
        
    //     int u = Matrix[i][j] + RecMaxPath(i-1,j,Matrix);
    //     int rd = Matrix[i][j] + RecMaxPath(i-1,j+1,Matrix);
    //     int ld = Matrix[i][j] + RecMaxPath(i-1,j-1,Matrix);
        
    //     return max(u,max(ld,rd));
    // }
    // // 2.Memoisation
    // int MemoMaxPath(int i, int j, vector<vector<int>>& Matrix,vector<vector<int>>& dp){
    //     if(j < 0 || j > Matrix[0].size()) return mini;
    //     if(i == 0) return Matrix[0][j];
    //     if(dp[i][j] != -1) return dp[i][j];
    //     int u = Matrix[i][j] + MemoMaxPath(i-1,j,Matrix,dp);
    //     int rd = Matrix[i][j] + MemoMaxPath(i-1,j+1,Matrix,dp);
    //     int ld = Matrix[i][j] + MemoMaxPath(i-1,j-1,Matrix,dp);
        
    //     return max(u,max(ld,rd));
    // }
    // // 3.Tabulation
    // int TabMaxPath(vector<vector<int>>& Matrix) {
    //     int n = Matrix.size();
    //     int m = Matrix[0].size();
    //     vector<vector<int>> dp(n, vector<int>(m, mini));
    
    //     for (int j = 0; j < m; j++) dp[0][j] = Matrix[0][j];
    
    //     for (int i = 1; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             int u = Matrix[i][j] + dp[i-1][j];
    //             int ld = 0, rd = 0;
    //             if (j < m-1) rd = Matrix[i][j] + dp[i-1][j+1];
    //             if (j > 0) ld = Matrix[i][j] + dp[i-1][j-1];
    //             dp[i][j] = max(u, max(ld, rd));
    //         }
    //     }
    
    //     int mx = mini;
    //     for (int j = 0; j < m; j++) {
    //         mx = max(mx, dp[n-1][j]);
    //     }
    
    //     return mx;
    // }
    // // 3.1
    // int TabMaxPath1(vector<vector<int>>& Matrix) {
    //     int n = Matrix.size();
    //     int m = Matrix[0].size();
    //     vector<int>prev(m, mini), curr(m, mini);
    
    //     for (int j = 0; j < m; j++) prev[j] = Matrix[0][j];
    
    //     for (int i = 1; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             int u = Matrix[i][j] + prev[j];
    //             int ld = 0, rd = 0;
    //             if (j < m-1) rd = Matrix[i][j] + prev[j+1];
    //             if (j > 0) ld = Matrix[i][j] + prev[j-1];
    //             curr[j] = max(u, max(ld, rd));
    //         }
    //         prev = curr;
    //     }
    
    //     int mx = mini;
    //     for (int j = 0; j < m; j++) {
    //         mx = max(mx, prev[j]);
    //     }
    
    //     return mx;
    // }

    // int maximumPath(int N, vector<vector<int>> Matrix)
    // {
    //     // int mx = -1e8;
    //     // for(int j = 0; j < N; j++){
    //     //     // 1.
    //     //     // mx = max(mx,RecMaxPath(N-1, j, Matrix));
    //     //     // 2.
    //     //     vector<vector<int>>dp(N,vector<int>(Matrix[0].size(),-1));
    //     //     mx = max(mx,MemoMaxPath(N-1, j, Matrix,dp));
    //     // }
    //     // return mx;
    //     // 3.
    //     // return TabMaxPath(Matrix);
    //     return TabMaxPath1(Matrix);
    // }