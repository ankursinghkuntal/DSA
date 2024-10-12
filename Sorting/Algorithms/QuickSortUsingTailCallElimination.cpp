    // void quickSort(int arr[], int low, int high) {
    //     while (low < high) {
    //         int pivot = partition(arr, low, high);
    //         quickSort(arr, low, pivot - 1);
    //         low = pivot + 1;
    //     }
    // }

    // int partition(int arr[], int low, int high) {
    //     int pivot = arr[high];
    //     int idx = low - 1;
    //     for (int j = low; j < high; j++) {
    //         if (arr[j] < pivot) {
    //             idx++;
    //             swap(arr[j], arr[idx]);
    //         }
    //     }
    //     swap(arr[idx + 1], arr[high]);
    //     return idx + 1;
    // }