// count the number of "boring" numbers within a given range [L, R], where a number 
// is boring if digits at even positions are even and digits at odd positions are odd

#include <bits/stdc++.h>
using namespace std;

int dp[1001][2];
int cnt = 0;

int solve(string num, int n , bool tight){
    if(n == 0) return 0;
    if(n == 1){
        int cnt = 0;
        for(int i = 0; i < num[num.length() - n] - '0'; i++){
            if(i % 2 != 0) continue;
            cnt++;
        }
        return cnt;
    }

    if(dp[n][tight] != -1) return dp[n][tight];

    int ub = tight ? num[num.length() - n] - '0' : 9;
    int ans = 0;
    for(int dig = 0; dig <= ub; dig++){
        if(n % 2 == 0){
            if(dig % 2 == 0) continue;
        }else{
            if(dig % 2 != 0) continue;
        }
        ans += solve(num, n-1, tight & (dig == ub));
    }
    return dp[n][tight] = ans;
}

int main(){
    memset(dp, -1, sizeof(dp));
    string L = "", R = "123456782345";
    cout << solve(R, R.length(), 1) << endl;
    return 0;
}