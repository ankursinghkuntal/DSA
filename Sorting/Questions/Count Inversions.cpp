// Given an array of integers. Find the Inversion Count in the array.  Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum.




    // long long countANDmerge(vector<long long> &arr, int l, int m, int r) {
    //     int n1 = m - l + 1; 
    //     int n2 = r - m;
        
    //     vector<long long> left(n1);
    //     vector<long long> right(n2);
        
    //     for (int i = 0; i < n1; i++) 
    //         left[i] = arr[l + i];
    //     for (int i = 0; i < n2; i++) 
    //         right[i] = arr[m + 1 + i];  // Fixed indexing for right array
        
    //     long long res = 0;  // Use long long for large results
    //     int i = 0, j = 0, k = l;
        
    //     while (i < n1 && j < n2) {
    //         if (left[i] <= right[j]) {
    //             arr[k] = left[i];
    //             i++;
    //         } else {
    //             arr[k] = right[j];
    //             res += (n1 - i);  // Count inversions
    //             j++;
    //         }
    //         k++;
    //     }
        
    //     while (i < n1) {
    //         arr[k] = left[i];
    //         i++;
    //         k++;
    //     }
    //     while (j < n2) {
    //         arr[k] = right[j];
    //         j++;
    //         k++;
    //     }
    //     return res;
    // }
    
    // long long countInversion(vector<long long> &arr, int l, int r) {
    //     long long res = 0;
    //     if (l < r) {
    //         int m = l + (r - l) / 2;
    //         res += countInversion(arr, l, m);
    //         res += countInversion(arr, m + 1, r);
    //         res += countANDmerge(arr, l, m, r);
    //     }
    //     return res;  // Return the total count of inversions
    // }
    
    // long long int inversionCount(vector<long long> &arr) {
        
    //     int n = arr.size();
    //     long long cnt = 0;
        
    //     // 1.Brute Force
    //     // for(int i = 0; i < n-1; i++){
    //     //     for(int j = i+1; j < n; j++){
    //     //         if(arr[i] > arr[j]) cnt++;
    //     //     }
    //     // }
    //     // return cnt;
        
        
    //     // 2.Efficient 
    //     return countInversion(arr, 0, n-1);
    // }