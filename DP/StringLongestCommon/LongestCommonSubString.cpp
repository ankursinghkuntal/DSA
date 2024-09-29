    // 1.Recursive Approach (TLE 8)
    
    // int recursive(string s1, string s2, int n, int m, int cnt){
    //     if (n == 0 || m == 0) return cnt;
    
    //     if (s1[n-1] == s2[m-1]) {
    //         cnt = recursive(s1, s2, n-1, m-1, cnt+1);
    //     }
    
    //     return max(cnt, max(recursive(s1, s2, n-1, m, 0), recursive(s1, s2, n, m-1, 0)));
    // }
    
    
    // 2. Memoised Approach
    // int memoised(string s1, string s2, int n, int m, int cnt, vector<vector<int>>&dp){
    //     if (n == 0 || m == 0) return dp[n][m] = cnt;
        
    //     if(dp[n][m] != -1) dp[n][m] = dp[n-1][m];
    
    //     if (s1[n-1] == s2[m-1]) {
    //         cnt = memoised(s1, s2, n-1, m-1, cnt+1, dp);
    //         dp[n][m] = cnt;
    //     }
    
    //     return dp[n][m] =  max(cnt, max(memoised(s1, s2, n-1, m, 0, dp), memoised(s1, s2, n, m-1, 0, dp)));
    // }



// int longestCommonSubstr(string str1, string str2) {
//     int n = str1.size();
//     int m = str2.size();
    
//     // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//     // return memoised(str1, str2, n, m, 0, dp);
    
//     vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//     int cnt = 0;
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (str1[i-1] == str2[j-1]) {
//                 dp[i][j] = dp[i-1][j-1] + 1;
//                 cnt = max(cnt, dp[i][j]);
//             } else {
//                 dp[i][j] = 0;
//             }
//         }
//     }
//     return cnt;
// }