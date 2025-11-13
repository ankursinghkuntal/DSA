// Print the longest common substring between the two strings

string longestCommonSubstring(string &s, string &t) {
    int n = s.size();
    int m = t.size();
    
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    int maxLength = 0;
    int endIndex = 0;  // To store the end index of the longest common substring
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i;
                }
            }
        }
    }
    
    return s.substr(endIndex - maxLength, maxLength);
}





int tab(string &s1, string &s2, int n, int m){

    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

    int res = 0;
    int idx = -1;

    for(int i = 0; i < n+1; i++) dp[i][0] = 0;
    for(int j = 0; j < m+1; j++) dp[0][j] = 0;

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){

            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];

                if(res < dp[i][j]){
                    res = max(res, dp[i][j]);
                    idx = i;
                }
            }else{
                dp[i][j] = 0;
            }

        }
    }
    cout << s1.substr(idx-res, res) << endl;
    return res;
}

int lcs(string &str1, string &str2){
    // Write your code here.
    int n = str1.size();
    int m = str2.size();

    return tab(str1, str2, n, m);
    
}


