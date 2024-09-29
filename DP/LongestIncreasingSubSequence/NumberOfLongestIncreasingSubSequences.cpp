// Given an integer array nums, return the number of longest increasing subsequences.
// Notice that the sequence has to be strictly increasing.

    
    // int findNumberOfLIS(vector<int>& nums) {
    //     int n = nums.size();
    //     if (n == 1) return 1;

    //     vector<int>LIS(n,1);
    //     vector<int>cnt(n,1);
    //     int max_length = 0;

    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < i; j++){
    //             if(nums[i] > nums[j]){
    //                 if(LIS[i] < LIS[j] + 1){
    //                     LIS[i] = LIS[j] + 1;
    //                     cnt[i] = cnt[j];
    //                 }else if(LIS[i] == LIS[j] + 1){
    //                     cnt[i] += cnt[j];
    //                 }
    //             }
    //         }
    //         max_length = max(max_length,LIS[i]);
    //     }

    //     int ans = 0;
    //     for(int i = 0; i < n; i++){
    //         if(LIS[i] == max_length){
    //             ans += cnt[i];
    //         }
    //     }
    //     return ans;
    // }