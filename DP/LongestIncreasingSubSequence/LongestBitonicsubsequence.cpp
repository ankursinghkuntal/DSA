// Given an array of positive integers. Find the maximum length of Bitonic subsequence. 
// A subsequence of array is called Bitonic if it is first strictly increasing, then strictly decreasing. 
// Return the maximum length of bitonic subsequence.
 
// Note : A strictly increasing or a strictly decreasing sequence should not be considered as a bitonic sequence


//  Minimum Number of Removals to Make Mountain Array  =>  LEETCODE



    // 1.  first part binary search
    // int ceilIdx(vector<int>tail, int l, int r, int val){
    //     while(r > l){
    //         int mid = (l+r)/2;
    //         if(tail[mid] >= val){
    //             r = mid;
    //         }else{
    //             l = mid+1;
    //         }
    //     }
    //     return r;
    // }
  
    // int LongestBitonicSequence(int n, vector<int> &nums) {  ================
        
        
        // 1.
        // vector<int> LIS(n, 1);
        // vector<int> tailLIS;
    
        // for (int i = 0; i < n; i++) {
        //     if (tailLIS.empty() || nums[i] > tailLIS.back()) {
        //         tailLIS.push_back(nums[i]);
        //     } else {
        //         int idx = ceilIdx(tailLIS, 0, tailLIS.size() - 1, nums[i]);
        //         tailLIS[idx] = nums[i];
        //     }
        //     LIS[i] = tailLIS.size();
        // }

        // vector<int> LDS(n, 1);
        // vector<int> tailLDS;
    
        // for (int i = n - 1; i >= 0; i--) {
        //     if (tailLDS.empty() || nums[i] > tailLDS.back()) {
        //         tailLDS.push_back(nums[i]);
        //     } else {
        //         int idx = ceilIdx(tailLDS, 0, tailLDS.size() - 1, nums[i]);
        //         tailLDS[idx] = nums[i];
        //     }
        //     LDS[i] = tailLDS.size();
        // }

        // int ans = 0;
        // for (int i = 0; i < n; i++) {
        //     if(LIS[i] > 1 && LDS[i] > 1){
        //         ans = max(ans,LIS[i]+LDS[i]);
        //     }
        // }

        // return ans;



        // 2.
    // vector<int> lis1(n, 1), lis2(n, 1);

    // for (int i = 1; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         if (nums[j] < nums[i]) {
    //             lis1[i] = max(lis1[i], 1 + lis1[j]);
    //         }
    //     }
    // }

    // for (int i = n - 2; i >= 0; i--) {
    //     for (int j = n - 1; j > i; j--) {
    //         if (nums[j] < nums[i]) {
    //             lis2[i] = max(lis2[i], 1 + lis2[j]);
    //         }
    //     }
    // }

    // int ans = 0;
    // for (int i = 0; i < n; i++) {
    //     if (lis1[i] > 1 && lis2[i] > 1) {
    //         ans = max(ans, lis1[i] + lis2[i] - 1);
    //     }
    // }
    
    // return ans;
    // }