    // int mod = 1000000007;
  
    // // 1.Recursion
    // int Recfib(int n){
    //     if(n < 2) return n;
    //     return (Recfib(n-1)%mod + Recfib(n-2)%mod)%mod;
    // }

    // // 2.Memoised
    // int Memofib(int n, vector<int> &dp) {
    //     if (n < 2) return n;
    //     if (dp[n] != -1) return dp[n];
    //     return dp[n] = (Memofib(n - 1, dp)%mod + Memofib(n - 2, dp)%mod)%mod;
    // }
    
    // // 3.Tabulation
    // int Tabfib(int n) {
    //     if (n == 0) return 0;
    //     if (n == 1) return 1;
    
    //     vector<int> dp(n + 1, 0);
    //     dp[0] = 0;
    //     dp[1] = 1;
    
    //     for (int i = 2; i <= n; i++) {
    //         dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod) % mod;
    //     }
    
    //     return dp[n];
    // }

  
    // int nthFibonacci(int n){
    //     // 1.
    //     // return Recfib(n);
    //     // 2.
    //     // vector<int>dp(n+1,-1);
    //     // return Memofib(n, dp);
    //     // 3.
    //     Tabfib(n);
    // }