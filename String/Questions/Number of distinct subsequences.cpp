class Solution {
  public:
  
    set<string>st;
    int n;
    
    // void subSequence(string &s, int idx, string temp){
        
    //     if(idx == n){
    //         st.insert(temp);
    //         return;
    //     }
        
    //     subSequence(s, idx+1, temp+s[idx]);
    //     subSequence(s, idx+1, temp);
        
    // }
    
    
    const int MOD = 1e9 + 7;

  
    int distinctSubsequences(string s) {
        
        n = s.size();
        
    //     string temp = "";
        
    //     subSequence(s, 0, temp);
        
    //     return st.size();
    
    
    
    
    
    
    
        vector<long long> dp(n + 1, 0);
        vector<int> last(256, -1);

        dp[0] = 1; // base case: empty subsequence

        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % MOD;

            char ch = s[i - 1];
            
            if (last[ch] != -1) {
                dp[i] = (dp[i] - dp[last[ch] - 1] + MOD) % MOD;
            }

            last[ch] = i;
        }

        return dp[n] % MOD;
        
        
    }
};