    // int sameOccurrence(vector<int>& arr, int x, int y) {
    //     int n = arr.size();
    //     unordered_map<int, int> mp;
    //     mp[0] = 1;

    //     int cntX = 0;
    //     int cntY = 0;
    //     int ans = 0;

    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] == x) cntX++;
    //         if (arr[i] == y) cntY++;

    //         int diff = cntX - cntY;

    //         if (mp.find(diff) != mp.end()) {
    //             ans += mp[diff];
    //         }

    //         mp[diff]++;
    //     }

    //     return ans;
    // }