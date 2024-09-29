//    You are given N pairs of numbers. In every pair, the first number is always smaller than the second number.
//     A pair (c, d) can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. 
//     You have to find the longest chain which can be formed from the given set of pairs.  


//  ====================================================same as activity selection in Greedy=================================


   // 1.
    // static bool compare(struct val a, struct val b) {
    //     return a.second < b.second;  
    // }

    // int maxChainLen(struct val p[], int n) {
    //     if (n == 1) return 1;

    //     sort(p, p + n, compare);

    //     int cnt = 1;
    //     int prev = 0;

    //     for (int i = 1; i < n; i++) {
    //         if (p[i].first > p[prev].second) {
    //             cnt++;
    //             prev = i;
    //         }
    //     }

    //     return cnt;
    // }

    // 2.

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int maxChainLen(vector<pair<int, int>> temp, int n) {
    // Sort using the custom comparator
    sort(temp.begin(), temp.end(), compare);
    
    vector<int> LIS(n, 1);
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (temp[i].first > temp[j].second) {
                LIS[i] = max(LIS[i], LIS[j] + 1);
            }
        }
    }
    
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        max_len = max(max_len, LIS[i]);
    }
    
    return max_len;
}

int main() {
    vector<pair<int, int>> temp = {{5, 24}, {15, 25}, {17, 40}, {10, 60}};
    int n = temp.size();
    
    cout << "Maximum Chain Length: " << maxChainLen(temp, n) << endl;
    
    return 0;
}


