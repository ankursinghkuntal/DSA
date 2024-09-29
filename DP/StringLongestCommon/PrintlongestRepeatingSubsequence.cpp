#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestRepeatingSubsequence(string s) {
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == s[j - 1] && i != j) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    string str2 = "";
    int i = n, j = n;
    while (i > 0 && j > 0) {
        if (s[i - 1] == s[j - 1] && i != j) {
            str2 += s[i - 1];
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(str2.begin(), str2.end());

    return str2;
}

int main() {
    string s = "aabb";
    cout << "Longest Repeating Subsequence: " << longestRepeatingSubsequence(s) << endl;
    return 0;
}
