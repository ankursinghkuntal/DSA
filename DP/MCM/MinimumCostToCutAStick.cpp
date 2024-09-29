// // 1.Recursive
// int RecMinCost(vector<int> &arr, int i, int j)
// {
//     if (i > j)
//         return 0;

//     int mn = INT_MAX;
//     for (int k = i; k <= j; k++)
//     {
//         int cost = arr[j + 1] - arr[i - 1] + RecMinCost(arr, i, k - 1) + RecMinCost(arr, k + 1, j);
//         mn = min(cost, mn);
//     }
//     return mn;
// }
// // 2.Memoised
// int MemoMinCost(vector<int> &arr, int i, int j, vector<vector<int>> &dp)
// {
//     if (i > j)
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];

//     int mn = INT_MAX;
//     for (int k = i; k <= j; k++)
//     {
//         int cost = arr[j + 1] - arr[i - 1] + MemoMinCost(arr, i, k - 1, dp) + MemoMinCost(arr, k + 1, j, dp);
//         mn = min(cost, mn);
//     }

//     return dp[i][j] = mn;
// }

// // 3.Tabulation
// int TabMinCost(vector<int> &arr, int n, int m)
// {
//     vector<vector<int>> dp(m + 2, vector<int>(m + 2, 0));

//     for (int i = m; i >= 1; i--)
//     {
//         for (int j = i; j <= m; j++)
//         {
//             int mn = INT_MAX;
//             for (int k = i; k <= j; k++)
//             {
//                 int cost = arr[j + 1] - arr[i - 1] + dp[i][k - 1] + dp[k + 1][j];
//                 mn = min(cost, mn);
//             }
//             dp[i][j] = mn;
//         }
//     }

//     return dp[1][m];
// }

// int minCost(int n, vector<int> &cuts)
// {
//     int m = cuts.size();
//     cuts.push_back(0);
//     cuts.push_back(n);
//     sort(cuts.begin(), cuts.end());
//     // 1.
//     // return RecMinCost(cuts, 1, cuts.size() - 2);
//     // 2.
//     // vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
//     // return MemoMinCost(cuts, 1, cuts.size() - 2, dp);
//     // 3.
//     return TabMinCost(cuts, n, m);
// }