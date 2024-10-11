// Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet 
// can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.



    // long long findMinDiff(vector<long long> a, long long n, long long m){
    // //code
    //       sort(a.begin(),a.end());
    //       if(m > n) return -1;
    //       long long res = a[m-1] - a[0];
    //       for(int i = 1; i < n-m+1; i++){
    //           res = min(res, a[i+m-1]-a[i]);
    //       }
    //       return res;
    // }   