// Given an Integer n and a list arr. Sort the array using bubble sort algorithm.

    void bubbleSort(int arr[], int n) {
        // Your code here
        for(int i = 0; i < n-1; i++){
            bool swapped = false;
            for(int j = 0; j < n-1-i; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false) break;
        }
    }