// long long countANDmerge(vector<int> &arr, int l, int m, int r) {
//         int n1 = m - l + 1; 
//         int n2 = r - m;
        
//         vector<long long> left(n1);
//         vector<long long> right(n2);
        
//         for (int i = 0; i < n1; i++) 
//             left[i] = arr[l + i];
//         for (int i = 0; i < n2; i++) 
//             right[i] = arr[m + 1 + i];
        
//         long long res = 0;  
//         int i = 0, j = 0, k = l;
        
//         while (i < n1 && j < n2) {
//             if (left[i] > 2 * right[j]) {
//                 res += (n1 - i);
//                 j++;
//             } else {
//                 i++;
//             }
//         }
        
//         i = 0; 
//         j = 0; 
//         k = l;
        
//         while (i < n1 && j < n2) {
//             if (left[i] <= right[j]) {
//                 arr[k] = left[i];
//                 i++;
//             } else {
//                 arr[k] = right[j];
//                 j++;
//             }
//             k++;
//         }
        
//         while (i < n1) {
//             arr[k] = left[i];
//             i++;
//             k++;
//         }
//         while (j < n2) {
//             arr[k] = right[j];
//             j++;
//             k++;
//         }
//         return res;
//     }
    
//     long long countInversion(vector<int> &arr, int l, int r) {
//         long long res = 0;
//         if (l < r) {
//             int m = l + (r - l) / 2;
//             res += countInversion(arr, l, m);
//             res += countInversion(arr, m + 1, r);
//             res += countANDmerge(arr, l, m, r);
//         }
//         return res;
//     }
    
//     int reversePairs(vector<int>& nums) {
//         vector<int> arr = nums;
//         int n = arr.size();
//         return countInversion(arr, 0, n - 1);
//     }