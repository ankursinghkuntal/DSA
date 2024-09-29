// Given an array of n positive integers. Find the sum of the maximum sum subsequence of the given array such that 
// the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence. 
// Given an array of n positive integers. Find the sum of the maximum sum subsequence of the given array such that 
// the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence. 



    // int maxSum (int arr[], int n, vector<int>dp){
	//     if(n == 1) return arr[0];
	//     dp[0] = arr[0];
	    
	//     for(int i = 1; i < n; i++){
	//         for(int j = 0; j < i; j++){
	//             if(arr[i] > arr[j]){
	//                 dp[i] = max(dp[i],dp[j]);
	//             }
	//         }
	//         dp[i] += arr[i];
	//     }
	//     int sum = 0;
	//     for(int i = 0; i < n; i++){
	//         sum = max(sum,dp[i]);
	//     }
	//     return sum;
    // }
	
	// int maxSumIS(int arr[], int n)  
	// {  
	//     vector<int>dp(n,0);
	//     return maxSum(arr,n,dp);
	// } 