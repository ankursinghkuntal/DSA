// // 1.Recursive
// // int RecMatrixMul(int arr[], int i, int j, int mn){
// //     if(i >= j) return 0;
// //     for(int k = i; k < j; k++){
// //         int temp = RecMatrixMul(arr, i, k, mn) + RecMatrixMul(arr, k+1, j, mn) + arr[i-1]*arr[k]*arr[j];
// //         if(temp < mn) mn = temp;
// //     }
// //     return mn;
// // }

// // 2.Memoised
// // int MemoMatrixMul(int arr[], int i, int j, int mn, vector<vector<int>>&dp){
// //     for(int i = 0; i < dp.size(); i++){
// //         for(int j = 0; j < dp[0].size(); j++){
// //             if(i >= j) dp[i][j] = 0;
// //         }
// //     }
// //     if(dp[i][j] != -1) return dp[i][j] = dp[i][j];
// //     for(int k = i; k < j; k++){
// //         int temp = MemoMatrixMul(arr, i, k, mn, dp) + MemoMatrixMul(arr, k+1, j, mn, dp) + (arr[i-1]*arr[k]*arr[j]);
// //         if(temp < mn) mn = temp;
// //     }
// //     return dp[i][j] =  mn;
// // }


// // 3.Tabulation
// int TabMatrixMul(int arr[], int n)
// {
//     vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

//     for (int i = 1; i < n; i++)
//     {
//         dp[i][i] = 0;
//     }

//     for (int gap = 1; gap < n - 1; gap++)
//     {
//         for (int i = 1; i + gap < n; i++)
//         {
//             int j = i + gap;
//             dp[i][j] = INT_MAX;

//             for (int k = i; k < j; k++)
//             {
//                 int cost = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
//                 dp[i][j] = min(dp[i][j], cost);
//             }
//         }
//     }

//     return dp[1][n - 1];
// }

// int matrixMultiplication(int N, int arr[])
// {
//     // 1.
//     // return RecMatrixMul(arr, 1, N-1, INT_MAX);

//     // 2.
//     // vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
//     // return MemoMatrixMul(arr, 1, N-1, INT_MAX, dp);

//     // 3.
//     return TabMatrixMul(arr, N);
// }