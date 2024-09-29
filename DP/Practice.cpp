// #include <bits/stdc++.h>
// using namespace std;

// int Rec(int arr[], int i, int j, int mn){
//     if(i >= j) return 0;
//     for(int k = i; k  < j; k++){
//         int temp = Rec(arr, i, k, mn) + Rec(arr, k+1, j, mn) + arr[i-1]*arr[k]*arr[j];
//         mn = min(mn,temp);
//     }
//     return mn;
// }

// int Memo(int arr[], int i, int j, int mn, vector<vector<int>>&dp){
//     // use dp.size() inplace of n
//     for(int i = 0; i < dp.size(); i++){
//         for(int j = 0; j < dp.size(); j++){
//             if(i >= j) dp[i][j] = 0;
//         }
//     }

//     if(dp[i][j] != INT_MAX) return dp[i][j];
//     for(int k = i; k  < j; k++){
//         int temp = Memo(arr, i, k, mn, dp) + Memo(arr, k+1, j, mn, dp) + arr[i-1]*arr[k]*arr[j];
//         mn = min(mn,temp);
//     }
//     return dp[i][j] = mn;
// }

// int Tab(int arr[], int n){
//     vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
//     for(int i = 1; i < n; i++) dp[i][i] = 0;
//     for(int gap = 1; gap < n-1; gap++){
//         for(int i = 1; i+gap < n; i++){
//             int j = i+gap;
//             for(int k = i; k < j; k++){
//                 dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j]);
//             }
//         }
//     }
//     return dp[1][n-1];
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     cout << "Minimum number of multiplications is: " << Rec(arr, 1, n-1, INT_MAX) << endl;

//     vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
//     cout << "Minimum number of multiplications is: " << Memo(arr, 1, n-1, INT_MAX, dp) << endl;
//     cout << "Minimum number of multiplications is: " << Tab(arr, n) << endl;
// }