
// Print thre longest common subsequence between two strings

// string longestcommonsubsequence(string str1, string str2) {
//     int n = str1.size();
//     int m = str2.size();
//     vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
//     for (int i = 0; i <= n; i++) dp[i][0] = 0;
//     for (int i = 1; i <= m; i++) dp[0][i] = 0;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (str1[i-1] == str2[j-1]) {
//                 dp[i][j] = 1 + dp[i-1][j-1];
//             } else {
//                 dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }

//     string sub_seq = "";
//     int i = n, j = m;
//     while (i != 0 && j != 0) {
//         if (str1[i-1] == str2[j-1]) {
//             sub_seq += str1[i-1];
//             i--;
//             j--;
//         } else {
//             if (dp[i-1][j] > dp[i][j-1]) i--;
//             else j--;
//         }
//     }

//     reverse(sub_seq.begin(), sub_seq.end());
//     return sub_seq;
// }
