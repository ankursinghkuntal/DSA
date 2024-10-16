// Given a permutation of some of the first natural numbers in an array arr[], determine if the array can be sorted in exactly two swaps. 
// A swap can involve the same pair of indices twice.

// Return true if it is possible to sort the array with exactly two swaps, otherwise return false




    // bool checkSorted(vector<int> &arr) {
        
    //     vector<int> check;
    //     for (int i = 0; i < arr.size(); i++) {
    //         if (arr[i] != i+1) check.push_back(i);
    //     }
        
    //     if (check.size() == 0) return true;
    //     else if (check.size() != 4) return false;
    //     else {
    //         if (arr[check[0]] > arr[check[1]] && arr[check[1]] > arr[check[2]] && arr[check[2]] > arr[check[3]]) return true;
    //         else if (arr[check[0]] > arr[check[1]] && arr[check[1]] < arr[check[2]] && arr[check[2]] > arr[check[3]]) return true;
    //     }
    //     return false;
    // }