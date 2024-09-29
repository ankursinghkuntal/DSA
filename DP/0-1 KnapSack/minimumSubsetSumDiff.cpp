#include <bits/stdc++.h>
using namespace std;

int minSubsetSumDifference(vector<int>& arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    for (int i = 0; i <= n; i++) dp[i][0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
        }
    }

    int min_diff = INT_MAX;
    for (int i = 0; i <= sum/2; i++) {
        if (dp[n][i]) {
            min_diff = min(min_diff, sum - 2*i);
        }
    }

    return min_diff;
}

int main() {
    vector<int> arr = {1, 2, 7};
    int n = arr.size();

    cout << "The minimum difference between the two subsets is: " << minSubsetSumDifference(arr, n) << endl;

    return 0;
}
