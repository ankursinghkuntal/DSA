
//=================================================== Print the common SuperSeq=================================================


// string shortestCommonSupersequence(string str1, string str2) {
//     int n = str1.size();
//     int m = str2.size();
    
//     vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
//     for (int i = 0; i <= n; i++) dp[i][0] = 0;
//     for (int j = 0; j <= m; j++) dp[0][j] = 0;
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (str1[i-1] == str2[j-1]) {
//                 dp[i][j] = 1 + dp[i-1][j-1];
//             } else {
//                 dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }

//     string super_seq = "";
//     int i = n, j = m;
    
//     while (i > 0 || j > 0) {
//         if (i > 0 && j > 0 && str1[i-1] == str2[j-1]) {
//             super_seq += str1[i-1];
//             i--;
//             j--;
//         } else if (i > 0 && (j == 0 || dp[i-1][j] >= dp[i][j-1])) {
//             super_seq += str1[i-1];
//             i--;
//         } else if (j > 0) {
//             super_seq += str2[j-1];
//             j--;
//         }
//     }
    
//     reverse(super_seq.begin(), super_seq.end());
//     return super_seq;
// }