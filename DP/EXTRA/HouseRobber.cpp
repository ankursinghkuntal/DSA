    // // 1.Recursive
    // // int recursive(int arr[], int n){
    // //     if(n < 0) return 0;
    // //     if(n == 0) return arr[n];
    // //     return max(arr[n]+recursive(arr,n-2),recursive(arr,n-1));
    // // }
    
    // // 2.Tabulation
    // int recursive(int arr[], int n, vector<int>&dp){
    //     if(n == 1) return arr[0];
        
    //     dp[0] = arr[0];
    //     dp[1] = max(arr[0],arr[1]);
        
    //     for(int i = 2; i < n; i++){
    //         dp[i] = max( arr[i]+dp[i-2], dp[i-1]);
    //     }
    //     return dp[n-1];
    // }
    
    
    // int FindMaxSum(int arr[], int n)
    // {
    //     // Your code here
        
    //     // 1.Recursive
    //     // return recursive(arr, n-1);
        
    //     vector<int>dp(n,0);
    //     return recursive(arr, n, dp);
    // }