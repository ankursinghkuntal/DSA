// Given an array arr[] of integers, the task is to count the number of ways to split given array elements into two disjoint groups 
// such that the XOR of elements of each group is equal.
// Note: The answer could be very large so print it by doing modulo with 109 + 7.




    // int MOD = 1000000007;
    
    // long long power(long long x, long long y) {
    //     long long res = 1;
    //     while (y > 0) {
    //         if (y % 2 == 1)
    //             res = (res * x) % MOD;
    //         x = (x * x) % MOD;
    //         y /= 2;
    //     }
    //     return res;
    // }

    // int countgroup(vector<int>& arr) {
    //     // Complete the function
    //     int ans = 0;
    //     int n = arr.size();
    //     for(int i = 0; i < n; i++){
    //         ans ^= arr[i];
    //     }
    //     if(ans != 0) return 0;
    //     else{
    //         return power(2,n-1)-1;
    //     }
    // }