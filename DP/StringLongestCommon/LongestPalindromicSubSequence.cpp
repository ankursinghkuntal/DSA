// ==========================================longest Palindromic subsequence in a string===============================================

// int longestPalinSubseq(string A)
// {
//     string s2 = A;
//     reverse(s2.begin(), s2.end());
//     int n = A.size();
//     int m = s2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//     for (int i = 0; i <= n; i++)
//         dp[i][0] = 0;
//     for (int i = 1; i <= m; i++)
//         dp[0][i] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (A[i - 1] == s2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     string sub_seq = "";
//     int i = n, j = m;
//     while (i != 0 && j != 0)
//     {
//         if (A[i - 1] == s2[j - 1])
//         {
//             sub_seq += s[i - 1];
//             i--;
//             j--;
//         }
//         else
//         {
//             if (dp[i - 1][j] > dp[i][j - 1])
//                 i--;
//             else
//                 j--;
//         }
//     }

//     reverse(sub_seq.begin(), sub_seq.end());
//     return sub_seq.length();
// }