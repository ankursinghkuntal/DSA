//   Declare Global unordered map
    
    // // 2.Memoised
    // int MemoCntWays(string &s, int i, int j, bool isTrue) {
    //     if (i > j) return 0;
    //     if(i == j){
    //         if(isTrue == true){
    //             return s[i] == 'T';
    //         }else{
    //             return s[i] == 'F';
    //         }
    //     }
        
    //     string temp = to_string(i);
    //     temp.push_back(' ');
    //     temp.append(to_string(j));
    //     temp.push_back(' ');
    //     temp.append(to_string(isTrue));
        
    //     if(mp.find(temp) != mp.end) return mp[temp];
    //     else{    
    //     int ans = 0;
    //     for (int k = i + 1; k < j; k += 2) {
    //         int lT = RecCntWays(s, i, k - 1, true);
    //         int rT = RecCntWays(s, k + 1, j, true);
    //         int lF = RecCntWays(s, i, k - 1, false);
    //         int rF = RecCntWays(s, k + 1, j, false);
            
    //         if (s[k] == '&') {
    //             if (isTrue) {
    //                 ans += (lT * rT);
    //             } else {
    //                 ans += (lF * rT + lT * rF + lF * rF);
    //             }
    //         } else if (s[k] == '|') {
    //             if (isTrue) {
    //                 ans += (lT * rT + lT * rF + lF * rT);
    //             } else {
    //                 ans += (lF * rF);
    //             }
    //         } else if (s[k] == '^') {
    //             if (isTrue) {
    //                 ans += (lT * rF + lF * rT);
    //             } else {
    //                 ans += (lT * rT + lF * rF);
    //             }
    //         }
    //     }
    //     return ans;
    //     }
    // }









    // const int mod = 1003;

    // // Recursive function
    // int RecCntWays(string &s, int i, int j, bool isTrue) {
    //     if (i > j) return 0;
    //     if (i == j) {
    //         if (isTrue) {
    //             return s[i] == 'T' ? 1 : 0;
    //         } else {
    //             return s[i] == 'F' ? 1 : 0;
    //         }
    //     }

    //     int ans = 0;
    //     for (int k = i + 1; k <= j - 1; k += 2) {
    //         int lT = RecCntWays(s, i, k - 1, true);
    //         int rT = RecCntWays(s, k + 1, j, true);
    //         int lF = RecCntWays(s, i, k - 1, false);
    //         int rF = RecCntWays(s, k + 1, j, false);

    //         if (s[k] == '&') {
    //             if (isTrue) {
    //                 ans = (ans + (lT * rT) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rT) % mod + (lT * rF) % mod + (lF * rF) % mod) % mod;
    //             }
    //         } else if (s[k] == '|') {
    //             if (isTrue) {
    //                 ans = (ans + (lT * rT) % mod + (lT * rF) % mod + (lF * rT) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rF) % mod) % mod;
    //             }
    //         } else if (s[k] == '^') {
    //             if (isTrue) {
    //                 ans = (ans + (lF * rT) % mod + (lT * rF) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rF) % mod + (lT * rT) % mod) % mod;
    //             }
    //         }
    //     }
    //     return ans;
    // }

    // // Memoized function
    // int MemoCntWays(string &s, int i, int j, bool isTrue, vector<vector<vector<int>>> &dp) {
    //     if (i > j) return 0;
    //     if (i == j) {
    //         if (isTrue) {
    //             return s[i] == 'T' ? 1 : 0;
    //         } else {
    //             return s[i] == 'F' ? 1 : 0;
    //         }
    //     }

    //     if (dp[i][j][isTrue] != -1) return dp[i][j][isTrue];

    //     int ans = 0;
    //     for (int k = i + 1; k <= j - 1; k += 2) {
    //         int lT = MemoCntWays(s, i, k - 1, true, dp);
    //         int lF = MemoCntWays(s, i, k - 1, false, dp);
    //         int rT = MemoCntWays(s, k + 1, j, true, dp);
    //         int rF = MemoCntWays(s, k + 1, j, false, dp);

    //         if (s[k] == '&') {
    //             if (isTrue) {
    //                 ans = (ans + (lT * rT) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rT) % mod + (lT * rF) % mod + (lF * rF) % mod) % mod;
    //             }
    //         } else if (s[k] == '|') {
    //             if (isTrue) {
    //                 ans = (ans + (lT * rT) % mod + (lT * rF) % mod + (lF * rT) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rF) % mod) % mod;
    //             }
    //         } else {  // XOR operator
    //             if (isTrue) {
    //                 ans = (ans + (lF * rT) % mod + (lT * rF) % mod) % mod;
    //             } else {
    //                 ans = (ans + (lF * rF) % mod + (lT * rT) % mod) % mod;
    //             }
    //         }
    //     }
    //     return dp[i][j][isTrue] = ans;
    // }

    // // Dynamic programming function
    // int evaluateExp(string &exp) {
    //     int n = exp.size();
    //     vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));

    //     for (int i = n - 1; i >= 0; i--) {
    //         for (int j = 0; j < n; j++) {
    //             if (i > j) continue;

    //             for (int isTrue = 0; isTrue <= 1; isTrue++) {
    //                 if (i == j) {
    //                     if (isTrue) {
    //                         dp[i][j][isTrue] = (exp[i] == 'T') ? 1 : 0;
    //                     } else {
    //                         dp[i][j][isTrue] = (exp[i] == 'F') ? 1 : 0;
    //                     }
    //                     continue;
    //                 }

    //                 int ans = 0;
    //                 for (int k = i + 1; k <= j - 1; k += 2) {
    //                     int lT = dp[i][k - 1][1];
    //                     int lF = dp[i][k - 1][0];
    //                     int rT = dp[k + 1][j][1];
    //                     int rF = dp[k + 1][j][0];

    //                     if (exp[k] == '&') {
    //                         if (isTrue) {
    //                             ans = (ans + (lT * rT) % mod) % mod;
    //                         } else {
    //                             ans = (ans + (lF * rT) % mod + (lT * rF) % mod + (lF * rF) % mod) % mod;
    //                         }
    //                     } else if (exp[k] == '|') {
    //                         if (isTrue) {
    //                             ans = (ans + (lT * rT) % mod + (lT * rF) % mod + (lF * rT) % mod) % mod;
    //                         } else {
    //                             ans = (ans + (lF * rF) % mod) % mod;
    //                         }
    //                     } else {  // XOR operator
    //                         if (isTrue) {
    //                             ans = (ans + (lF * rT) % mod + (lT * rF) % mod) % mod;
    //                         } else {
    //                             ans = (ans + (lF * rF) % mod + (lT * rT) % mod) % mod;
    //                         }
    //                     }
    //                 }
    //                 dp[i][j][isTrue] = ans;
    //             }
    //         }
    //     }
    //     return dp[0][n - 1][1];
    // }

    // int countWays(int n, string s) {
    //     // vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n, vector<ll>(2, -1)));

    
    //     return evaluateExp(s);
    // }