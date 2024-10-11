// Given two sorted arrays arr1[] and arr2[] in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 
// so that it contains the first n elements and modify arr2 so that it contains the last m elements.



    // void merge(int n, int m, long long arr1[], long long arr2[]) {
    //     // code here
    //     int left = n-1;
    //     int right = 0;
    //     while(left >= 0 && right < m){
    //         if(arr1[left] > arr2[right]){
    //             swap(arr1[left],arr2[right]);
    //         }
    //         left--;
    //         right++;
    //     }
    //     sort(arr1,arr1+n);
    //     sort(arr2,arr2+m);
    // }