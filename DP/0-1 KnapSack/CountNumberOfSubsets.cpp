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
