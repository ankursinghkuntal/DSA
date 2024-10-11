    
    // Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct 
    // elements in the two arrays. Return the elements in sorted order.
    
    
    
    // vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    //     vector<int> Union;
    //     int i = 0, j = 0;
    
    //     while(i < n && j < m) {
    //         // Ensure valid bounds for i and j
    //         if(i > 0 && arr1[i] == arr1[i-1]) {
    //             i++;
    //             continue;
    //         }
    //         if(j > 0 && arr2[j] == arr2[j-1]) {
    //             j++;
    //             continue;
    //         }
    //         if(arr1[i] < arr2[j]) {
    //             Union.push_back(arr1[i]);
    //             i++;
    //         }
    //         else if(arr1[i] > arr2[j]) {
    //             Union.push_back(arr2[j]);
    //             j++;
    //         }
    //         else {
    //             Union.push_back(arr1[i]);
    //             i++;
    //             j++;
    //         }
    //     }
    
    //     while(i < n) {
    //         if(i > 0 && arr1[i] != arr1[i-1]) {
    //             Union.push_back(arr1[i]);
    //         }
    //         i++;
    //     }
    
    //     while(j < m) {
    //         if(j > 0 && arr2[j] != arr2[j-1]) {
    //             Union.push_back(arr2[j]);
    //         }
    //         j++;
    //     }
    
    //     return Union;
    // }





    // vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    //     set<int>st;
    //     st.insert(arr1,arr1+n);
    //     st.insert(arr2,arr2+m);
        
    //     vector<int>Union(st.begin(),st.end());
    //     return Union;
    // }



    