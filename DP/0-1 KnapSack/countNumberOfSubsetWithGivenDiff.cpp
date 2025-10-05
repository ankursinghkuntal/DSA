int countPartitions(int n, int d, vector<int>& arr) {
    
    int mod = 1000000007;
    int totalSum = 0;
    for (int i = 0; i < n; i++) totalSum += arr[i];
    
    if ((totalSum - d) < 0 || (totalSum - d) % 2 != 0) return 0;

    int target = (totalSum - d) / 2;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    
    for (int i = 0; i <= n; i++) dp[i][0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            if (arr[i - 1] > j) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - arr[i - 1]])%mod;
        }
    }
    
    return dp[n][target] % mod;
}