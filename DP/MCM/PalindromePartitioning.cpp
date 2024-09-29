    // bool isPalindrome(string &s, int m, int n) {
    //     while (m < n) {
    //         if (s[m] != s[n]) return false;
    //         m++;
    //         n--;
    //     }
    //     return true;
    // }

    // // 1. Recursive
    // int RecMinCut(string &s, int i, int j) {
    //     if (i >= j) return 0;
    //     if (isPalindrome(s, i, j)) return 0;
        
    //     int res = INT_MAX;
    //     for (int k = i; k < j; k++) {
    //         if (isPalindrome(s, i, k)) {
    //             int temp = RecMinCut(s, k + 1, j) + 1;
    //             res = min(res, temp);
    //         }
    //     }
    //     return res;
    // }

    // // 2. Memoized
    // int MemoMinCut(string &s, int i, int j, vector<vector<int>>& dp) {
    //     if (i >= j || isPalindrome(s, i, j)) return 0;
    //     if (dp[i][j] != -1) return dp[i][j];
        
    //     int res = INT_MAX;
    //     for (int k = i; k < j; k++) {
    //         if (isPalindrome(s, i, k)) {
    //             int temp = MemoMinCut(s, k + 1, j, dp) + 1;
    //             res = min(res, temp);
    //         }
    //     }
    //     return dp[i][j] = res;
    // }

    // // 3.
    // int TabMinCut(string &s) {
    //     int n = s.size();
    //     vector<int> dp(n, 0);
    //     vector<vector<bool>> isPal(n, vector<bool>(n, false));

    //     for (int end = 0; end < n; end++) {
    //         for (int start = 0; start <= end; start++) {
    //             if (s[start] == s[end] && (end - start <= 2 || isPal[start + 1][end - 1])) {
    //                 isPal[start][end] = true;
    //             }
    //         }
    //     }

    //     for (int j = 0; j < n; j++) {
    //         if (isPal[0][j]) {
    //             dp[j] = 0;
    //         } else {
    //             dp[j] = j; // Initialize with maximum cuts
    //             for (int i = 1; i <= j; i++) {
    //                 if (isPal[i][j]) {
    //                     dp[j] = min(dp[j], dp[i - 1] + 1);
    //                 }
    //             }
    //         }
    //     }

    //     return dp[n - 1];
    // }

    // // Select which version to use
    // int minCut(string s) {
    //     int n = s.size();

    //     // 1. Recursive approach
    //     return RecMinCut(s, 0, n - 1);

    //     // 2. Memoized approach
    //     // vector<vector<int>> dp(n, vector<int>(n, -1));
    //     // return MemoMinCut(s, 0, n - 1, dp);

    //     // 3.
    //     // return TabMinCut(s);
    // }