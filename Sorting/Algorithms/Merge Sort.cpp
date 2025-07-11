    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m-l+1;  int n2 = r-m;
        
        int left[n1] = {0}, right[n2] = {0};
        
        for(int i = 0; i < n1; i++){
            left[i] = arr[l+i];
        }
        
        for(int j = 0; j < n2; j++){
            right[j] = arr[m+1+j];
        }
        
        int i = 0, j = 0, k = l;
        
        while(i < n1 && j < n2){
            if(left[i] <= right[j]){
                arr[k] = left[i];
                k++;
                i++;
            }else{
                arr[k] = right[j];
                k++;
                j++;
            }
        }
        
        while(i < n1){
            arr[k] = left[i];
            k++;
            i++;
        }
        
        while(j < n2){
            arr[k] = right[j];
            k++;
            j++;
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(r > l){
            int m = l + (r-l)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
    }