//Back-end complete function Template for C++

class Solution {
  public:
  
    int rec(int n, vector<int>& cost){
        if(n == 0 || n == 1) return cost[n];
        
        return cost[n] + min(rec(n-1, cost), rec(n-2, cost));
        
    }
    
    
    int memo(int n, vector<int>& cost, vector<int>& dp){
        if(n == 0 || n == 1) return cost[n];
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = cost[n] + min( memo(n-1, cost, dp), memo(n-2, cost, dp) );
    }
    
    
    int tab(vector<int> &cost){
        int n = cost.size();
        
        vector<int>dp(n);
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < n; i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        
        return min(dp[n-1], dp[n-2]);
    }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        
        int n = cost.size();
        
        if(n == 1) return cost[0];
        
        
        // 1.
        
        // return min(rec(n-1, cost), rec(n-2, cost));
        
        
        // 2.
        
        // vector<int>dp1(n, -1);
        // vector<int>dp2(n, -1);
        
        // return min( memo(n-1, cost, dp1), memo(n-2, cost, dp2) );
        
        
        // 3.
        
        return tab(cost);    
    }
};