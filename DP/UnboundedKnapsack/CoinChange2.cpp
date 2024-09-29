
// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins,
//  return -1.
// You may assume that you have an infinite number of each kind of coin.


// int coinChange(vector<int>& coins, int amount) {
//     int n = coins.size();
//     vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
//     for(int i = 0; i <= n; i++) dp[i][0] = 0;
//     for(int j = 0; j <= amount; j++) dp[0][j] = INT_MAX-1;

//     for(int j = 1; j <= amount; j++){
//         if(j%coins[0] == 0) dp[1][j] = j/coins[0];
//         else dp[1][j] = INT_MAX-1;
//     }

//     for(int i = 2; i <= n; i++){
//         for(int j = 1; j <= amount; j++){
//             if(coins[i-1] > j){
//                 dp[i][j] = dp[i-1][j];
//             }else{
//                 dp[i][j] = min(dp[i-1][j] , 1+dp[i][j-coins[i-1]]);
//             }
//         }
//     }
//     return dp[n][amount] == INT_MAX - 1 ? -1 : dp[n][amount];
// }