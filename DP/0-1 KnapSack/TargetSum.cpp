// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then
// concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.



long long findTargetSumWays(int n, vector<int> &A, int target)
{

    int mod = 1000000007;
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += A[i];

    if ((totalSum - target) < 0 || (totalSum - target) % 2 != 0)
        return 0;

    target = (totalSum - target) / 2;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if (A[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - A[i - 1]]) % mod;
        }
    }

    return dp[n][target] % mod;
}