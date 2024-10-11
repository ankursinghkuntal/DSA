    // void merge(int n, int m, long long arr1[], long long arr2[]) {
    //     // code here
    //     int i = 0, j = 0, k = 0;
    //     long long temp[m+n];
    //     while(i < n && j < m){
    //         if(arr1[i] <= arr2[j]){
    //             temp[k] = arr1[i];
    //             i++;
    //             k++;
    //         }else{
    //             temp[k] = arr2[j];
    //             k++;
    //             j++;
    //         }
    //     }
    //     while(i < n){
    //         temp[k] = arr1[i];
    //         i++;
    //         k++;
    //     }
    //     while(j < m){
    //         temp[k] = arr2[j];
    //         k++;
    //         j++;
    //     }
    //     // int i, j;
    //     for(i = 0; i < n; i++){
    //         arr1[i] = temp[i];
    //     }
    //     for(j = 0; j < m; j++){
    //         arr2[j] = temp[i+j];
    //     }
    // }