
// Given an array arr[ ] of positive elements. Consider the array as a circular array, meaning the element after the last element is the 
// first element of the array. The task is to find the maximum sum of the absolute differences between consecutive elements with shuffling 
// of array elements allowed i.e. shuffle the array elements and make [a1..an] such order that  |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1| 
// is maximized.


// class Solution {
//   public:
//     long long maxSum(vector<int>& arr) {
//         vector<int>brr;
//         int n = arr.size();
//         sort(arr.begin(),arr.end());
//         for(int i = 0; i < n/2; i++){
//             brr.push_back(arr[i]);
//             brr.push_back(arr[n-1-i]);
//         }
//         if(n%2 == 1) brr.push_back(arr[n/2]);
//         long long sum = 0;
//         for(int i = 1; i < n; i++){
//             sum += abs(brr[i]-brr[i-1]);
//         }
//         sum += abs(brr[0]-brr[n-1]);
//         return sum;
//     }
// };