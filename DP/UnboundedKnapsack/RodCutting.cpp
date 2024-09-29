// Given a rod of length N inches and an array of prices, price[]. price[i] denotes the value of a piece of length i. 
// Determine the maximum value obtainable by cutting up the rod and selling the pieces.

// int cutRod(int price[], int n) {

//     // here length array in not given so
//     int len[n];
//     for(int i = 0; i < n; i++) len[i] = i+1;

//     vector<vector<int>>dp(n+1,vector<int>(n+1,0));

//     // Base Case is if price array is empty or length is zero s0 dp = 0
//     // i = length array, j = length of rod

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j < len[i-1]){
//                 dp[i][j] = dp[i-1][j];
//             }else{
//                 dp[i][j] = max(price[i-1]+dp[i][j-len[i-1]], dp[i-1][j]);
//             }
//         }
//     }
//     return dp[n][n];
// }