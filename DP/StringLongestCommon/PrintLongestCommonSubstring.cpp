// Print the longest common substring between the two strings

// string longestCommonSubstring(string &s, string &t) {
//     int n = s.size();
//     int m = t.size();
    
//     vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//     int maxLength = 0;
//     int endIndex = 0;  // To store the end index of the longest common substring
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (s[i-1] == t[j-1]) {
//                 dp[i][j] = dp[i-1][j-1] + 1;
                
//                 if (dp[i][j] > maxLength) {
//                     maxLength = dp[i][j];
//                     endIndex = i;
//                 }
//             }
//         }
//     }
    
//     return s.substr(endIndex - maxLength, maxLength);
// }


