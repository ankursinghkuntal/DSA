// Your task is to count the number of integers between a and b where no two adjacent digits are the same.


// //////////////////////////////////////////////////////////////////////////////
// // // // // // // NOT VALID FOR LARGER TEST CASES // // // // // // // // // //
////////////////////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

int dp[20][2][2][10]; // pos, tight, non_zero, prev

int solve(string &num, int pos, bool tight, bool non_zero, int prev) {
    if (pos == num.size()) {
        return 1; // Valid number (including 0)
    }
    
    if (dp[pos][tight][non_zero][prev] != -1) return dp[pos][tight][non_zero][prev];

    int ub = tight ? (num[pos] - '0') : 9;
    long long ans = 0;

    for (int dig = 0; dig <= ub; dig++) {
        bool new_tight = tight && (dig == ub);
        if (!non_zero) {
            if (dig == 0) {
                ans += solve(num, pos + 1, new_tight, false, 0);
            } else {
                ans += solve(num, pos + 1, new_tight, true, dig);
            }
        } else {
            if (dig == prev) continue;
            ans += solve(num, pos + 1, new_tight, true, dig);
        }
    }

    return dp[pos][tight][non_zero][prev] = ans;
}

int countValidNumbers(int num) {
    if (num == 0) return 1;
    
    string strNum = to_string(num);
    memset(dp, -1, sizeof(dp));
    return solve(strNum, 0, true, false, 0);
}

int main() {
    long long num1, num2;
    cin >> num1 >> num2;
    
    cout << countValidNumbers(num2) - countValidNumbers(num1 - 1) << endl;
    return 0;
}