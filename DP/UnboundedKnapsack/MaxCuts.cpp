    // // 1.Recursive
    // // int RecMaxCuts(int sum, int a, int b, int c){
    // //     if(sum < 0) return -1;
    // //     if(sum == 0) return 0;
    // //     int res = max({
    // //         RecMaxCuts(sum-a,a,b,c),
    // //         RecMaxCuts(sum-b,a,b,c),
    // //         RecMaxCuts(sum-c,a,b,c)
    // //     });
    // //     if(res == -1) return res;
    // //     else return res + 1;
    // // }
    
    // // 2.Tabulation
    // int TabMaxCuts(int sum, int a, int b, int c){
    //     vector<int>dp(sum+1,-1);
    //     dp[0] = 0;
    //     for(int i = 1; i <= sum; i++){
    //         if(a <= i) dp[i] = max(dp[i],dp[i-a]);
    //         if(b <= i) dp[i] = max(dp[i],dp[i-b]);
    //         if(c <= i) dp[i] = max(dp[i],dp[i-c]);
    //         if(dp[i] != -1) dp[i]++;
    //     }
    //     return dp[sum] == -1 ? 0 : dp[sum];
    // }
    
    // int maximizeTheCuts(int n, int x, int y, int z)
    // {
    //     // 1.
    //     // return RecMaxCuts(n,x,y,z);
    //     // 2.
    //     return TabMaxCuts(n,x,y,z);
    // }