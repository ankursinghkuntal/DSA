// =>=> for O(n) braek it into parts of 3-3 and get maximum product  <=<=//




// TC = O(n^2)


class Solution {
  public:
  
    int rec(int n, int sum){
        
        if(n == 0){
            return (sum == 0) ? 1 : 0;
        }
        
        if(sum >= n){
            int p1 = n*(rec(n, sum-n));
            int p2 = rec(n-1, sum);
            
            return max(p1, p2);
        }else{
            return rec(n-1, sum);
        }
        
    }
    
    
    int memo(int n, int sum, vector<vector<int>>&dp){
        
        if(n == 0){
            return (sum == 0) ? 1 : 0;
        }
        
        if(dp[n][sum] != 0) return dp[n][sum];
        
        if(sum >= n){
            int p1 = n*(memo(n, sum-n, dp));
            int p2 = memo(n-1, sum, dp);
            
            return dp[n][sum] = max(p1, p2);
        }else{
            return memo(n-1, sum, dp);
        }
        
    }
    
    
    int tab(int n, int sum){
        vector<vector<int>>dp(n+1, vector<int>(sum+1, 0));
        
        for(int i = 0; i < n+1; i++) dp[i][0] = 1;
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < sum+1; j++){
                
                if(j >= i){
                    dp[i][j] = max(i*dp[i][j-i], dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
                
            }
        }
        
        return dp[n][sum];
    }
    
  
    int maxProduct(int n) {
        // code here
        
        if(n == 2 || n == 3) return n-1;
        
        // 1.
        // return rec(n, n);
        
        // 2.
        // vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        // for(int i = 0; i < n+1; i++) dp[i][0] = 1;
        // return memo(n, n, dp);
        
        
        // 3.
        return tab(n, n);
    }
};