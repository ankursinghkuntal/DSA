    // int partition(vector<int>& arr, int low, int high) {
    //     int pivot = arr[high];
    //     int idx = low - 1;
    //     for(int j = low; j < high; j++){
    //         if(arr[j] < pivot){
    //             idx++;
    //             swap(arr[j], arr[idx]);
    //         }
    //     }
    //     swap(arr[idx+1],arr[high]);
    //     return idx + 1;
    // }

    // int kthSmallest(vector<int>& arr, int k) {
    //     int l = 0;
    //     int r = arr.size() - 1;
    //     while (l <= r) {
    //         int p = partition(arr, l, r);
    //         if (p == k - 1) return arr[p];
    //         else if (p < k - 1) l = p + 1;
    //         else r = p - 1;
    //     }
    //     return -1;
    // }