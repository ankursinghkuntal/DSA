    // 1.Recursive Solution (TLE)
    // int ans(string str1, string str2, int n, int m){
    //     if(m == 0 || n == 0){
    //         return 0;
    //     }
    //     if(str1[n-1] == str2[m-1]){
    //         return 1+ans(str1,str2,n-1,m-1);
    //     }
    //     else{
    //         return max(ans(str1,str2,n,m-1),ans(str1,str2,n-1,m));
    //     }
    // }


    // 2.memoised DP (TLE 46)
    // int ans(string str1, string str2, int n, int m, vector<vector<int>>&dp){          
    //             if(n == 0 || m == 0) dp[n][m] = 0;
    //             if(dp[n][m] != -1) return dp[n][m];
    //             else{
    //                 if(str1[n-1] == str2[m-1]){
    //                     return dp[n][m] =  1 + ans(str1,str2,n-1,m-1,dp);
    //                 }
    //                 else{
    //                     return dp[n][m] =  max(ans(str1,str2,n-1,m,dp),ans(str1,str2,n,m-1,dp));
    //                 }
    //             }
    //             return dp[n][m];
    // }





    // int longestCommonSubsequence(string text1, string text2) {
    //     ios::sync_with_stdio(false);
    //     cin.tie(nullptr);
    //     cout.tie(nullptr);

        
    //     int n = text1.size();
    //     int m = text2.size();
        
    //     // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    //     // return ans(text1,text2,n,m,dp);

    //     // 3. Tabular (DP)
    //     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    //     for(int i = 0; i <= n; i++) dp[i][0] = 0;
    //     for(int i = 1; i <= m; i++) dp[0][i] = 0;
        
    //     for(int i = 1; i <= n; i++){
    //         for(int j = 1; j <= m; j++){
    //             if(text1[i-1] == text2[j-1]){
    //                 dp[i][j] = 1+dp[i-1][j-1];
    //             }else{
    //                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    //             }
    //         }
    //     }
    //     return dp[n][m];
    // }