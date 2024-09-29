
// Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string.
// The two identified subsequences A and B can use the same ith character from string str if and only if that ith character has
// different indices in A and B.
// For example, A = "xax" and B = "xax" then the index of first "x" must be different in the original string for A and B.

// int LongestRepeatingSubsequence(string str){

//     string str1 = str;

//     int n = str.size();

//     vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

//     for(int i = 0; i <= n; i++) dp[i][0] = 0;
//     for(int j = 1; j <= n; j++) dp[0][j] = 0;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(str[i-1] == str1[j-1]  && i != j){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }else{
//                 dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }

//     return dp[n][n];

// }

