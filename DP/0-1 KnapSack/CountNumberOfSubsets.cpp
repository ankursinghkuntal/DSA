class Solution {
  public:
    
    
    int rec(vector<int>&arr, int sum, int n){
        
        // if(sum == 0) return 1;
        if(n == 0) {
            return (sum == 0 ? 1 : 0);
        }

        
        if(sum >= arr[n-1]){
            int p1 = rec(arr, sum-arr[n-1], n-1);
            int p2 = rec(arr, sum, n-1);
            return p1+p2;
        } else {
            return rec(arr, sum, n-1);
        }

    }
    
    int memo(vector<int>&arr, int sum, int n, vector<vector<int>>& dp){
        
        if(n == 0){
            return (sum == 0 ? 1 : 0);
        }
        
        if(dp[sum][n] != -1) return dp[sum][n];
        
        if(sum >= arr[n-1]){
            int p1 = memo(arr, sum-arr[n-1], n-1, dp);
            int p2 = memo(arr, sum, n-1, dp);
            
            return dp[sum][n] =  p1 + p2;
        }else{
            return memo(arr, sum, n-1, dp);
        }
    }
  
    int perfectSum(vector<int>& arr, int target) {
        // code here
        
        int n = arr.size();
        // return rec(arr, target, n);
        
        vector<vector<int>>dp(target+1, vector<int>(n+1, -1));
        return memo(arr, target, n, dp);
        
    }
};








#include <bits/stdc++.h>
using namespace std;

int CntWays(vector<int>& arr, int n, int sum) {
    if (sum == 0) return 1;
    if (n == 0) return 0;

    if (arr[n-1] > sum) return CntWays(arr, n-1, sum);
    else {
        return CntWays(arr, n-1, sum) + CntWays(arr, n-1, sum-arr[n-1]);
    }
}

int CntWaysMemo(vector<int>& arr, int n, int sum, vector<vector<int>>& dp) {
    if (sum == 0) return 1;
    if (n == 0) return 0;

    if (dp[n][sum] != -1) return dp[n][sum];

    if (arr[n-1] > sum) return dp[n][sum] = CntWaysMemo(arr, n-1, sum, dp);
    else {
        return dp[n][sum] = CntWaysMemo(arr, n-1, sum, dp) + CntWaysMemo(arr, n-1, sum-arr[n-1], dp);
    }
}

int CntWaysTabular(vector<int>& arr, int n, int sum, vector<vector<int>>& dp) {
    for (int i = 0; i <= n; i++) dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j < arr[i-1]) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];     
}

int main() {
    vector<int> arr = {5, 2, 3, 10, 6, 8};
    int n = arr.size();
    int sum = 10;

    cout << "Recursive: " << CntWays(arr, n, sum) << endl;

    vector<vector<int>> dpMemo(n+1, vector<int>(sum+1, -1));
    cout << "Memoized: " << CntWaysMemo(arr, n, sum, dpMemo) << endl;

    vector<vector<int>> dpTabular(n+1, vector<int>(sum+1, 0));
    cout << "Tabular: " << CntWaysTabular(arr, n, sum, dpTabular) << endl;

    return 0;
}
