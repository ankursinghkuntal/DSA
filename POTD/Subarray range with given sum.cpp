// Given an unsorted array of integers arr[], and a target tar, determine the number of subarrays whose elements sum up to the target value.


    // int subArraySum(vector<int>& arr, int tar) {
    //     int n = arr.size();
    //     unordered_map<int, int> mp;
    //     int cnt = 0;
    //     int sum = 0;
    
    //     for (int i = 0; i < n; i++) {
    //         sum += arr[i];
            
    //         if (sum == tar) 
    //             cnt++;
            
    //         if (mp.find(sum - tar) != mp.end()) {
    //             cnt += mp[sum - tar];
    //         }
    
    //         mp[sum]++;
    //     }
        
    //     return cnt;
    // }