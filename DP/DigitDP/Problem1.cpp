// count the number of integers from L to R (both inclusive) that have the digit sum = X.
//X = given sum


#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001][2];

int solve(string num, int n , int X, bool tight){
    if(X < 0) return 0;
    if(n == 0) return X == 0;

    if(n == 1){
        if(X >= 0 && X <= 9) return 1;
        return 0;
    }

    if(dp[n][X][tight] != -1) return dp[n][X][tight];

    int ub = tight ? num[num.length() - n] - '0' : 9;
    int ans = 0;
    for(int dig = 0; dig <= ub; dig++){
        ans += solve(num, n-1, X-dig, tight & (dig == ub));
    }
    return dp[n][X][tight] = ans;
}

int main(){
    memset(dp, -1, sizeof(dp));
    string L = "", R = "1120343423443535";
    cout << solve(R, R.length(), 15, 1) << endl;
    return 0;
}