class Solution {
  public:
  
    int LPStr(string &s){
        
        int n = s.size();
        
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        int ans = 0;
        
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < n+1; j++){
                
                if(s[i-1] == rev[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                
                if( i-dp[i][j] == n-j){
                    if(dp[i][j]%2 == 0){
                        ans += (dp[i][j])/2;
                    }else{
                        ans += (dp[i][j]+1)/2;
                    }
                }
                
            }
        }
        
        return ans;
    }
  
    int countSubstrings(string s) {
        // code here
        return LPStr(s);
    }
};