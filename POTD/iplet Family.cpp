// Given an array arr of integers. Find whether three numbers are such that the sum of two elements equals the third element.



// class Solution {
// public:
//     bool findTriplet(vector<int>& arr) {
//         if (arr.size() < 3) return false;

//         sort(arr.begin(), arr.end());

//         for (int i = 2; i < arr.size(); i++) {
//             int left = 0;
//             int right = i - 1;

//             while (left < right) {
//                 int sum = arr[left] + arr[right];
                
//                 if (sum == arr[i]) return true;
//                 else if (sum < arr[i]) left++;
//                 else right--;
//             }
//         }
//         return false;
//     }
// };