    // // 1.Recursion
    // int RecEggDrop(int e, int f) {
    //     if (f == 0 || f == 1) return f;
    //     if (e == 1) return f;
    //     int mn = INT_MAX;
    //     for (int k = 1; k <= f; k++) {
    //         int temp = 1 + max(RecEggDrop(e - 1, k - 1), RecEggDrop(e, f - k));
    //         mn = min(mn, temp);
    //     }
    //     return mn;
    // }
    
    // // Memoized version
    // // 2.1
    // // int MemoEggDrop(int e, int f, vector<vector<int>>& dp) {
    // //     if (f == 0 || f == 1) return f;
    // //     if (e == 1) return f;
    // //     if (dp[e][f] != -1) return dp[e][f];
    // //     int mn = INT_MAX;
    // //     for (int k = 1; k <= f; k++) {
    // //         int temp = 1 + max(MemoEggDrop(e - 1, k - 1, dp), MemoEggDrop(e, f - k, dp));
    // //         mn = min(mn, temp);
    // //     }
    // //     return dp[e][f] = mn;
    // // }

    // // 2.2
    // int MemoEggDrop(int e, int f, vector<vector<int>>& dp) {
    //     if (f == 0 || f == 1) return f;
    //     if (e == 1) return f;
        
    //     if (dp[e][f] != -1) return dp[e][f];
    
    //     int mn = INT_MAX;
    
    //     for (int k = 1; k <= f; k++) {
    //         int low, high;
    
    //         if (dp[e - 1][k - 1] != -1) {
    //             low = dp[e - 1][k - 1];
    //         } else {
    //             low = MemoEggDrop(e - 1, k - 1, dp);
    //         }
    
    //         if (dp[e][f - k] != -1) {
    //             high = dp[e][f - k];
    //         } else {
    //             high = MemoEggDrop(e, f - k, dp);
    //         }
    
    //         int temp = 1 + max(low, high);
    //         mn = min(mn, temp);
    //     }
    
    //     return dp[e][f] = mn;
    // }

    // int eggDrop(int n, int k) 
    // {
    //     // 1.
    //     // return RecEggDrop(n,k);
    //     // 2.
    //     vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    //     return MemoEggDrop(n,k,dp);

    // }
    

// 2.3
//     int MemoEggDrop(int e, int f, vector<vector<int>>& dp) {
//     if (f == 0 || f == 1) return f;
//     if (e == 1) return f;
    
//     if (dp[e][f] != -1) return dp[e][f];
    
//     int mn = INT_MAX;
//     int low = 1, high = f;

//     while (low <= high) {
//         int mid = (high + low) / 2;
//         int breakCase = MemoEggDrop(e - 1, mid - 1, dp);
//         int noBreakCase = MemoEggDrop(e, f - mid, dp);
//         int temp = 1 + max(breakCase, noBreakCase);
//         mn = min(mn, temp);
        
//         if (breakCase > noBreakCase) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
    
//     return dp[e][f] = mn;
// }






// Less effective then Memo

// // Dynamic Programming Solution
// int DP_EggDrop(int e, int f) {
//     vector<vector<int>> dp(e + 1, vector<int>(f + 1, 0));

//     for (int i = 1; i <= e; i++) {
//         dp[i][0] = 0; // 0 floors
//         dp[i][1] = 1; // 1 floor
//     }

//     for (int j = 1; j <= f; j++) {
//         dp[1][j] = j; // 1 egg, j floors
//     }

//     for (int i = 2; i <= e; i++) {
//         for (int j = 2; j <= f; j++) {
//             dp[i][j] = INT_MAX;
//             for (int k = 1; k <= j; k++) {
//                 int res = 1 + max(dp[i - 1][k - 1], dp[i][j - k]);
//                 if (res < dp[i][j]) {
//                     dp[i][j] = res;
//                 }
//             }
//         }
//     }

//     return dp[e][f];
// }