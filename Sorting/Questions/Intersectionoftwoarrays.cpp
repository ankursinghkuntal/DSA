    
// Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) 
// of the two arrays.

// For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 


    
    
    // int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    //     // Your code goes here
    //     sort(a,a+n);
    //     sort(b,b+m);
        
    //     int i = 0, j = 0;
    //     int cnt = 0;
        
    //     while(i < n && j < m){
            
    //         if(i > 0 && a[i] == a[i-1]){ 
    //             i++;
    //             continue; 
    //         }
            
    //         if(j > 0 && b[j] == b[j-1]){
    //             j++;
    //             continue; 
    //         } 
                
            
    //         if(a[i] < b[j]) i++;
    //         else if(a[i] > b[j]) j++;
    //         else{
    //             cnt++;
    //             i++;
    //             j++;
    //         }
    //     }
        
    //     return cnt;
    // }