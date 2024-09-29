// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

#include <bits/stdc++.h>
using namespace std;

// 1.Recursive
bool Subset(int arr[], int n, int sum){
    if( sum == 0 ) return true;
    if( n == 0 ) return false;

    if(arr[n-1] <= sum){
        return Subset(arr, n-1, sum) || Subset(arr, n-1, sum-arr[n-1]);
    }else{
        return Subset(arr, n-1, sum);
    }
}

// 2.Memoised
bool Subset(int arr[], int n, int sum, vector<vector<bool>>dp){
    for(int i = 0; i <= n; i++) dp[i][0] = true;
    for(int j = 1; j <= sum; j++) dp[0][j] = false;

    if(arr[n-1] <= sum){
        return dp[n][sum] = Subset(arr, n-1, sum) || Subset(arr, n-1, sum-arr[n-1]);
    }else{
        return dp[n][sum] = Subset(arr, n-1, sum);
    }
}

// 3.Tabulation
bool SubsetTab(int arr[], int n, int sum, vector<vector<bool>>dp){
    for(int i = 0; i <= n; i++) dp[i][0] = true;
    for(int j = 1; j <= sum; j++) dp[0][j] = false;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
    int n = 5;
    int sum = 11;
    int arr[5] = {2, 3, 7, 8, 10};    

    // 1.Recursive
    // cout <<  Subset(arr, n, sum)  << endl;

    // 2.Memoised
    // vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    // cout << Subset(arr,n,sum,dp) << endl;

    // 3.Tabulation
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    cout << SubsetTab(arr,n,sum,dp) << endl;

    return 0;
}
