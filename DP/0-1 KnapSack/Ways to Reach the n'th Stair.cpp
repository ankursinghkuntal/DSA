class Solution {
  public:
  
    
    int rec(int n){
        if(n == 0) return 1;
        
        if(n >= 2){
            int p1 = rec(n-2);
            int p2 = rec(n-1);
            
            return p1 + p2;
        }else{
            return rec(n-1);
        }
        
    }
    
    
    int memo(int n, vector<int>&dp){
        if(n == 0) return 1;
        if(dp[n] != -1) return dp[n];
        
        if(n >= 2){
            int p1 = memo(n-2, dp);
            int p2 = memo(n-1, dp);
            
            return dp[n] = p1 + p2;
        }else{
            return dp[n] = memo(n-1, dp);
        }
    }
    
    
    
    int countWays(int n) {
        // your code here
        
        
        // return rec(n);
        
        
        vector<int>dp(n+1, -1);
        dp[0] = 0;
        return memo(n, dp);
        
    }
};
