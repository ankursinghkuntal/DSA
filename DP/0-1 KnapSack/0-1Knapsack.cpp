
// You are given weights and values of items, and put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 
// Note that we have only one quantity of each item.
// In other words, given two integer arrays val and wt which represent values and weights associated with items respectively. 
// Also given an integer W which represents knapsack capacity, find out the maximum sum values subset of val[] such that the 
// sum of the weights of the corresponding subset is smaller than or equal to W. You cannot break an item, either pick the 
// complete item or don't pick it (0-1 property).


#include <bits/stdc++.h>
using namespace std;

// 1.Recursive
int maxProfit(int val[], int wt[], int W, int n) {
    if (n == 0 || W == 0) 
        return 0;
    
    if (wt[n-1] <= W) {
        return max(maxProfit(val, wt, W, n-1), val[n-1] + maxProfit(val, wt, W-wt[n-1], n-1));
    } else {
        return maxProfit(val, wt, W, n-1);
    }
}
// 2.Memoised
int maxProfit(int val[], int wt[], int W, int n, vector<vector<int>>dp) {
    for(int i = 0; i <= n; i++) dp[i][0] = 0;
    for(int j = 1; j <= W; j++) dp[0][j] = 0;
    
    if (wt[n-1] <= W) {
        return dp[n][W] = max(maxProfit(val, wt, W, n-1), val[n-1] + maxProfit(val, wt, W-wt[n-1], n-1));
    } else {
        return dp[n][W] = maxProfit(val, wt, W, n-1);
    }
}

// 3.Tabulation
int maxProfitTab(int val[], int wt[], int W, int n) {
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i-1] <= j) {
                dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j-wt[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    return dp[n][W];
}

int main() {
    int W = 4;
    int n = 3;
    int wt[3] = {4, 5, 1};
    int val[3] = {1, 2, 3};
    // 1.  
    cout << "Maximum Profit: " << maxProfit(val, wt, W, n) << endl;
    
    // 2.
    vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
    cout << "Maximum Profit: " << maxProfit(val, wt, W, n, dp) << endl;

    // 3.
    cout << "Maximum Profit: " << maxProfitTab(val, wt, W, n) << endl;

    return 0;
}
