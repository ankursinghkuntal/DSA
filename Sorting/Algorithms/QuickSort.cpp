void quickSort(int arr[], int low, int high)
    {
        // Lomuto partition
        if(low < high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
        
        // Hoare partition
        if(low < high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot);
            quickSort(arr, pivot+1, high);
        }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        // Lomuto partition
        int pivot = arr[high];
        int idx = low - 1;
        for(int j = low; j < high; j++){
            if(arr[j] < pivot){
                idx++;
                swap(arr[j], arr[idx]);
            }
        }
        swap(arr[idx+1], arr[high]);
        return idx+1;
        
        // Hoare partition
        int pivot = arr[low];
        int i = low - 1;
        int j = high + 1;
        while(true){
            do {
                i++;
            } while(arr[i] < pivot);
            do {
                j--;
            }while(arr[j] > pivot);
            if(i >= j) return j;
            swap(arr[i],arr[j]);
        }
    }