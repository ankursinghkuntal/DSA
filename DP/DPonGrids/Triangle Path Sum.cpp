// Given a triangle array, return the minimum path sum to reach from top to bottom.

// For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, 
// you may move to either index i or index i + 1 on the next row.


    // // 1.Recursion
    // int RecMinimizeSum(int i, int j, int n, vector<vector<int>>& triangle) {
    //     if (i == n - 1) return triangle[n - 1][j];
    //     if (i >= n || j > i) return INT_MAX; // Boundary conditions
    
    //     int d = triangle[i][j] + RecMinimizeSum(i + 1, j, n, triangle);
    //     int dg = triangle[i][j] + RecMinimizeSum(i + 1, j + 1, n, triangle);
    //     return min(d, dg);
    // }

    // // 2.Memoisation
    // int MemoMinimizeSum(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp) {
    //     if (i == n - 1) return triangle[n - 1][j];
    //     if (i >= n || j > i) return INT_MAX; // Boundary conditions
    //     if(dp[i][j] != -1) return dp[i][j];
    //     int d = triangle[i][j] + MemoMinimizeSum(i + 1, j, n, triangle, dp);
    //     int dg = triangle[i][j] + MemoMinimizeSum(i + 1, j + 1, n, triangle, dp);
    //     return dp[i][j] = min(d, dg);
    // }
    
    // // 3.Tabulation
    // int TabMinimizeSum(int n, vector<vector<int>>&triangle){
    //     int p = triangle.size();
    //     vector<vector<int>>dp(p,vector<int>(p,0));
    //     for(int i = n-1; i >= 0; i--){
    //         for(int j = i; j >= 0; j--){
    //             if(i == n-1) dp[n-1][j] = triangle[n-1][j];
    //             else{
    //                 int d = triangle[i][j] + dp[i+1][j];;
    //                 int dg = triangle[i][j] + dp[i+1][j+1];
    //                 dp[i][j] = min(d,dg);
    //             }
    //         }
    //     }
    //     return dp[0][0];
    // }
    
    // // 3.1  space Optimisation
    // int TabMinimizeSum1(int n, vector<vector<int>>&triangle){
    //     int p = triangle.size();
    //     vector<int>ahead(p,0),curr(p,0);
    //     for(int i = n-1; i >= 0; i--){
    //         for(int j = i; j >= 0; j--){
    //             if(i == n-1) curr[j] = triangle[n-1][j];
    //             else{
    //                 int d = triangle[i][j] + ahead[j];;
    //                 int dg = triangle[i][j] + ahead[j+1];
    //                 curr[j] = min(d,dg);
    //             }
    //         }
    //         ahead = curr;
    //     }
    //     return ahead[0];
    // }
    
    // int minimizeSum(int n, vector<vector<int>>& triangle) {
    //     int p = triangle.size();
    //     // 1.
    //     // return RecMinimizeSum(0,0,n,triangle);
    //     // 2.
    //     // vector<vector<int>>dp(p,vector<int>(p,-1));
    //     // return MemoMinimizeSum(0,0,n,triangle,dp);
    //     // 3.
    //     return TabMinimizeSum(n,triangle);
    //     return TabMinimizeSum1(n,triangle);
    // }