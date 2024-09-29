
// Given an integer array coins[ ] of size N representing different denominations of currency and an integer sum,
// find the number of ways you can make sum by using different combinations from coins[ ].
// Note: Assume that you have an infinite supply of each type of coin. And you can use any coin as many times as you want.

// ===================================================COUNT NUMBER OF WAYS==============================================================


// Base cases : if sum = 0  ways 1          n == 0   ways = 0

// long long int count(int coins[], int N, int sum) {

//     vector<vector<long long int>>dp(N+1,vector<long long int>(sum+1,0));
//     for(int i = 0; i <= N; i++) dp[i][0] = 1;

//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= sum; j++){
//             if(coins[i-1] > j){
//                 dp[i][j] = dp[i-1][j];
//             }else{
//                 dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
//             }
//         }
//     }
//     return dp[N][sum];
// }



// 2.Recursive
    // int countways(vector<int>&coins,int n, int sum){
    //     if(sum == 0) return 1;
    //     if(n == 0) return 0;

    //     if(sum >= coins[n-1]) return countways(coins,n,sum-coins[n-1]) + countways(coins, n - 1, sum);
    //     else{
    //         return countways(coins,n-1,sum);
    //     }
    // }