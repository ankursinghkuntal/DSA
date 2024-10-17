    
// You are given an integer num. You can swap two digits at most once to get the maximum valued number.
// Return the maximum valued number you can get.
    
    
    // int maximumSwap(int num) {
    //     string str = to_string(num);
    //     int n = str.size();
    //     int maxIdx = n - 1;
    //     int leftIdx = -1, rightIdx = -1;
        
    //     for (int i = n - 2; i >= 0; --i) {
    //         if (str[i] < str[maxIdx]) {
    //             leftIdx = i;
    //             rightIdx = maxIdx;
    //         } else if (str[i] > str[maxIdx]) {
    //             maxIdx = i;
    //         }
    //     }
        
    //     if (leftIdx != -1) {
    //         swap(str[leftIdx], str[rightIdx]);
    //         return stoi(str);
    //     }
        
    //     return num;
    // }