// Given a sorted array arr[] of positive integers, find the smallest positive integer such that it cannot be represented as
//  the sum of elements of any subset of the given array set.


    // long long findSmallest(vector<int> &arr) {
    //     long long res = 1;
    //     for (int i = 0; i < arr.size() && arr[i] <= res; i++) {
    //         res += arr[i];
    //     }
    //     return res;
    // }